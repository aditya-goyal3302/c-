#include<iostream>
using namespace std;

int main(){
    int a,b,mul=0;
    cout<<"enter 2 numbers: ";
    cin >>a>>b;

    for(int i=0;i<b;i++)
        mul+=a;

    cout<<"ans: "<< mul;

    return 0;
}