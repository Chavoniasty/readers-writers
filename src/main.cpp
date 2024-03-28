#include "Reader.h"
#include "Writer.h"
#include "Bookshelf.h"
#include "Book.h"
#include "Constants.h"
#include <vector>
#include <thread>

void init() {
    Bookshelf bookshelf;
    std::vector<std::thread> threads;

    for (int i = 0; i < NUMREADERS; i++) {
        threads.push_back(std::thread(&Reader::read, Reader(i, bookshelf)));
    }
    for (int i = 0; i < NUMWRITERS; i++) {
        threads.push_back(std::thread(&Writer::write, Writer(i, bookshelf)));
    }

    for (auto& thread: threads) {
        thread.join();
    }
}


int main(){
    init();
    return 0;
}

