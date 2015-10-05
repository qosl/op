#ifndef CLIENTS_H
#define CLIENTS_H

#include "tools.h"

class Clients
{
public:
    Clients();
    ~Clients();

    struct client
    {
        int             id;
        std::string     fullName;
        long int        phoneNumber;
    };

    std::vector<client>& getClients();
    void addClient(std::istream&);
    void show();
private:
    std::vector<client> clients;
};

#endif // CLIENTS_H
