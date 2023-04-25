#include <iostream>
#include "Game.hpp"
using namespace std;

Game::Game(vector<Button*> list_button) {
    char nameA[] = "ZECTER";
    char nameB[] = "CALIBUR";
    char nameC[] = "RESSHA";
    char nameD[] = "SHURIKEN";
    char nameE[] = "SHODOPHONE";
    char nameF[] = "KUNAI";
    //--------------------
    Things A = Things(1, 45000, nameA);
    Things B = Things(2, 24000, nameB);
    Things C = Things(3, 17500, nameC);
    Things D = Things(4, 10000, nameD);
    Things E = Things(5, 30000, nameE);
    Things F = Things(6, 12500, nameF);
    //--------------------
    this->buyable[0] = A;
    this->buyable[1] = B;
    this->buyable[2] = C;
    this->buyable[3] = D;
    this->buyable[4] = E;
    this->buyable[5] = F;

    Graph g(17);
    g.addEdge(0, 1, true);
    g.addEdge(0, 4, true);
    g.addEdge(0, 7, true);
    g.addEdge(0, 10, true);
    g.addEdge(0, 12, true);
    g.addEdge(0, 15, true);
    //--------------------
    g.addEdge(1, 2, true);
    g.addEdge(1, 3, true);
    //--------------------
    g.addEdge(4, 5, true);
    g.addEdge(4, 6, true);
    //--------------------
    g.addEdge(7, 8, true);
    g.addEdge(7, 9, true);
    //--------------------
    g.addEdge(10, 11, true);
    //--------------------
    g.addEdge(12, 13, true);
    g.addEdge(12, 14, true);
    //--------------------
    g.addEdge(15, 16, true);

    this->app_structure = g;
    this->money = 10000;
    this->change = 0;
    this->list_button = list_button;
    this->curr_state = -1;
}

Graph Game::getGraph() {
    return (this->app_structure);
}

vector<Button*> Game::getListButton() {
    return (this->list_button);
}

int Game::getMoney() {
    return (this->money);
}

vector<Things> Game:: getInventory() {
    return (this->inventory);
}

int Game::getCurrentState() {
    return (this->curr_state);
}

void Game::setCurrentState(int state) {
    this->curr_state = state;
}

int Game::countTotalPrice() {
    int price = 0;
    for (int i = 0; i < this->cart.size(); i++) {
        price = price + this->cart[i].getPrice();
    }
    return (price);
}

void Game::cartToInventory() {
    for (int i = 0; i < this->cart.size(); i++) {
        this->inventory.push_back(this->cart[i]);
    }
    this->cart.clear();
}

void Game::doBFS() {
    this->app_structure.BFS(0);
}

void Game::doDFS() {
    this->app_structure.DFS(0);
}

