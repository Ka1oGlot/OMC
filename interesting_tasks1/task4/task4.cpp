#include <iostream>

int main(){
    std::cout << "Enter number: ";
    int num;
    std::cin >> num;
    int results[100];
    int index = 0;
    std::cout << num << " = ";
    for (int i = 2; i <= num; i++){
        if (num % i == 0){
            num /= i;
            results[index] = i;
            index ++;
            i --;
        }
    }
    for (int i = 0; i < index; i++) {
            std::cout << results[i] << " ";

    }
    return 0;
}