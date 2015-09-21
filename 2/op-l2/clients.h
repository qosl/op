#ifndef CLIENTS_H
#define CLIENTS_H

#include "tools.h"

class Clients
{
public:
    struct client
    {
        int             id;
        std::string     fullName;
        int             phoneNumber;
    };
    std::vector<client> clients;

public:
    Clients();
    void addClient(std::istream&);
    void show();
};

#endif // CLIENTS_H
