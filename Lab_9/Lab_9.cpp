#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

struct Detail2 {
    string name;
    char type;
    int quantity;
    double weight;
};

void printTable(const vector<Detail2>& details) {
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

bool isValidType2(char type) {
    return type == 'O' || type == 'P' || type == 'Z';
}

int Lab_77() {

    ifstream inputFile("C:/Users/kiril/CLionProjects/ABP_Hohlov/Lab_9/details.txt");
    if (!inputFile) {
        cerr << "Не удалось открыть файл!" << endl;
        return 1;
    }

    vector<Detail2> details;
    string line;


    while (getline(inputFile, line)) {
        stringstream ss(line);
        Detail2 detail;


        ss >> detail.name >> detail.type >> detail.quantity >> detail.weight;


        if (isValidType2(detail.type)) {
            details.push_back(detail);
        } else {
            cerr << "Неверный тип детали: " << detail.type << " в строке: " << line << endl;
        }
    }

    inputFile.close();

    if (details.empty()) {
        cerr << "Данные не были загружены!" << endl;
        return 1;
    }


    cout << "\nBefore sort:\n";
    printTable(details);

    sort(details.begin(), details.end(), [](const Detail2& a, const Detail2& b) {
        return a.quantity < b.quantity;
    });

    cout << "\nAfter quantity sort:\n";
    printTable(details);


    sort(details.begin(), details.end(), [](const Detail2& a, const Detail2& b) {
        return a.weight < b.weight;
    });

    cout << "\nAfter weight sort:\n";
    printTable(details);


    sort(details.begin(), details.end(), [](const Detail2& a, const Detail2& b) {
        return a.name < b.name;
    });

    cout << "\nAfter alphabetic sort:\n";
    printTable(details);

    return 0;
}

int Lab_9() {
    return Lab_77();
}
