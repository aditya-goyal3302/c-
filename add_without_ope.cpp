#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter 2 numbers: ";
    cin >>a>>b;

    for(int i=0;i<b;i++)
      a++;
    cout<<"ans: "<<a;

    return 0;
}