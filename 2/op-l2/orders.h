#ifndef ORDERS_H
#define ORDERS_H

#include "tools.h"

class Orders
{
public:
    Orders();
public:
    struct order {
        int             clientId;
        int             gameId;
        std::string     date;
    };

};
#endif // ORDERS_H
