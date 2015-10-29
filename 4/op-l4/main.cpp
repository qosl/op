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
            double z = stod(x, NULL);
            lol.push_back(z);
        }
    }

    if (lol.size() == 1) {
        cout << "Tetrahedron(1) or cube(2)?" << endl;
        int sw;
        cin >> sw;
        if (sw == 1)
            return new Tetrahedron(lol[0]);
        if (sw == 2)
            return new Cube(lol[0]);
    }
    else
        return new Parallelepiped(lol[0], lol[1], lol[2]);
}

int main() {
    Figure *lol = init();

    cout << lol->get_volume() << endl;

    return 0;
}
