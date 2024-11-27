#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


struct Detail {
    string name;
    char type;
    int quantity;
    double weight;
};


void printTable(const vector<Detail>& details) {
    cout << " -----------------------------------------------------\n";
    cout << "|  Відомість деталей                                 |\n";
    cout << "|----------------------------------------------------|\n";
    cout << "|  Найменування | Тип | Кількість | Вага 1 деталі (г)|\n";
    cout << "|---------------|-----|-----------|------------------|\n";
    for (const auto& detail : details) {
        cout << "| " << setw(13) << left << detail.name << " | "
             << setw(3) << detail.type << " | "
             << setw(9) << detail.quantity << " | "
             << setw(16) << fixed << setprecision(2) << detail.weight << " |\n";
    }
    cout << " -----------------------------------------------------" << endl;
}


bool isValidType(char type) {
    return type == 'O' || type == 'P' || type == 'Z';
}

int Lab_7() {
    vector<Detail> details(3);


    for (int i = 0; i < 3; ++i) {
        cout << i + 1 << ". Введіть: найменування, тип (О - оригінальна, П - покупна, З - запозичена), к-сть, вага >" << endl;

        cout << "Найменування: ";
        cin >> ws;
        getline(cin, details[i].name);


        while (true) {
            cout << "Тип (О/П/З): ";
            string input;
            cin >> input;

            if (input.length() == 1) {
                details[i].type = toupper(input[0]);
                if (isValidType(details[i].type)) {
                    break;
                }
            }
            cout << "Неверный тип. Пожалуйста, введите О, П или З." << endl;
        }

        cout << "Кількість: ";
        cin >> details[i].quantity;

        cout << "Вага 1 деталі (г): ";
        cin >> details[i].weight;
    }


    cout << "\nbefore sort:\n";
    printTable(details);


    sort(details.begin(), details.end(), [](const Detail& a, const Detail& b) {
        return a.quantity < b.quantity;
    });


    cout << "\nafter quantity sort:\n";
    printTable(details);

    sort(details.begin(), details.end(), [](const Detail& a, const Detail& b) {
        return a.weight < b.weight;
    });


    cout << "\nafter weight sort:\n";
    printTable(details);


    sort(details.begin(), details.end(), [](const Detail& a, const Detail& b) {
        return a.name < b.name;
    });


    cout << "\nafter alphabetic sort:\n";
    printTable(details);

    return 0;
}
