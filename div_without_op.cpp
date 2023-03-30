#include<iostream>
using namespace std;

int main(){
    int a,b,div=1;
    cout<<"enter 2 numbers: ";
    cin >>a>>b;

    for(int i=0;a>b;i++,div++)
        a-=b;
    
        

    cout<<"ans: "<< div;

    return 0;
}