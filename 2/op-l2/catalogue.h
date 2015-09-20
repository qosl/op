#ifndef CATALOGUE_H
#define CATALOGUE_H

#include "tools.h"

class Catalogue
{
public:
    Catalogue();

    struct game
    {
        int             id;
        std::string     name;
        int             year;
        std::string     systemRequirements;
        double          price;
    };

    std::vector<game> games;

    void addGame(std::istream&);

    void show();
};

#endif // CATALOGUE_H
