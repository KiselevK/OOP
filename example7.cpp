#include <iostream>
#include <string>

// Клас Book
class Book {
private:
    std::string title;
    std::string author;
    double price;

public:
    Book(const std::string& t, const std::string& a, double p)
        : title(t), author(a), price(p) {}

    // Оголошення дружньої функції
    friend void printBookDetails(const Book& b);
};

// Визначення дружньої функції
void printBookDetails(const Book& b) {
    std::cout << "Назва: " << b.title << std::endl;
    std::cout << "Автор: " << b.author << std::endl;
    std::cout << "Ціна: $" << b.price << std::endl;
}

int main() {
    Book myBook("Програмування на C++", "Іван Іванов", 29.99);
    printBookDetails(myBook); // Виклик дружньої функції
    return 0;
}
