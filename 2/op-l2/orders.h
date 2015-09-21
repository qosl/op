#ifndef ORDERS_H
#define ORDERS_H

#include "tools.h"
#include "catalogue.h"
#include "clients.h"

class Orders
{
public:
    Orders();

    struct order {
        int             clientId;
        int             gameId;
        std::string     date;
    };

    std::vector<order> orders;
    void addOrder ();
    void showInDetail (Catalogue*&, Clients*&);
    void show();
};
#endif // ORDERS_H
