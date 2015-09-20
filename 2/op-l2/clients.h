#ifndef CLIENTS_H
#define CLIENTS_H

#include "tools.h"

class Clients
{
public:
    Clients();
    struct client
    {
        int             id;
        std::string     fullName;
        int             phoneNumber;
    };

    std::vector<client> clients;

    void addClient(std::istream&);
    void show();
};

#endif // CLIENTS_H
