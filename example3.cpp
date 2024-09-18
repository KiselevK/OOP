#include <iostream>
#include <string>

// Базовий клас
class Base {
public:
    Base() {
        std::cout << "Конструктор Base\n";
    }
    ~Base() {
        std::cout << "Деструктор Base\n";
    }
};

// Клас-член
class Member {
public:
    Member(const std::string& name) : name_(name) {
        std::cout << "Конструктор Member: " << name_ << "\n";
    }
    ~Member() {
        std::cout << "Деструктор Member: " << name_ << "\n";
    }

private:
    std::string name_;
};

// Похідний клас
class Derived : public Base {
public:
    Derived(const std::string& memberName) : Base(), member_(memberName) {
        std::cout << "Конструктор Derived\n";
    }
    ~Derived() {
        std::cout << "Деструктор Derived\n";
    }

private:
    Member member_;
};

int main() {
    std::cout << "Створення об'єкта Derived:\n";
    Derived obj("MyMember");
    std::cout << "Об'єкт Derived створено.\n";
    return 0;
}
