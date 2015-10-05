#include "catalogue.h"

Catalogue::Catalogue() {
    game g = {0, "", 0, "", 0.0};
}

void Catalogue::addGame() {
    game gm;

    std::cout << "You're gonna add a game " << std::endl;

    std::cout << "Enter id:" << std::endl;
    std::cin >> gm.id ;

    // check for id input
    for (auto & i : games) {
        if (i.id == gm.id) {
            std::cout << "Wrond input" << std::endl;
            return;
        }
    }
    std::cin.ignore(INT_MAX,'\n');

    std::cout << "Enter name:" << std::endl;
    getline(std::cin, gm.name);

    std::cout << "Enter year:" << std::endl;
    std::cin >> gm.year;

    std::cin.ignore(INT_MAX,'\n');

    std::cout << "Enter system requirements:" << std::endl;
    getline(std::cin, gm.systemRequirements);

    std::cout << "Enter price:" << std::endl;
    std::cin >> gm.price;

    std::cout << "Done." << std::endl;

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

    for (const auto & i : games) {
        cout << setw(2) << left << i.id   << " | "
             << setw(30)<< left << i.name << " | "
             << setw(4) << left << i.year << " | "
             << setw(70)<< left << i.systemRequirements << " | "
             << setw(7) << left << i.price << " | "
             << endl;
    }
}

std::vector<Catalogue::game>& Catalogue::getGames() {
    return this->games;
}
Catalogue::~Catalogue() {
    std::cout << "Catalogue. Destructor." << std::endl;
    this->games.clear();
}
