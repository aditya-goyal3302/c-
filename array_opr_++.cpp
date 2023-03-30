#include<iostream>
using namespace std;

class arr{
    int ar[10];
    int s;
    public:
    void input(){
        cout<<"Size of Array: ";
        cin>>s;
        cout<<endl;
        cout<<"Enter elements of array: ";
        for(int i=0; i<s; i++){
            cin>>ar[i];
        }
    }
    void operator ++(){
        for(int i = 0; i < s; i++){
            ++ar[i];
        }
    }
    void operator ++(int){
        for(int i = 0; i < s; i++){
            ++ar[i];
        }
    }
    void display(){
        cout<<"Elements of Arrays are : ";
        for(int i=0; i<s; i++)
            cout<<ar[i]<<" ";
            cout<<endl;
    }
};

int main(){
    arr ob1;

    ob1.input();
    system("cls");
    ob1.display();
    ++ob1;
    ob1.display();
    return 0;

}