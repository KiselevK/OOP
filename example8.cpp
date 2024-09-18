class ClassB; // Попереднє оголошення

class ClassA {
private:
    int secretData;

public:
    ClassA(int data) : secretData(data) {}

    // Оголошення ClassB як дружнього класу
    friend class ClassB;
};

class ClassB {
public:
    void revealSecret(const ClassA& a) {
        std::cout << "Секретні дані ClassA: " << a.secretData << std::endl;
    }
};
