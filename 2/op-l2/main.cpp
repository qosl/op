#include "catalogue.h"
#include "clients.h"
#include "orders.h"

#include "tools.h"

void hat() {
    std::cout << "Igor Mayorov (KiberPrestupnik), gr. IP-44,"
                 " var. 8, level - HARDEST\n"
                 "1 - Add game to catalogue\n"
                 "2 - Add client\n"
                 "3 - Add order\n"
                 "4 - Show catalogue\n"
                 "5 - Show clients\n"
                 "6 - Show orders\n"
                 "7 - Show detailed orders\n"
                 "q - Quit the program"
              << std::endl;
}

void menu(Catalogue*& catalogue, Clients*& clients, Orders*& orders) {
    hat();
    char c;
    while ((c = std::cin.get()) != 'q') {
        system("clear");
        hat();
        if (c == '1') {
            catalogue->addGame(std::cin);
            std::cout << "Done!" << std::endl;
        }
        else if (c == '2') {
            clients->addClient(std::cin);
            std::cout << "Done!" << std::endl;
        }
        else if (c == '3') {
            orders->addOrder();
            std::cout << "Done!" << std::endl;
        }
        else if (c == '4') {
            catalogue->show();
        }
        else if (c == '5') {
            clients->show();
        }
        else if (c == '6') {
            orders->show();
        }
        else if (c == '7') {
            orders->showInDetail(catalogue, clients);
        }

        else std::cout << "Enter g(G) or c(C)" << std::endl;

        std::cin.ignore(INT_MAX, '\n');
    }
}

int main()
{
    Catalogue *catalogue = new Catalogue();
    Clients     *clients = new Clients();
    Orders       *orders = new Orders();
    menu(catalogue, clients, orders);
}