void Game::inputCommand() {
    bool commandTrue = false;
    char command[] = "TEMPLATE";
    cout << endl << "Masukkan perintah: ";
    cin >> command;

    if (strcmp(command,"STATUS") == 0) {
        cout << "Saldo Anda: " << this->money << endl;
        cout << "Isi keranjang Anda: ";
        for (int i = 0; i < this->cart.size(); i++) {
            cout << this->cart[i].getName() << " ";
        }
        cout << endl << "Harga semua barang di keranjang: " << this->priceCart;
        cout << endl << "Barang milik Anda: ";
        for (int i = 0; i < this->inventory.size(); i++) {
            cout << this->inventory[i].getName() << " ";
        }
        cout << endl << "Kembalian yang dapat diklaim: " << this->change << endl;

    } else if (this->curr_state == 0) {
        if (strcmp(command,"REN") == 0) {
            this->setCurrentState(1);
            commandTrue = true;
        } else if (strcmp(command,"YANM") == 0) {
            this->setCurrentState(2);
            commandTrue = true;
        } else if (strcmp(command,"EAT") == 0) {
            this->setCurrentState(3);
            commandTrue = true;
        } else if (strcmp(command,"112") == 0) {
            this->setCurrentState(4);
            commandTrue = true;
        } else if (strcmp(command,"24") == 0) {
            this->setCurrentState(5);
            commandTrue = true;
        } else if (strcmp(command,"8") == 0) {
            this->setCurrentState(6);
            commandTrue = true;
        } else {
            cout << "Masukan Anda tidak valid! Mohon perhatikan kembali tutorialnya." << endl;
        }

    } else if (this->curr_state == 1) {
        if (strcmp(command,"BACK") == 0) {
            this->setCurrentState(0);
            commandTrue = true;
        } else if (strcmp(command,"1") == 0 || strcmp(command,"2") == 0 || strcmp(command,"3") == 0 ||
                   strcmp(command,"4") == 0 || strcmp(command,"5") == 0 || strcmp(command,"6") == 0) {
            int x;
            sscanf(command, "%d", &x);
            this->cart.push_back(this->buyable[x-1]);
            cout << "1 buah " << this->buyable[x-1].getName() << " ditambahkan ke keranjang Anda" << endl;
            this->priceCart = this->countTotalPrice();
        } else {
            cout << "Masukan Anda tidak valid! Mohon perhatikan kembali tutorialnya." << endl;
        }

    } else if (this->curr_state == 2) {
        if (strcmp(command,"BACK") == 0) {
            this->setCurrentState(0);
            commandTrue = true;
        } else if (strcmp(command,"1") == 0) {
            if (this->change != 0) {
                cout << "Kembalian sebesar " << this->change << " telah Anda klaim!" << endl;
                this->money = this->money + this->change;
                this->change = 0;
            } else {
                cout << "Tidak ada kembalian yang bisa diklaim!" << endl;
            }
        } else if (strcmp(command,"2") == 0) {
            cout << "Terima kasih telah menyumbangkan kembalian Anda" << endl;
            this->change = 0;
        } else {
            cout << "Masukan Anda tidak valid! Mohon perhatikan kembali tutorialnya." << endl;
        }

    } else if (this->curr_state == 3) {
        if (strcmp(command,"BACK") == 0) {
            this->setCurrentState(0);
            commandTrue = true;
        } else if (strcmp(command,"1") == 0) {
            if (this->cart.size() != 0) {
                if (priceCart <= this->money) {
                    cout << endl << "Masukkan kode pembelian: ";
                    cin >> command;
                    if (strcmp(command,"SC06") == 0) {
                        this->cartToInventory();
                        this->change = this->change + (this->money - this->priceCart);
                        this->money = 0;
                        this->priceCart = 0;
                        cout << "Terima kasih atas pembelian yang telah Anda lakukan" << endl;
                    } else {
                        cout << "Maaf, kode pembelian yang Anda masukkan salah!" << endl;
                    }
                } else {
                    cout << "Saldo Anda tidak cukup untuk membeli semua isi keranjang!" << endl;
                }
            } else {
                cout << "Keranjang Anda masih kosong!" << endl;
            }
        } else if (strcmp(command,"2") == 0) {
            cout << "Keranjang Anda telah dikosongkan" << endl;
            this->cart.clear();
            this->priceCart = 0;
        } else {
            cout << "Masukan Anda tidak valid! Mohon perhatikan kembali tutorialnya." << endl;
        }
    
    } else if (this->curr_state == 4) {
        if (strcmp(command,"BACK") == 0) {
            this->setCurrentState(0);
            commandTrue = true;
        } else {
            cout << "Masukan Anda tidak valid! Mohon perhatikan kembali tutorialnya." << endl;
        }

    } else if (this->curr_state == 5) {
        if (strcmp(command,"BACK") == 0) {
            this->setCurrentState(0);
            commandTrue = true;
        } else if (strcmp(command,"1") == 0) {
            this->money = this->money + 30000;
            cout << "Saldo Anda telah ditambahkan sebesar 30000" << endl;
        } else if (strcmp(command,"2") == 0) {
            this->money = this->money + 50000;
            cout << "Saldo Anda telah ditambahkan sebesar 50000" << endl;
        } else {
            cout << "Masukan Anda tidak valid! Mohon perhatikan kembali tutorialnya." << endl;
        }

    } else if (this->curr_state == 6) {
        if (strcmp(command,"BACK") == 0) {
            this->setCurrentState(0);
            commandTrue = true;
        } else {
            cout << "Masukan Anda tidak valid! Mohon perhatikan kembali tutorialnya." << endl;
        }
    }

    if (commandTrue == true) {
        if (this->curr_state == 0) {
            this->list_button[0]->printDisplay();
        } else if (this->curr_state == 1) {
            this->list_button[2]->printDisplay();
        } else if (this->curr_state == 2) {
            this->list_button[5]->printDisplay();
        } else if (this->curr_state == 3) {
            this->list_button[8]->printDisplay();
        } else if (this->curr_state == 4) {
            this->list_button[11]->printDisplay();
        } else if (this->curr_state == 5) {
            this->list_button[13]->printDisplay();
        } else if (this->curr_state == 6) {
            this->list_button[16]->printDisplay();
        }
    }
}