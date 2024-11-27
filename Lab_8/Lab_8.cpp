#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


struct Particle {
    string name;
    string group;
    int charge;
    double mass;
    Particle *next;
};


void push(Particle *&stack, const string &name, const string &group, int charge, double mass) {
    Particle *newElement = new Particle;
    newElement->name = name;
    newElement->group = group;
    newElement->charge = charge;
    newElement->mass = mass;
    newElement->next = stack;
    stack = newElement;
}


void popAll(Particle *&stack) {
    cout << " -----------------------------------------------------\n";
    cout << "|  Элементарные частицы                               |\n";
    cout << "|-----------------------------------------------------|\n";
    cout << "|  Частица    | Группа | Заряд | Масса покоя  |\n";
    cout << "|-------------|--------|-------|----------------------|\n";


    while (stack != nullptr) {
        cout << " | " << setw(11) << left << stack->name
             << " | " << setw(6) << stack->group
             << " | " << setw(5) << stack->charge
             << " | " << setw(20) << fixed << setprecision(3) << stack->mass << " |\n";

        Particle *temp = stack;
        stack = stack->next;
        delete temp;
    }

    cout << " -----------------------------------------------------" << endl;
}

int Lab_8() {
    Particle *stack = nullptr;


    push(stack, "Нейтрон", "Н", 0, 940.0);
    push(stack, "Ка-плюс", "М", +1, 494.0);
    push(stack, "Электрон", "Л", -1, 0.511);


    popAll(stack);

    return 0;
}



