class Base {
public:
    virtual ~Base() {
        std::cout << "Деструктор Base\n";
    }
};

class Derived : public Base {
public:
    ~Derived() override {
        std::cout << "Деструктор Derived\n";
    }
};

int main() {
    Base* obj = new Derived();
    delete obj; // Викликаються обидва деструктори
    return 0;
}
