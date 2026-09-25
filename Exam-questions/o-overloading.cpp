#include <iostream>
class Number {
    int value;
public:
    Number(int v = 0) {
        value = v;
    }
    Number operator++() {
        ++value;
        return *this;
    }
    Number operator++(int) {
        Number temp = *this;
        value++;
        return temp;
    }
    void display() {
        std::cout << value << std::endl;
    }
};
int main() {
    Number n(5);
    std::cout << "Prefix: ";
    (++n).display();
    std::cout << "Postfix: ";
    (n++).display();
    std::cout << "After postfix: ";
    n.display();
    return 0;
}