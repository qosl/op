#include <iostream>
#include <vector>
#include <string>
#include "figure.h"
#include "tetrahedron.h"
#include "parallelepiped.h"
#include "cube.h"

using namespace std;

Figure* init() {
    string x;
    vector<double> lol;

    while (getline(cin, x)) {
        if (x.empty())
            break;
        else {
            double z = stod(x, NULL);       // convert string to number
            lol.push_back(z);
        }
    }

    if (lol.size() == 1) {
        cout << "Tetrahedron(1) or cube(2)?" << endl;
        int sw;

        cin >> sw;

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
    cout << "Enter one number to create tetrahedron or cube.\n"
            "Enter three numbers to create parallelepiped."
         << endl;
    Figure *lol = init();
    cout << "Its volume: ";
    cout << lol->get_volume() << endl;
    cout << "Its square: ";
    cout << lol->get_square() << endl;
    return 0;
}





















