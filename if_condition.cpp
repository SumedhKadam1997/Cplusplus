#include<iostream>
using namespace std;

int getMax(int num1, int num2){
    if(num1 < num2){
        return num2;
    }else
    {
        return num1;
    }
}

int main(){
    cout << getMax(2,5) << " is greater";
}