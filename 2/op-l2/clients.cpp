#include "clients.h"

Clients::Clients() {
    client ct = {0, "", 0};
}

void Clients::addClient(std::istream &in) {
    client ct;

    std::cout << "You're gonna add client" << std::endl;

    std::cout << "Enter client's id" << std::endl;
    in >> ct.id ;

    if (ct.id >= 100 || ct.id < 0) {
        std::cout << "Wrong input!" << std::endl;
        return;
    }

    for (auto & i : clients) {
        if (i.id == ct.id) {
            std::cout << "Wrong input!" << std::endl;
            return;
        }
    }

    std::cin.ignore(INT_MAX,'\n');

    std::cout << "Enter clients name:" << std::endl;
    getline(in, ct.fullName);

    std::cout << "Enter client's phone number:" << std::endl;
    in >> ct.phoneNumber;
    //std::cin.ignore(INT_MAX,'\n');
    std::cout << "Done." << std::endl;
    clients.push_back(ct);
}

void Clients::show() {
    using namespace std;
    cout << setw(2) << left << "id" << " | "
         << setw(30)<< left << "Name" << " | "
         << setw(20) << left << "Phone number" << " | "
         << endl;

    cout << "-----------------------------------------------"
            "-------------"
            << endl;

    for (const auto & i : clients) {
        std::cout << std::setw(2) << i.id << " | "
                  << std::setw(30) << i.fullName << " | "
                  << std::setw(20) << i.phoneNumber << " | "
                  << std::endl;
    }
}

std::vector<Clients::client>& Clients::getClients() {
    return this->clients;
}

Clients::~Clients() {
    std::cout << "Clients. Destructor." << std::endl;
    this->clients.clear();
}
