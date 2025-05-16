#include <iostream>

int main(){
    const char* ones[] = {
        "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine",
        "ten", "eleven", "twelve", "thirteen", "fourteen",
        "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };

    const char* tens[] = {
        "", "", "twenty", "thirty", "forty",
        "fifty", "sixty", "seventy", "eighty", "ninety"
    };

    const char* hundreds[] = {
        "", "one hundred", "two hundred", "three hundred", "four hundred",
        "five hundred", "six hundred", "seven hundred", "eight hundred", "nine hundred"
    };
    int n;
    std::cout << "Enter a number from 1 to 1000: ";
    std::cin >> n;

    if (n < 0 || n > 1000) {
        std::cerr << "Number is out of range" << std::endl;
        exit(EXIT_FAILURE);
    }

    if (n == 0) {
        std::cout << "zero";
    }
    if (n == 1000) {
        std::cout << "one thousand";
    }

    if (n >= 100) {
        std::cout << hundreds[n / 100] << " and ";
        n %= 100;
    }
    
    if (n >= 20) {
        std::cout << tens[n / 10] << " ";
        n %= 10;
    }

    if (n > 0) {
        std::cout << ones[n] << std::endl;
    }

}