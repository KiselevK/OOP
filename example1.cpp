#include <iostream>
#include <string>

// Клас Engine
class Engine {
public:
    Engine(const std::string& type) : type_(type) {}
    
    void start() const {
        std::cout << "Engine " << type_ << " is starting." << std::endl;
    }
    
private:
    std::string type_;
};

// Клас Wheel
class Wheel {
public:
    Wheel(int size) : size_(size) {}
    
    void rotate() const {
        std::cout << "Wheel of size " << size_ << " is rotating." << std::endl;
    }
    
private:
    int size_;
};

// Клас Car, який складається з Engine та Wheel
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
        std::cout << "Car has started and is ready to go!" << std::endl;
    }
    
private:
    Engine engine_;
    Wheel wheel1_;
    Wheel wheel2_;
    Wheel wheel3_;
    Wheel wheel4_;
};

int main() {
    Car myCar("V8", 18);
    myCar.startCar();
    return 0;
}
