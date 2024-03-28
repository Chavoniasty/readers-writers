#include "Bookshelf.h"
#include "Constants.h"

Bookshelf::Bookshelf() {
    for (int i = 0; i < NUMBOOKS; i++) {
        books.push_back(std::make_unique<Book>(i));
    }
}