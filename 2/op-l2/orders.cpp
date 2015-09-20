#include "orders.h"

Orders::Orders()
{
    order ord = { 0, 0, ""};
}

void Orders::addOrder(std::istream& in) {
    order ord;

    std::cout << "You're gonna add the new order, nigga" << std::endl;

    std::cout << "Enter id of client:" << std::endl;
    in >> ord.clientId ;

    std::cin.ignore(INT_MAX,'\n');

    std::cout << "Enter date of order:" << std::endl;
    getline(in, ord.date);

    std::cout << "Enter id of game:" << std::endl;
    in >> ord.gameId ;

    //std::cin.ignore(INT_MAX,'\n');

    orders.push_back(ord);
}

void Orders::showInDetail(std::istream& in, Catalogue*& cat, Clients*& cl) {
    for (std::vector<order>::iterator i = orders.begin(); i != orders.end(); i++) {
        int kek = i->clientId;
        std::cout << kek << std::endl;
        std::cout << cl->clients[kek - 1].fullName;
    }
}

void Orders::show() {
    for (std::vector<order>::iterator i = orders.begin();
         i != orders.end(); i++) {
        std::cout << std::setw(10) << i->clientId
                  << std::setw(10) << i->gameId
                  << std::setw(10) << i->date
                  << std::endl;
    }
}

