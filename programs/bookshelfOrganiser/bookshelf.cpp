#include "bookshelf.h"

bool Bookshelf::add_book(std::string name, std::string genre, int read){
   
    for(const Book &single_book : bookshelf){
        if(single_book.get_name() == name){
            return false;
        }
    }

    Book temp(name, genre, read);
    bookshelf.push_back(temp);
    return true;
    
}

bool Bookshelf::increment_read(std::string name, int increment){
    for(Book &single_book : bookshelf){
        if(single_book.get_name() == name){
            single_book.increment_read_num(increment);
            return true;    
        }
    }
    return false;
}

void Bookshelf::display() const {
    for(const Book &single_book : bookshelf){
        single_book.display();
    }
}
