#include "book.h"

//constructor implementation
Book::Book(std::string name_val, std::string genre_val, int read) 
    : name{name_val}, genre{genre_val}, num_read{read} {}

//copy constructor implementation
Book::Book(const Book& source)
   : Book(source.name, source.genre, source.num_read){}


//implementation of getters and setters    
std::string Book::get_name() const{
    return this->name;
}

std::string Book::get_genre() const{
    return this->genre;
}

int Book::get_num_read() const{
    return this->num_read;
}

//increment read num method
void Book::increment_read_num(int read){
    num_read += read;
}

//implementation of display
void Book::display() const {  

    std::cout << "------------\n";
    std::cout << "Name: " << get_name() << '\n';
    std::cout << "Genre: " << get_genre() << '\n';
    std::cout << "Read: " << get_num_read() << '\n';
    std::cout << "------------\n"; 
}
