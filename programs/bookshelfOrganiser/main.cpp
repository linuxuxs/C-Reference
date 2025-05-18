#include "bookshelf.h"
#include <iostream>

using namespace std;

void add_book(Bookshelf& shelf, std::string name, std::string genre, int read);
void increment_read(Bookshelf& shelf, std::string name, int increment);

int main(){

    Bookshelf bookshelf;

    bookshelf.display();

    add_book(bookshelf, "The Haunting of Hill House", "Horror/Classic Psychological", 2);
    add_book(bookshelf, "The Silent Patient", "Horror/Psychological", 6);
    add_book(bookshelf, "House of Leaves", "Horror/Psychological", 0);
    add_book(bookshelf, "The Silent Patient", "Horror/Psychological", 6);

    bookshelf.display();

    increment_read(bookshelf, "The Love Hypothesis", 4);
    increment_read(bookshelf, "House of Leaves", 1);
    increment_read(bookshelf, "The Midnight Library ", 4);

    bookshelf.display();

}

void add_book(Bookshelf& books, std::string name, std::string genre, int read){
    if(books.add_book(name, genre, read)){
        cout << "------------\n";
        cout << "Book added in the shelf!\nName: " << name << endl;
        cout << "------------\n";
    } else {
        cout << "------------\n";
        cout << "There is already a book named '" << name << "' in the bookshelf!\n";
        cout << "------------\n";
    }
}


void increment_read(Bookshelf& shelf, std::string name, int increment){
    if(shelf.increment_read(name, increment)){
        cout << "------------\n";
        cout << "Read number for book '" << name << "' has been incremented by " << increment << "!!\n";
        cout << "------------\n"; 
    } else {
        cout << "------------\n";
        cout << "There is no such book with the name '" << name << "' in the bookshelf!\n";
        cout << "------------\n";
    }
}
