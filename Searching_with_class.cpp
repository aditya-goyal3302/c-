#include<iostream>
using namespace std;

class search_A{
  int a[80] , size , status,n;
  public:
  void input(){
    cout<<"Enter Array size: ";
    cin>> size;
    cout<<endl;
    cout<<"Enter Numbers: ";
    for(int i = 0; i < size; i++){
        cin>>a[i];
    }
    cout<<"enter number to find: ";
    cin>>n;
    cout<<endl;
  }
  int linear_s(){
    input();
    for(int i =0; i<size; i++){
        if(a[i] == n) return 1;
    }
    return 0;
  }
  int binary_s(){
    input();
    int l=0, r=size-1;
    while(l<=r){
      int mid = (l+r)/2;

      if(a[mid] == n)
        return 1;
      else if(a[mid]>n)
        r=mid-1;
      else
        l = mid+1;
    }
    return 0;
  }
};

int main(){
  int x ,opt=0;
  search_A n;
  cout<<"Choose from following: "<<endl;
  cout<<"1-> Linear Search"<<endl;
  cout<<"2-> Binary Search"<<endl;
  cout<<"Option: ";
  cin>>opt;
  switch (opt){
    case 1:
      if(n.linear_s())
        cout<<"found";
      else
        cout<<"not found";
      break;
    case 2:
      if(n.binary_s())
        cout<<"found";
      else
        cout<<"not found";
    default:
      break;
  }
    return 0;
}