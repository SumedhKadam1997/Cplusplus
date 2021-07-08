#include <iostream>
#include <thread>

using namespace std;
class MyClass{
    public:
    void Print(std::string str)
    {
        for(int i =0 ; i < 5 ; i++) {
            std::cout << str << i  << endl ;
        }
    }
}​​​​​​​;
int main() {​​​​​​​
    MyClass obj;
    std::thread t1 (&MyClass::Print , obj , "Thread Task:");
    t1.join();
    return 0;
};
}