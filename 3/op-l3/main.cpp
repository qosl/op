#include "tools.h"
#include "segment.h"
#include "triangle.h"

using namespace std;

void eatline() {
    while (getchar() != '\n')
        continue;
}

bool is_number(const string& s)
{
    string::const_iterator it = s.begin();
    while (it != s.end()) {
        if (isdigit(*it) || (*it) == '.')
            it++;
        else return false;
    };
    return true;
}

Triangle* initialize() {
    double x, y;

    vector<pair<double, double> > lol(3);

    for (int i = 0; i < 3; i++) {
        cin >> x >> y;
        lol[i] = make_pair(x, y);
    }
    string s;

    eatline();

    getline(cin, s);

    if (s.empty()) {
        return new Triangle(lol[0], lol[1], lol[2]);
    }
    else if (is_number(s)) {
        double number = stod(s, NULL);
        cout << "I'm here!" << endl;
        return new Triangle(lol[0], lol[1], lol[2], number);
    }
    else return new Triangle(lol[0], lol[1], lol[2], s);
}

int main() {
    puts("Igor Mayorov, IP 44, var. 8, level HARDEST.");
    puts("Press any key to enter triangle or q to exit.");
    while (getchar() != 'q') {
        system("clear");
        puts("Igor Mayorov, IP 44, var. 8, level HARDEST.");
        puts("Press any key to enter triangle or q to exit.");
        cout << "Enter 3 pairs of coordinates in following format: x y. "
                "Then, double or string value." << endl;
        Triangle *lol = initialize();
        cout << lol->getsquare() << endl;
    }
    return 0;
}

