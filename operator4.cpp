#include<iostream>
using namespace std;
int main(){
    int a=4;
    cout<<sizeof(a)<<endl;//4

    char name='a';
    cout<<sizeof(name)<<endl;//1

    bool dru;
    a==name? dru = true : dru = false;
    cout<<dru<<endl;//0

    cout<<(&a)<<endl;


 //unary operator
 
 int f=6;
 cout<<(++f)<<endl;

 int r=f+3;
 cout<<(r++)<<endl;
    return 0;
}