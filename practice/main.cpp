#include <iostream>
#include <string>

int main() {
    std::string print_star;
    char str = '*';
    int n;
    std::cout << "Please enter the no. of stars to print : ";
    std::cin >> n;
    if(n >= 3 && n < 11) {
        for(int i = 0; i < n; i++) {
            print_star.push_back(str);
            std::cout<< print_star << std::endl;
        }
        print_star.pop_back();
        for(int i = 0; i < n - 1; i++) {
            std::cout<< print_star << std::endl;
            print_star.pop_back();
        }
    } else {
        std::cout << "Please give number between 3 and 10" << std::endl;
    }
}
