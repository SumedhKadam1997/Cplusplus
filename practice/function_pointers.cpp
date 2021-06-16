//#include <iostream>
//#include <vector>

//void printValue(int value) {
//    std::cout << "Value : " << value << std::endl;
//}
//// Function pointer as parameter
//void print(const std::vector<int> &myvec, void(*func)(int)) {
//    for (int value : myvec) {
//        func(value);
//    }
//}
//class A {
//public:
//    int a;
//    int b;
//};
//// Pointer to Function
//auto * myfunc(int &a, int &b) {
//    std::cout << a + b << std::endl;
//    A *a1 = new A;
//    a1->a = a;
//    a1->b = b;
//    return a1;
//}

//int main() {
//    std::vector<int> vec = { 3, 5, 7, 6, 3 };
//    print(vec, printValue);
//    int a = 10;
//    int b = 20;
//    A * a2 = myfunc(a, b);
//    std::cout << a2->a << " " << a2->b << std::endl;
//    delete a2;
//}
