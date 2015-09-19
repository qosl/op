#include "catalogue.h"
#include "tools.h"
//using namespace std;

int main()
{
    std::cout << "HELLO" << std::endl;

    Catalogue *lol = new Catalogue();
    lol->addGame(std::cin);
    lol->show();
}

