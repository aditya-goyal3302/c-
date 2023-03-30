#include<iostream>
using namespace std;

int main(){
    int s;
    cout<<"Size of array: ";
    cin>>s;

    int *arr = new int[s];

    cout<<"enter data: ";
    for(int i =0; i<s;i++){
        cin>>arr[i];
    }

    for(int i =0; i < s; i++){
        for(int  j=i+1; j < s; j++){
            if (arr [i] == arr[j]){
                cout<<"ans is: "<<arr[i];
            }
        }
    }
    return 0;
}