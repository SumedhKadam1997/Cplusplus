#include<iostream>
using namespace std;

int main(){
    bool isMale = false;
    bool isTall = true;
    if(isMale && isTall){
        cout << "You are a tall male";
    }
    else if (isMale && !isTall)
    {
        cout << "You are a short male";
    }
    else if (!isMale && isTall)
    {
        cout << "You are tall female";
    }
    else
    {
        cout << "You are a short female";
    }
}