#include "Reader.h"
#include <iostream>

Reader::Reader(int tempID, Bookshelf& tempBookshelf) : bookshelf(tempBookshelf), ID(tempID) {}

void Reader::read() {
    while (true) {
        for (auto& book : bookshelf.books) {
            book->readBook(ID);
        }
    }
}
