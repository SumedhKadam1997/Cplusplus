#include <iostream>
#include <vector>
#include <thread>
#include <atomic>

long multiThreadedSum;
//std::atomic<long> multiThreadedSum;

void sumNumbers(const std::vector<int> &toBeSummed, int start, int end) {
   for (int i = start; i <= end; ++i) {
       multiThreadedSum += toBeSummed[i];
   }
}

int main() {
   std::vector<int> toBeSummed;
   for(int i = 0; i < 140000; ++i) {
       toBeSummed.push_back(rand());
   }

   long sum = 0;
   for(int value : toBeSummed) {
       sum += value;
   }

   std::cout << "The Single Threaded sum is : " << sum << std::endl;

   std::thread t1(sumNumbers, toBeSummed, 0, 9999);
   std::thread t2(sumNumbers, toBeSummed, 10000, 19999);
   std::thread t3(sumNumbers, toBeSummed, 20000, 29999);
   std::thread t4(sumNumbers, toBeSummed, 30000, 39999);
   std::thread t5(sumNumbers, toBeSummed, 40000, 49999);
   std::thread t6(sumNumbers, toBeSummed, 50000, 59999);
   std::thread t7(sumNumbers, toBeSummed, 60000, 69999);
   std::thread t8(sumNumbers, toBeSummed, 70000, 79999);
   std::thread t9(sumNumbers, toBeSummed, 80000, 89999);
   std::thread t10(sumNumbers, toBeSummed, 90000, 99999);
   std::thread t11(sumNumbers, toBeSummed, 100000, 109999);
   std::thread t12(sumNumbers, toBeSummed, 110000, 119999);
   std::thread t13(sumNumbers, toBeSummed, 120000, 129999);
   std::thread t14(sumNumbers, toBeSummed, 130000, 139999);


   t1.join();
   t2.join();
   t3.join();
   t4.join();
   t5.join();
   t6.join();
   t7.join();
   t8.join();
   t9.join();
   t10.join();
   t11.join();
   t12.join();
   t13.join();
   t14.join();

   std::cout << "The Multi Threaded sum is : " << multiThreadedSum << std::endl;

}
