#include <iostream>

using namespace std;

int main()
{
    int n, count[10]={0},t,o,check;
    cout<<"Enter number: ";
    cin>>n;
    t=n;
    while(t>0){
        o = t%10;
        t/=10;
        count[o]++;
    }
    cout<<"Enter number to check: ";
    cin>>check;
    
    cout<<"Occurence of "<<check <<" is: "<<count[check];
    
    return 0;
}