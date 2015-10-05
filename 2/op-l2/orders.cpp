#include "orders.h"

Orders::Orders() {
    order ord = { 0, 0, ""};
}

void Orders::addOrder(Catalogue*& cat, Clients*& cl) {
    std::vector<Clients::client> clients = cl->getClients();
    std::vector<Catalogue::game> games = cat->getGames();

    order ord;

    std::cout << "You're gonna add the new order" << std::endl;

    std::cout << "Enter id of client:" << std::endl;

    std::cin >> ord.clientId ;

    // check for client's id input
    bool err = 1;
    for (auto & i : clients) {
        if (i.id == ord.clientId) {
            err = 0;
            break;
        }
    }
    if (err) {
        std::cout << "Wrong input!!" << std::endl;
        return;
    }

    std::cin.ignore(INT_MAX,'\n');

    std::cout << "Enter date of order:" << std::endl;
    getline(std::cin, ord.date);

    std::cout << "Enter id of game:" << std::endl;
    std::cin >> ord.gameId ;

    err = 1;
    for (auto & i : games) {
        if (i.id == ord.gameId) {
            err = 0;
            break;
        }
    }
    if (err) {
        std::cout << "Wrong input!!" << std::endl;
        return;
    }

    std::cout << "Done." << std::endl;

    orders.push_back(ord);
}

void Orders::showInDetail(Catalogue*& cat, Clients*& cl) {
    using namespace std;
    std::vector<Catalogue::game> games = cat->getGames();
    std::vector<Clients::client> clients = cl->getClients();

    cout << setw(30) << left << "User Name" << " | "
         << setw(30)  << left << "Game Name" << " | "
         << setw(14) << left << "Date of order" << " | "
         << endl;

    cout << "-----------------------------------------"
         << "-----------------------------------------"
         << endl;

    for (const auto & i : orders) {
        for (const auto & j : clients) {
            if (i.clientId == j.id) {
                cout << setw(30) << j.fullName << " | ";
                break;
            }
        }
        for (const auto & j : games) {
            if (i.gameId == j.id) {
                cout << setw(30) << j.name << " | ";
                break;
            }
        }
        cout << setw(14) << i.date << endl;
    }
}

void Orders::show() {
    std::vector<order>::iterator i;
    using namespace std;

    cout << setw(10) << left << "Client id" << " | "
         << setw(8)  << left << "Game id" << " | "
         << setw(14) << left << "Date of order" << " | "
         << endl;

    cout << "----------------------------------------"
         << endl;

    for (i = orders.begin(); i != orders.end(); i++) {
        std::cout << std::setw(10) << i->clientId << " | "
                  << std::setw(8) << i->gameId << " | "
                  << std::setw(14) << i->date << " | "
                  << std::endl;
    }
}

Orders::~Orders() {
    std::cout << "Orders. Destructor." << std::endl;
    this->orders.clear();
}

// Вопросы к этой лабе:
// конструкторы инициализации, копирования
// что такое статик?
// зачем нужны списки инициализации в конструкторах?
// зачем нужны конструкторы копирования?
//
