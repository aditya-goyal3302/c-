#include<iostream>
using namespace std;

int main(){
    int *p;
    int size;
    cout<<"number of data: ";
    cin>>size;

    p = new int[size] {10};

    // for(int i =0;i<size;i++){
    //     cin>>p[i];
    // }

    for(int i =0;i<size;i++){
        cout<<p[i]<<" ";
    }

    // delete p;
    // for(int i =0;i<size;i++){
    //     cout<<p[i]<<" ";
    // }
    return 0;
}