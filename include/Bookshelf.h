#ifndef BOOKSHELF_H
#define BOOKSHELF_H

#include <vector>
#include <memory>
#include <Book.h>

class Bookshelf {
public:
    std::vector<std::unique_ptr<Book>> books;

    Bookshelf();
};

#endif // BOOKSHELF_H