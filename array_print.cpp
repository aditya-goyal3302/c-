#include<iostream>
#include<conio.h>
using namespace std;
void input(int a[],int s){
    static int x=1;
    cout<<"Enter data of "<<x<<"st array: ";
    for(int i=0;i<s;i++){
        cin >> a[i];
    }
    x++;
}
void output(int a[],int s){
    static int x=1;
    cout<<"Data of "<<x<<"st array: ";
    for(int i=0;i<s;i++){
        cout << a[i]<<" ";
    }
    cout<<endl;
    x++;
}
int main(){
    int sa,sb,sc;
    cout<<"Enter size of 3 arrays: "<<endl;
    cin>>sa>>sb>>sc;

    int a[sa],b[sb],c[sc];

    input(a,sa);
    input(b,sb);
    input(c,sc);

    output(a,sa);
    output(b,sb);
    output(c,sc);
    
    return 0;
}