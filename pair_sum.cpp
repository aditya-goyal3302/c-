#include<iostream>
using namespace std;

int main(){
    int s,n;
    cout<<"Size of array: ";
    cin>>s;

    int arr[s];
    cout<<"Enter data: ";
    for(int i =0 ; i<s ; i++){
        cin>>arr[i];
    }
    cout<<"Sum Should Be: ";
    cin>>n;
    for(int i =0 ; i<s ; i++){
        for(int j=i; j<s; j++){
            if(arr[i] + arr[j] == n){
                cout<<arr[i]<<" + "<<arr[j]<<" = "<<n<<endl;
            }
        }
    }

}