#include<iostream>
using namespace std;

int getMax(int num1, int num2, int num3){
    if(num1 >= num2 && num1 >= num3){
        return num1;
    }else if (num2 >= num1 && num2 >= num3)
    {
        return num2;
    }
    
    else
    {
        return num3;
    }
}

int main(){
    cout << getMax(20,200,8) << " is greater";
    return 0;
}