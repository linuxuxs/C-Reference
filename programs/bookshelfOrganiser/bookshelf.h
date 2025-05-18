#ifndef SHELF_H_
#define SHELF_H_

#include "book.h"
#include <vector>
#include <string>
#include <iostream>

class Bookshelf{
private:
    std::vector<Book> bookshelf;
public: 
    
    bool add_book(std::string, std::string, int);
    bool increment_read(std::string, int);
    void display() const;

};

#endif //SHELF_H_   
