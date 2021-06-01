#include <iostream>
#include <vector>

void printValue(int value) {
    std::cout << "Value : " << value << std::endl;
}

void print(const std::vector<int> &myvec, void(*func)(int)) {
    for (int value : myvec) {
        func(value);
    }
}

int main() {
    std::vector<int> vec = { 3, 5, 7, 6, 3 };
    print(vec, printValue);
}