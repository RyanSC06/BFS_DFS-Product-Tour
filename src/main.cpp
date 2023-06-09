#include <iostream>
#include <cstring>
#include "Game.hpp"
using namespace std;

int main() {
    // MENYIAPKAN DAN MENGURUTKAN BUTTON
    Button00* b00 = new Button00();
    Button01* b01 = new Button01();
    Button02* b02 = new Button02();
    Button03* b03 = new Button03();
    Button04* b04 = new Button04();
    Button05* b05 = new Button05();
    Button06* b06 = new Button06();

    Button11* b11 = new Button11();
    Button12* b12 = new Button12();

    Button21* b21 = new Button21();
    Button22* b22 = new Button22();

    Button31* b31 = new Button31();
    Button32* b32 = new Button32();

    Button41* b41 = new Button41();
    Button51* b51 = new Button51();
    Button52* b52 = new Button52();
    Button61* b61 = new Button61();

    vector<Button*> list_button;
    list_button.push_back(b00);
    list_button.push_back(b01);
    list_button.push_back(b11);
    list_button.push_back(b12);
    list_button.push_back(b02);
    list_button.push_back(b21);
    list_button.push_back(b22);
    list_button.push_back(b03);
    list_button.push_back(b31);
    list_button.push_back(b32);
    list_button.push_back(b04);
    list_button.push_back(b41);
    list_button.push_back(b05);
    list_button.push_back(b51);
    list_button.push_back(b52);
    list_button.push_back(b06);
    list_button.push_back(b61);


    // MEMINTA OPSI BFS ATAU DFS
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
    

    // MEMBUAT GAME
    Game theGame = Game(list_button);


    // MEMBANGKITKAN TUR-PRODUK
    if (strcmp(option,"1") == 0) {
        theGame.doBFS();
        // for (int i = 0; i < theGame.getGraph().getBFS().size(); i++) {
        //     cout << theGame.getGraph().getBFS()[i] << " ";
        // }
        // cout << endl;

        for (int i = 0; i < theGame.getGraph().getBFS().size(); i++) {
            // cout << endl << "Indeks periksa: " << theGame.getGraph().getBFS()[i] << endl;
            // cout << "Status sekarang: " << theGame.getCurrentState() << endl;
            // cout << "Status yang diperiksa: " << theGame.getListButton()[theGame.getGraph().getBFS()[i]]->getState() << endl;
            if (theGame.getListButton()[theGame.getGraph().getBFS()[i]]->getState() != theGame.getCurrentState()) {
                // cout << "Masuk kasus 1" << endl;
                theGame.setCurrentState(theGame.getListButton()[theGame.getGraph().getBFS()[i]]->getState());
                theGame.getListButton()[theGame.getGraph().getBFS()[i]]->printDisplay();
                if (theGame.getCurrentState() != 0) {
                    cout << endl << "Pada halaman ini," << endl;
                }
                theGame.getListButton()[theGame.getGraph().getBFS()[i]]->showTour();
            } else {
                // cout << "Masuk kasus 2" << endl;
                theGame.getListButton()[theGame.getGraph().getBFS()[i]]->showTour();
            }
            cout << "Tekan \'ENTER\' jika Anda sudah mengerti...";
            cin.sync();
            cin.get();
        }
    } else {
        theGame.doDFS();
        // for (int i = 0; i < theGame.getGraph().getDFS().size(); i++) {
        //     cout << theGame.getGraph().getDFS()[i] << " ";
        // }
        // cout << endl;

        for(int i = 0; i < theGame.getGraph().getDFS().size(); i++) {
            // cout << endl << "Indeks periksa: " << theGame.getGraph().getDFS()[i] << endl;
            // cout << "Status sekarang: " << theGame.getCurrentState() << endl;
            // cout << "Status yang diperiksa: " << theGame.getListButton()[theGame.getGraph().getDFS()[i]]->getState() << endl;
            if (theGame.getListButton()[theGame.getGraph().getDFS()[i]]->getState() != theGame.getCurrentState()) {
                // cout << "Masuk kasus 1" << endl;
                theGame.setCurrentState(theGame.getListButton()[theGame.getGraph().getDFS()[i]]->getState());
                theGame.getListButton()[theGame.getGraph().getDFS()[i]]->printDisplay();
                if (theGame.getCurrentState() != 0) {
                    cout << endl << "Pada halaman ini," << endl;
                }
                theGame.getListButton()[theGame.getGraph().getDFS()[i]]->showTour();
            } else {
                // cout << "Masuk kasus 2" << endl;
                theGame.getListButton()[theGame.getGraph().getDFS()[i]]->showTour();
            }
            cout << "Tekan \'ENTER\' jika Anda sudah mengerti...";
            cin.sync();
            cin.get();
        }
    }

    // MEMULAI PERMAINAN SESUNGGUHNYA
    cout << endl << endl << endl << endl << endl << "Terima kasih sudah menyimak tur-produk kami." << endl;
    cout << endl << "Berikut adalah kondisi yang harus Anda penuhi untuk menang: " << endl
         << "MILIKILAH SALDO SEBESAR 21000, DENGAN MINIMAL 3 BARANG MENJADI MILIK ANDA" << endl;
    cout << endl << "Silakan ketik \'STATUS\' jika Anda ingin melihat informasi detail" << endl
         << "mengenai uang dan barang Anda, keranjang, serta kembalian." << endl
         << "SELAMAT BERBELANJA!";
    theGame.getListButton()[0]->printDisplay();
    theGame.setCurrentState(0);
    
    
    while (theGame.getMoney() != 21000 || theGame.getInventory().size() < 3) {
        theGame.inputCommand();
    }
    cout << endl << endl << "SELAMAT, ANDA BERHASIL!" << endl;
    return 0;
}