#include <iostream>

int main() {
    for (int i = 8; i >= 1; i--) {
        std::cout << i << " ";
        for (int j = 1; j <= 8; j++) {
            if ((i + j) % 2 == 0) {
                std::cout << "\033[47m  "; // белая клетка
            }
            else {
                std::cout << "\033[40m  "; // черная клетка
            }
        }
        std::cout << "\033[0m" << std::endl;
    }
    std::cout << "  ";
    for (char c = 'a'; c <= 'h'; c++) {
        std::cout << " " << c;
    }
    std::cout << std::endl;

    return 0;
}