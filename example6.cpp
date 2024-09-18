class MyClass {
private:
    int secretData;

public:
    MyClass(int data) : secretData(data) {}

    // Оголошення дружньої функції
    friend void revealSecret(const MyClass& obj);
};

// Визначення дружньої функції
void revealSecret(const MyClass& obj) {
    std::cout << "Секретні дані: " << obj.secretData << std::endl;
}
