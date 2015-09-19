#include "catalogue.h"

Catalogue::Catalogue() {
    game g = {0, "", 0, "", 0.0};
}

void Catalogue::addGame(std::istream& in) {
    game gm;

    std::cout << "Enter id" << std::endl;
    in >> gm.id ;

    std::cin.ignore(INT_MAX,'\n');

    std::cout << "Enter name:" << std::endl;
    getline(in, gm.name);

    std::cout << "Enter year:" << std::endl;
    in >> gm.year;

    std::cin.ignore(INT_MAX,'\n');

    std::cout << "Enter system requirements:" << std::endl;
    getline(in, gm.systemRequirements);

    std::cout << "Enter price:" << std::endl;
    in >> gm.price;

    games.push_back(gm);
}

void Catalogue::show() {

    for (std::vector<game>::iterator i = games.begin(); i != games.end(); i++) {
        std::cout << std::setw(10) << (*i).id       << std::setw(10) << (*i).name
                  << std::setw(10) << (*i).year     << std::setw(20) << (*i).systemRequirements
                  << std::setw(10) << (*i).price    << std::endl;
    }
}
