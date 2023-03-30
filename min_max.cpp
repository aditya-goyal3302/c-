#include<iostream>
#include<conio.h>
using namespace std;
void min_max(int n, int *max, int *min, int arr[]){
    for(int i=0;i<n;i++){
        if(arr[i]>*max)
            *max=arr[i];
        if(arr[i]<*min)
            *min=arr[i];
    }
}
int main(){
    int s;
    cout<<"Size of array: ";
    cin>>s;
    int *arr = new int[s];
    cout<<"Enter data in array: ";
    for(int i=0; i<s;i++){
        cin>>arr[i];
    }
    int min=arr[0],max=0;
    min_max(s,&max,&min,arr);

    cout<<"Max element is: "<<max<<endl<<"Min element is: "<<min;

    return 0;

}