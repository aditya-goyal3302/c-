#include<iostream>
using namespace std;

int main(){
    int a,t,tt=0;
    cout<<"enter numbers: ";
    cin >>a;
    t = a;
    // while(1){
    //     if(tt == 0){
    //         cout<<t--<<" ";

    //         if (t == -1){
    //         tt = 1;
    //         t = 1;
    //         }
    //     }
    //     if(tt == 1){
    //         cout<<t++<<" ";
    //         if(t == a+1)
    //             break;
    //     }
        
    // }
    for (int i = 0; i<((2*a)+1);i++){
        if(t >=0)
            tt = t;
        else
            tt = t *(-1);
        t--;
        cout<< tt<<" ";
    }

    return 0;
}