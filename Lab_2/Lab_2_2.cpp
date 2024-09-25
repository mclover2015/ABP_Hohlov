#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int Lab_2_2() {
    long  k2 = 1;
    double sum = 0, term;
    const double EPS = 0.000001;
    int n;
    short k1= 1;

    for (n = 0; ;n++, k2 *=2, k1 = -1*k1) {
        term = k1 *(pow(-1, n) * pow(2, n)) / (n + pow(5, n));

        if (fabs(term)>=EPS){
            sum += term;
        } else {
            break;
        }


        if (n == 9) {
            cout << "Сума 10 членів ряду: " << fixed << setprecision(6) << sum << endl;
        }
    }

    cout << "Повна сума ряду: " << fixed << setprecision(6) << sum << endl;
    cout << "Ітерація: " << n << endl;

    return 0;
}
