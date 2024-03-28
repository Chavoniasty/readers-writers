#ifndef READER_H
#define READER_H

#include "Bookshelf.h"

class Reader {
private:
    int ID;
    Bookshelf& bookshelf;

public:
    Reader(int tempID, Bookshelf& tempBookshelf);
    void read();
};

#endif // READER_H