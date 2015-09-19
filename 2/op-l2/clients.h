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
};

#endif // CLIENTS_H
