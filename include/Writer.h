#ifndef WRITER_H
#define WRITER_H

#include "Bookshelf.h"

class Writer {
private:
    int ID;
    Bookshelf& bookshelf;

public:
    Writer(int tempID, Bookshelf& tempBookshelf);
    void write();
};

#endif // WRITER_H