#include <iostream>
#include <iomanip>

using namespace std;

// 4 варіант Хохлов Кирило


int Lab_1() {
    char name1[40], name2[40], name3[40];
    char type1[10], type2[10], type3[10];
    int amount1, amount2, amount3;
    int weight1, weight2, weight3;


    cout << "1. Введіть: найменування, тип, к-сть, вага >" << endl;
    cin >> name1;
    cin >> type1;
    cin >> amount1;
    cin >> weight1;

    cout << "2. Введіть: найменування, тип, к-сть, вага >" << endl;
    cin >> name2;
    cin >> type2;
    cin >> amount2;
    cin >> weight2;

    cout << "3. Введіть: найменування, тип, к-сть, вага >" << endl;
    cin >> name3;
    cin >> type3;
    cin >> amount3;
    cin >> weight3;

    cout << (" -----------------------------------------------------\n");
    cout << ("|  Відомість деталей                                 |\n");
    cout << ("|----------------------------------------------------|\n");
    cout << ("|  Найменування | Тип | Кількість | Вага 1 деталі (г)|\n");
    cout << ("|---------------|-----|-----------|------------------|\n");

    cout << ("|") << setw(15) << name1 << ("|") << setw(5) << type1 << ("|") << setw(11) << amount1 << ("|") << setw(18)
            << weight1 << ("|") << endl;

    cout << ("|") << setw(15) << name2 << ("|") << setw(5) << type2 << ("|") << setw(11) << amount2 << ("|") << setw(18)
            << weight2 << ("|") << endl;

    cout << ("|") << setw(15) << name3 << ("|") << setw(5) << type3 << ("|") << setw(11) << amount3 << ("|") << setw(18)
            << weight3 << ("|") << endl;

    cout << ("|----------------------------------------------------|\n");
    cout << ("|     Примітка: прийнято таке кодування типів:       |\n");
    cout << ("|     О – оригінальна, П – покупна, З – запозичена   |\n");
    cout << ("------------------------------------------------------\n");


    return 0;
}
