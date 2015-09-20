#include "orders.h"

Orders::Orders() {
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

    orders.push_back(ord);
}

void Orders::showInDetail(Catalogue*& catalogue, Clients*& cl) {
    for (std::vector<order>::iterator i = orders.begin(); i != orders.end(); i++)
    {
        std::vector<Clients::client>::iterator j;
        for (j = cl->clients.begin(); j != cl->clients.end(); j++)
        {
            if (i->clientId == j->id) {
                // std::cout << cl->clients[i->clientId - 1].fullName;
                std::cout << j->fullName << " - ";
                //break;
            }
        }

        std::vector<Catalogue::game>::iterator x;
        for (x = catalogue->games.begin(); x != catalogue->games.end(); x++)
        {
            if (i->gameId == x->id) {
                // std::cout << cl->clients[i->clientId - 1].fullName;
                std::cout << x->name << " - ";
                //break;
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

