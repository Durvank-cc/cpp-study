#include<iostream>
using namespace std;
int main(){
    int num1=6;
    int num2=3;
//arithematic operators

    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1%num2<<endl; 
    
//relational operators
    cout<<(num1==num2)<<endl;
    cout<<(num1!=num2)<<endl;
    cout<<(num1>=num2)<<endl;
//assignment operator
num1+=3;
cout<<num1<<endl;//6+3
num2-=2;
cout<<num2<<endl;//3-2

return 0;
}