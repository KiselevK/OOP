class Scanner {
public:
    void scan() const {
        std::cout << "Scanning document..." << std::endl;
    }
};

class AllInOnePrinter {
public:
    AllInOnePrinter() : printer_(), scanner_() {}
    
    void print() const {
        printer_.print();
    }
    
    void scan() const {
        scanner_.scan();
    }
    
private:
    Printer printer_;
    Scanner scanner_;
};
