//#include <iostream>
//#include <random>

//struct IntLinkNode {
//    int data;
//    IntLinkNode *next = nullptr;
//};
//int n;
//void generateRandomList(IntLinkNode *first) {
//    std::random_device rd;
//    std::default_random_engine re(rd());
//    std::uniform_int_distribution<int> nnodes(20, 30);
//    std::uniform_int_distribution<int> nvalues(0, 100);
//    IntLinkNode *current = first;
//    n = nnodes(re);
//    for (int i = 0; i < n; ++i) {
//        IntLinkNode *newNode = new IntLinkNode {nvalues(re)};
//        current->next = newNode;
//        current = newNode;
//    }
//}
//int calculateTheLastTwo(IntLinkNode *first) {
//    int num1 = 0, num2 = 0;
//    IntLinkNode * prev;
//    generateRandomList(first);
//    for(int i = 0; i < n; ++i) {
//        std::cout<< first->data << " ";
//        prev = first;
//        num1 = prev->data;
//        first = first->next;
//        num2 = first->data;
//    }
//    return num1 + num2;
//}

//int main() {
//    IntLinkNode first{15};
//    std::cout << "Data in all the list is : ";
//    int sumOfLast2 = calculateTheLastTwo(&first);
//    std::cout << std::endl;
//    std::cout << "The sum of last two numbers : " << sumOfLast2 << std::endl;
//    return 0;
//}
