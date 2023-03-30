#include<iostream>
using namespace std;


void in(int arr[],int s){
    for (int i=0; i < s; i++){
        cin>>arr[i];
    }
}

int main(){
    int s1,s2;
    cout<<"Enter size of Array 1 & 2: ";
    cin>>s1>>s2;

    int arr1[s1],arr2[s2];

    cout<<"Enter data in Array 1: ";
    in(arr1,s1);
    cout<<"Enter data in Array 2: ";
    in(arr2,s2);


    for(int i=0; i<s1; i++){
        for(int j =0; j<s2; j++){
            if(arr1[i] == arr2[j]){
                arr2[j] = -1;
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    return 0;
}