#include<iostream>
using namespace std;

int main(){
    float a,b,t=0,mod = 0;
    int tt=0;

    cout<<"enter 2 numbers: ";
    cin >>a>>b;

    tt = a/b;
    t = a/b;
    mod = (t-tt)*b;

    cout<<"ans: "<<mod;

    return 0;
}