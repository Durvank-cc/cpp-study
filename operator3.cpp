#include<iostream>
using namespace std;
int main(){
    int num1=5;//0101
//bitwise operator
    cout<<(num1<<1)<<endl;//10
    cout<<(num1>>1)<<endl;//2

int num2 = 8;//000
cout<<(num1&num2)<<endl;//0
cout<<(num1|num2)<<endl;//1101

return 0;
}