#include <iostream>
#include <cstring>
#include "Game.hpp"
using namespace std;

int main() {
    Button x = Button(0);
    char option[] = "0";
    
    cout << "1. BFS" << endl;
    cout << "2. DFS" << endl;
    cout << "Masukkan opsi tur-produk (1 / 2): ";
    cin >> option;
    while (strcmp(option,"1") != 0 && strcmp(option,"2") != 0) {
        cout << endl << "Masukan Anda tidak valid!" << endl;
        cout << "Masukkan opsi tur-produk (1 / 2): ";
        cin >> option;
    }
    cout << endl;

    x.showTour();
    x.printDisplay();
    
    return 0;
}