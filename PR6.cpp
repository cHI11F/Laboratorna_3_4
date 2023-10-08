#include <iostream>
#include <cmath>

int main() {
    double x, y, R;
    std::cout << "R = ";
    std::cin >> R;

    std::cout << "x =";
    std::cin >> x;
    std::cout << "y = ";
    std::cin >> y;

    if (x >= 0 && y >= 0 && sqrt(x * x + y * y) <= R) {
        std::cout << "Yes.\n";
    }
    else {
        std::cout << "No.\n";
    }

    return 0;
}