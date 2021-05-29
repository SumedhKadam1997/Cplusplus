#include <iostream>
#include <string>

int main() {
    std::string star;
    char str = '*';
    int n;
    std::cout << "Please enter the no. of stars to print : ";
    std::cin >> n;
    if(n >= 3 && n < 11) {
        for(int i = 0; i < n; i++) {
            star.push_back(str);
            std::cout<< star << std::endl;
        }
        star.pop_back();
        for(int i = 0; i < n - 1; i++) {
            std::cout<< star << std::endl;
            star.pop_back();
        }
    } else {
        std::cout << "Please give number between 3 and 10" << std::endl;
    }
}