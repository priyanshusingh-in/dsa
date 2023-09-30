//wap to ask the user to enter the numbers and perform addition of those numbers using copy constructor


#include<iostream>

class Calculator {
private:
    double result;

public:
    Calculator() : result(0) {}

    // Copy constructor
    Calculator(const Calculator& other) {
        result = other.result;
    }

    void add(double num) {
        result += num;
    }

    double getResult() const {
        return result;
    }
};

int main() {
    int n;
    double num;

    std::cout << "Enter the number of values you want to add: ";
    std::cin >> n;

    Calculator calculator;

    for (int i = 0; i < n; ++i) {
        std::cout << "Enter value " << i + 1 << ": ";
        std::cin >> num;
        calculator.add(num);
    }

    Calculator copyCalculator = calculator; // Copy constructor is called here

    std::cout << "Result using copy constructor: " << copyCalculator.getResult() << std::endl;

    return 0;
}
