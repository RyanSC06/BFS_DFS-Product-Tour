#include <iostream>
#include "Things.hpp"
using namespace std;

Things::Things() {
    this->ID = 0;
    this->price = 0;
    
    char name[] = "XXX";
    strcpy(this->name, name);
}

Things::Things(int ID, int price, char name[]) {
    this->ID = ID;
    this->price = price;
    strcpy(this->name, name);
}

int Things::getID() {
    return (this->ID);
}

int Things::getPrice() {
    return (this->price);
}

char* Things::getName() {
    return (this->name);
}

Things& Things::operator= (const Things& other) {
    this->ID = other.ID;
    this->price = other.price;
    strcpy(this->name, other.name);
    return *this;
}

// int main() {
//     char name1[] = "SHODOPHONE";
//     Things t1 = Things(5, 30000, name1);
//     cout << t1.getName() << endl;
// }