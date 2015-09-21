#include "catalogue.h"

Catalogue::Catalogue() {
    game g = {0, "", 0, "", 0.0};
}

void Catalogue::addGame(std::istream& in) {
    game gm;

    std::cout << "You're gonna add a game " << std::endl;

    std::cout << "Enter id:" << std::endl;
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
    using namespace std;
     cout << setw(2) << left << "id" << " | "
         << setw(30)<< left << "Name" << " | "
         << setw(4) << left << "Year" << " | "
         << setw(70)<< left << "System Requirements" << " | "
         << setw(7) << left << "Price"<< " | "
         << endl;
    cout << "-----------------------------------------------"
            "-----------------------------------------------"
            "---------------------------------"
            << endl;
    for (vector<game>::iterator i = games.begin(); i != games.end(); i++) {
        cout << setw(2) << left << i->id   << " | "
             << setw(30)<< left << i->name << " | "
             << setw(4) << left << i->year << " | "
             << setw(70)<< left << i->systemRequirements << " | "
             << setw(7) << left << i->price << " | "
             << endl;
    }
}
