#ifndef BOOK_H
#define BOOK_H

#include <vector>
#include <shared_mutex>

class Book {
private:
    int bookID;
    std::shared_mutex mutex;
    int readCount;
    std::vector<int> bookContent;

public:
    Book(int tempID);
    void readBook(int readerID);
    void writeBook(int writerID);
};

#endif // BOOK_H