#include <iostream>
#include <string>
using namespace std;

class Partical21 {
private:
    string name;
    string group;
    int charge;
    double mass;

public:

    Partical21(string name = "", string group = "", int charge = 0, double mass = 0.0)
        : name(name), group(group), charge(charge), mass(mass) {}


    string getName() const { return name; }
    string getGroup() const { return group; }
    int getCharge() const { return charge; }
    double getMass() const { return mass; }


    void setName(const string& newName) { name = newName; }
    void setGroup(const string& newGroup) { group = newGroup; }
    void setCharge(int newCharge) { charge = newCharge; }
    void setMass(double newMass) { mass = newMass; }


    Partical21& operator=(const Partical21& other) {
        if (this != &other) {
            name = other.name;
            group = other.group;
            charge = other.charge;
            mass = other.mass;
        }
        return *this;
    }


    Partical21 operator+(const Partical21& other) {
        return Partical21(name + other.name, group + other.group, charge + other.charge, mass + other.mass);
    }


    bool operator==(const Partical21& other) const {
        return (name == other.name && group == other.group && charge == other.charge && mass == other.mass);
    }


    friend istream& operator>>(istream& in, Partical21& p) {
        cout << "Enter particle name: ";
        in >> p.name;
        cout << "Enter particle group: ";
        in >> p.group;
        cout << "Enter particle charge: ";
        in >> p.charge;
        cout << "Enter particle mass: ";
        in >> p.mass;
        return in;
    }


    friend ostream& operator<<(ostream& out, const Partical21& p) {
        out << "Particle name: " << p.name << "\n";
        out << "Group: " << p.group << "\n";
        out << "Charge: " << p.charge << "\n";
        out << "Mass: " << p.mass << "\n";
        return out;
    }
};


int Lab_12() {
    Partical21 p1("Нейтрон", "Н", 0, 940);
    Partical21 p2("Ка-плюс", "М", 1, 494);


    cout << "Particle 1:\n" << p1;
    cout << "Particle 2:\n" << p2;


    Partical21 p3;
    p3 = p1;
    cout << "After assignment, Particle 3:\n" << p3;


    Partical21 p4 = p1 + p2;
    cout << "After addition, Particle 4:\n" << p4;


    if (p1 == p2) {
        cout << "Particles are equal\n";
    } else {
        cout << "Particles are not equal\n";
    }


    Partical21 p5;
    cin >> p5;
    cout << "Entered Particle 5:\n" << p5;

    return 0;
}
