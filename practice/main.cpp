#include <iostream>
#include <vector>

#define WAIT std::cin.get()    //MACROS

int main() {
    std::vector<int> integers;
    integers.push_back(5);
    integers.push_back(10);

    for(const auto &i : integers) {
        std::cout << i << std::endl;
    }
    WAIT;
}
