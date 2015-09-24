#ifndef CATALOGUE_H
#define CATALOGUE_H

#include "tools.h"

class Catalogue
{
public:
    typedef struct
    {
        int             id;
        std::string     name;
        int             year;
        std::string     systemRequirements;
        double          price;
    } game;
    Catalogue();
    void addGame(std::istream&);
    void show();

    std::vector<game>& getGames();
private:
    std::vector<game> games;
};

#endif // CATALOGUE_H
