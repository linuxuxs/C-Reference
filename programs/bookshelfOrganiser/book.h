#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>
#include <string>


class Book{
private:
    std::string name;
    std::string genre;
    int num_read;
public:
    //constructor
    Book(std::string name_val = "None", std::string genre_val = "None", int read = 0);
    //destructor
    ~Book() = default;
    //copy constructor
    Book(const Book& source);
    //getters
    std::string get_name() const;
    std::string get_genre() const;
    int get_num_read() const;
    //increment read num method
    void increment_read_num(int);
    //display info about book
    void display()const;
};

#endif //BOOK_H_
