#include <iostream>
#include <string>

using namespace std;


class Teacher {
protected:
    string name;
    int age;
    string subject;

public:

    Teacher() : name("Невідомо"), age(0), subject("Невідомо") {}


    Teacher(string n, int a, string s) : name(n), age(a), subject(s) {}

    Teacher(const Teacher &t) : name(t.name), age(t.age), subject(t.subject) {}


    virtual ~Teacher() {}


    void setName(string n) {
        name = n;
    }


    void changeSubject(string s) {
        subject = s;
    }


    void setAge(int a) {
        age = a;
    }


    void showAge() const {
        cout << "Вік: " << age << " років" << endl;
    }


    virtual void showDetails() const {
        cout << "Ім'я: " << name << endl;
        cout << "Вік: " << age << " років" << endl;
        cout << "Предмет: " << subject << endl;
    }
};


class FullTimeTeacher : public Teacher {
private:
    string schedule;

public:

    FullTimeTeacher() : Teacher(), schedule("Невідомо") {}


    FullTimeTeacher(string n, int a, string s, string sc)
        : Teacher(n, a, s), schedule(sc) {}


    FullTimeTeacher(const FullTimeTeacher &ft)
        : Teacher(ft), schedule(ft.schedule) {}


    ~FullTimeTeacher() {}


    void changeSchedule(string sc) {
        schedule = sc;
    }


    void showDetails() const override {
        Teacher::showDetails();
        cout << "Розклад занять: " << schedule << endl;
    }
};

int Lab_11() {

    Teacher teacher1("Петро Іванов", 45, "Математика");


    cout << "Дані про викладача (базовий клас):" << endl;
    teacher1.showDetails();
    cout << endl;


    FullTimeTeacher ftTeacher1("Марія Олексіївна", 38, "Фізика", "Понеділок 9:00-12:00, Середа 14:00-17:00");


    cout << "Дані про штатного викладача (похідний клас):" << endl;
    ftTeacher1.showDetails();
    cout << endl;


    teacher1.setName("Іван Петров");
    teacher1.setAge(50);
    teacher1.changeSubject("Інформатика");
    teacher1.showDetails();
    cout << endl;

    ftTeacher1.changeSchedule("Понеділок 8:00-11:00, Четвер 13:00-16:00");
    ftTeacher1.showDetails();

    return 0;
}
