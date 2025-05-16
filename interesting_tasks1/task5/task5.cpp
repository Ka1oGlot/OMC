#include <iostream>

bool palindroma(int num) {
    int original = num;
    int reversed = 0;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return original == reversed;
}

int main(){
    int res[10];
    int pos = 0;
    for (int i = 100; i <= 999; i++){
        if (palindroma(i*i)){
                res[pos] = i;
                pos++;
            }
    }
    for (int i = 0; i < pos; i++) {
        std::cout << res[i] << " ";

    }
    return 0;
}