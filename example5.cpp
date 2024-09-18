#include <iostream>
#include <string>

// Клас Engine
class Engine {
public:
    Engine(const std::string& type) : type_(type) {}
    void start() const {
        std::cout << "Двигун " << type_ << " запускається.\n";
    }
private:
    std::string type_;
};

// Клас Wheel
class Wheel {
public:
    Wheel(int size) : size_(size) {}
    void rotate() const {
        std::cout << "Колесо розміру " << size_ << " обертається.\n";
    }
private:
    int size_;
};

// Клас Car
class Car {
public:
    Car(const std::string& engineType, int wheelSize)
        : engine_(engineType), wheel1_(wheelSize), wheel2_(wheelSize),
          wheel3_(wheelSize), wheel4_(wheelSize) {}
    
    void startCar() const {
        engine_.start();
        wheel1_.rotate();
        wheel2_.rotate();
        wheel3_.rotate();
        wheel4_.rotate();
        std::cout << "Автомобіль готовий до руху!\n";
    }

private:
    Engine engine_;
    Wheel wheel1_, wheel2_, wheel3_, wheel4_;
};

int main() {
    Car myCar("V8", 18);
    myCar.startCar();
    
    // Спроба доступу до приватних членів викликає помилку
    // myCar.engine_.start(); // Помилка!

    return 0;
}
