# Readers-writers problem

The readers-writers problem is a classic concurrency challenge in computer science. It deals with coordinating access to a shared resource by multiple readers and writers. While multiple readers can access the resource concurrently, only one writer can access it at a time to avoid data inconsistencies.

## Getting started
### Prerequisities
- g++

### Installation
- Clone the repo
````bash
git clone https://github.com/Chavoniasty/readers-writers
````
- Build
````bash
cd writers-readers
g++ -o main src/main.cpp src/Book.cpp src/Bookshelf.cpp src/Reader.cpp src/Writer.cpp -I include
````
- Run
```
./main
```
