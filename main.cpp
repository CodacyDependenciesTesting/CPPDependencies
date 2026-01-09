#include <iostream>


#ifdef FOO
#ifdef FOO // inner ifdef is considered redundant
    void f();
#endif
#endif

// Function to add two numbers
int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    
    int a, b;

    std::cout << "Enter first number: ";
    std::cin >> a;

    std::cout << "Enter second number: ";
    std::cin >> b;

    std::cout << "The sum is: " << add(a, b) << std::endl;

    return 0;
}
