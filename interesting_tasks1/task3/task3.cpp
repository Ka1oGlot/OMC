#include <iostream>

int main() {
    std::cout << "Enter the last number(max=1000): ";
    int n;
    std::cin >> n;

    bool numbers[1000];

    for (int i = 0; i < n; i++) {
        numbers[i] = true;
    }

    numbers[0] = false;
    numbers[1] = false;

    for (int i = 2; i * i < n; i++) {
        if (numbers[i]) {
            for (int j = i * i; j < n; j += i) {
                numbers[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (numbers[i]) {
            std::cout << i << " ";
        }
    }

    return 0;
}

