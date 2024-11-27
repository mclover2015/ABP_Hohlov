#include <iostream>
#include <string>
#include <iomanip>

using namespace std;


class Particle2 {
private:
    string name;
    string group;
    int charge;
    double mass;

public:

    Particle2(string n, string g, int c, double m)
        : name(n), group(g), charge(c), mass(m) {}

    string getName() const {
        return name;
    }


    string getGroup() const {
        return group;
    }


    int getCharge() const {
        return charge;
    }


    double getMass() const {
        return mass;
    }


    void setName(const string& n) {
        name = n;
    }

    void setGroup(const string& g) {
        group = g;
    }

    void setCharge(int c) {
        charge = c;
    }

    void setMass(double m) {
        mass = m;
    }


    void show() const {
        cout << "| " << setw(12) << left << name
             << "| " << setw(3) << group
             << "| " << setw(8) << charge
             << "| " << setw(17) << fixed << setprecision(3) << mass << " |\n";
    }
};

int Lab_10() {

    Particle2 particles[] = {
        Particle2("Нейтрон", "Н", 0, 940.0),
        Particle2("Ка-плюс", "М", 1, 494.0),
        Particle2("Електрон", "Л", -1, 0.511)
    };


    cout << " -----------------------------------------------------\n";
    cout << "|  Элементарные частицы                               |\n";
    cout << "|----------------------------------------------------|\n";
    cout << "|  Частица | Группа | Заряд | Маса покоя           |\n";
    cout << "|----------|--------|-------|----------------------|\n";


    for (const auto& particle : particles) {
        particle.show();
    }


    particles[0].setName("Протон");
    particles[0].setCharge(1);
    particles[0].setMass(938.3);


    cout << "\nПосле изменения данных:\n";
    for (const auto& particle : particles) {
        particle.show();
    }

    return 0;
}

