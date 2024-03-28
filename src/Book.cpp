#include "Book.h"
#include <iostream>
#include <chrono>
#include <random>
#include <thread>
#include <shared_mutex>

Book::Book(int tempID) : bookID(tempID), readCount(0), bookContent() {
    std::shared_mutex mutex;

}

void Book::readBook(int readerID) {
    mutex.lock_shared();
    if (!bookContent.empty()) {
    std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 1000 + 500));
    std::cout << "Reader " << readerID + 1 << " is reading -> book with ID: " << bookID + 1 << ", content: " << bookContent.back() << "." << " Times book was opened: " << readCount << std::endl;
    readCount++;
    } 
    if (readCount == 3) {
        mutex.unlock();
    }
    mutex.unlock_shared();
}

void Book::writeBook(int writerID) {
    mutex.lock();
    std::this_thread::sleep_for(std::chrono::milliseconds(rand() % 2000 + 500));
    int newElement  = rand() % 10 + 1;
    bookContent.push_back(newElement);
    readCount = 0;
    std::cout << "Writer " << writerID + 1  << " is writing -> book with ID: " << bookID + 1 << ", new content: " << newElement << "." << std::endl;
    mutex.unlock();
}
