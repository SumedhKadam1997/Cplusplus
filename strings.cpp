#include <iostream>
#include <array>
#include <string>

int main() {
    std::string name = "sumedh";
    std::string print_name;
    std::string spaces;

    for(int i = 0; i < name.length(); i++) {
        spaces.append(" ");
    }

    for(int i = 0; i < name.length() - 1; i++) {
        print_name.push_back(name.at(i));
        std::cout << spaces << print_name << std::endl;
        spaces.pop_back();
    }
    print_name = name;
    std::string myspace = " ";
    for(int i = 0; i < name.length(); i++) {
        std::cout << spaces << print_name << std::endl;
        print_name.pop_back();
        spaces.append(" ");
    }
}