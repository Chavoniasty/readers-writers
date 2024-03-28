#include "Writer.h"
#include <iostream>

Writer::Writer(int tempID, Bookshelf& tempBookshelf) : bookshelf(tempBookshelf), ID(tempID) {}

void Writer::write() {
    while (true) {
        for (auto& book : bookshelf.books) {
            book->writeBook(ID);
        }
    }
}
