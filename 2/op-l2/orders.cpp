#include "orders.h"

Orders::Orders() {
    order ord = { 0, 0, ""};
}

void Orders::addOrder() {
    order ord;

    std::cout << "You're gonna add the new order" << std::endl;

    std::cout << "Enter id of client:" << std::endl;
    std::cin >> ord.clientId ;

    std::cin.ignore(INT_MAX,'\n');

    std::cout << "Enter date of order:" << std::endl;
    getline(std::cin, ord.date);

    std::cout << "Enter id of game:" << std::endl;
    std::cin >> ord.gameId ;

    orders.push_back(ord);
}

void Orders::showInDetail(Catalogue*& catalogue, Clients*& clients) {
    std::vector<Catalogue::game> o = catalogue->getGames();
    std::vector<Clients::client> c = clients->getClients();

    for (std::vector<order>::iterator i = orders.begin(); i != orders.end(); i++) {
        std::vector<Clients::client>::iterator j;
        for (j = c.begin(); j != c.end(); j++) {
            if (i->clientId == j->id) {
                std::cout << j->fullName << " - ";
                break;
            }
        }
        std::vector<Catalogue::game>::iterator x;
        for (x = o.begin(); x != o.end(); x++) {
            if (i->gameId == x->id) {
                std::cout << x->name << " - ";
                break;
            }
        }
        std::cout << i->date << std::endl;
    }
}

void Orders::show() {
    std::vector<order>::iterator i;
    for (i = orders.begin(); i != orders.end(); i++) {
        std::cout << std::setw(10) << i->clientId
                  << std::setw(10) << i->gameId
                  << std::setw(10) << i->date
                  << std::endl;
    }
}

