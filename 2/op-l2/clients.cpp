#include "clients.h"

Clients::Clients() {
    client ct = {0, "", 0};
}

void Clients::addClient(std::istream &in) {
    client ct;

    std::cout << "You're gonna add client" << std::endl;

    std::cout << "Enter client's id" << std::endl;
    in >> ct.id ;

    std::cin.ignore(INT_MAX,'\n');

    std::cout << "Enter clients name:" << std::endl;
    getline(in, ct.fullName);

    std::cout << "Enter client's phone number:" << std::endl;
    in >> ct.phoneNumber;

    clients.push_back(ct);
}
void Clients::show() {
    for (std::vector<client>::iterator i = clients.begin();
         i != clients.end(); i++) {
        std::cout << std::setw(10) << i->id
                  << std::setw(10) << i->fullName
                  << std::setw(10) << i->phoneNumber
                  << std::endl;
    }
}
