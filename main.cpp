#include <iostream>
#include <windows.h>


#include "Lab_1//Lab_1.cpp"
#include "Lab_2//Lab_2_1.cpp"
#include "Lab_2//Lab_2_2.cpp"
#include "Lab_3/Lab_3.cpp"
#include "Lab_4/Lab_4.cpp"
#include "Lab_5/Lab_5.cpp"
#include "Lab_6/Lab_6.cpp"
#include "Lab_7/Lab_7.cpp"
#include "Lab_8/Lab_8.cpp"
#include "Lab_9/Lab_9.cpp"
#include "Lab_10/Lab_10.cpp"
#include "Lab_11/Lab_11.cpp"
#include "Lab_12/Lab_12.cpp"
#include "Lab_13/Lab_13.cpp"

using namespace std;


int main() {
    SetConsoleOutputCP(CP_UTF8);

    int nomerLabaratornoi;
    cout << "Виберіть номер лаби:" << endl;
    cin >> nomerLabaratornoi;
    switch (nomerLabaratornoi) {
        case 1:
            Lab_1();
            break;
        case 2:
            Lab_2_1();
            break;
            break;
        case 3:
            Lab_3();
            break;
        case 4:
            Lab_4();
            break;
        case 5:
            Lab_5();
            break;
        case 6:
            Lab_6();
            break;
        case 7:
            Lab_7();
            break;
        case 8:
            Lab_8();
            break;
        case 9:
            Lab_9();
            break;
        case 10:
            Lab_10();
            break;
        case 11:
            Lab_11();
            break;
        case 12:
            Lab_12();
            break;
        case 13:
            Lab_13();
            break;
        case 0:
            return 0;
        default:
            cout << "Неправильне значення" << endl;
    }
    return 0;
}
