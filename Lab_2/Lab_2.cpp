#include <iostream>
using namespace std;

// 24 вар

int Lab_2() {
    double x, y;

    cout << "x:" << endl;
    cin >> x;
    cout << "y: " << endl;
    cin >> y;

    if (x >= -1 && y <= 0 && y <= -x - 1) {
        cout << "++++++" << endl;
    } else {
        cout << "-------" << endl;
    }

    return 0;
}

