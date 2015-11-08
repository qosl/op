#include <iostream>
#include <vector>
#include <cstring>
#include <string>
#include "figure.h"
#include "tetrahedron.h"
#include "parallelepiped.h"
#include "cube.h"

using namespace std;

void eatline() {
    while(getchar() != '\n')
        continue;
}

Figure* init() {
    string x;
    vector<double> lol;

    while (getline(cin, x)) {
        if (x.empty()) {
            break;
        }
        else {
            double z = stod(x, NULL);       // convert string to number
            lol.push_back(z);
        }
    }

    if (lol.size() == 1) {
        cout << "Tetrahedron(1) or cube(2)?" << endl;
        int sw;
        cin >> sw;
        eatline();
        if (sw == 1) {
            cout << "Tetrahedron was created" << endl;
            return new Tetrahedron(lol[0]);
        }
        if (sw == 2) {
            cout << "Cube was created" << endl;
            return new Cube(lol[0]);
        }
    }
    else {
        cout << "Parallelipiped was created" << endl;
        return new Parallelepiped(lol[0], lol[1], lol[2]);
    }
}

int main() {
    cout << "Igor Mayorov, HARDEST LEVEL, var. 8\n"
            "Press any key to continue or Enter to exit." << endl;
    while (getchar() != '\n') {
        system("clear");
        cout << "Enter one number to create tetrahedron or cube.\n"
                "Enter three numbers to create parallelepiped." << endl;
        eatline();
        Figure* lol = init();
        cout << "Volume:" << lol->get_volume() << endl;
        cout << "Square:" << lol->get_square() << endl;
        cout << "Press any key to continue or Enter to exit." << endl;
        lol->~Figure();
    }

    return 0;
}





















