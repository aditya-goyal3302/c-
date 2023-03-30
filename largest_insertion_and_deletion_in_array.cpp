#include<iostream>
using namespace std;

class array_f{
    int *num ;
    int size ;
    public:
    void arr_input(int x, int * y){
        size = x;
        num = y;
    }
    void display(){
        cout<<endl;
        for(int i =0; i<size; i++){
            cout<<*(num+i)<<" ";
        }
        cout<<endl;
    }
    int large(){
        int max=0;
        for(int i=0; i<size; i++){
            if (*(num+i) > max)
                max = *(num+i);
        }
        return max;
    }
    void insert(){
        while(1){       
            int x;
            cout<<"Enter Index: ";
            cin>>x;
            if(x>=size && x<0){
                cout<<"Invalid Index"<<endl<<"Try Again !!"<<endl;
                continue;
            }
            else{
                if(size>x){
                    int t= *(num+x), temp;
                    for(int i = x; i<size; i++){
                        temp = *(num+i+1);
                        *(num+i+1) = t;
                        t = temp;
                    }
                }
                cout<<"Enter Value To Be Inserted: ";
                cin>> *(num+x);
                size++;
            }
            //cout<<*(num+x);
            break;
        }
        display();
    }
    void del(){
        while(1){       
            int x;
            cout<<"Enter Index: ";
            cin>>x;
            if(x>=size && x<0){
                cout<<"Index Not Available"<<endl<<"Try Again !!"<<endl;
                continue;
            }
            else{
                for(int i= x; i<size-1; i++){
                    *(num+i) = *(num+i+1);
                }
                size--;
                break;
            }
        }
    }
};

void clrscr()                                         // function clears screen of consol
{
  system("cls");
}

int main(){
    clrscr();
    array_f array;

    int t,opt =0;
    cout<<"Enter Array Length(MAX:50): ";
    cin>> t;

    if(t < 0 || t > 50){
        cout<<"Wrong Choice";
        return 0;
    }

    int arr[50];

    cout<<"Enter Values: ";

    for(int i=0; i<t; i++){
        cin>>arr[i];
    }

    cout<<"Choose from the Following:- "<<endl<<"1 -> Insert Element"<<endl<<"2 -> Delete Element"<<endl<<"3 -> Largest element";
    cout<<endl<<"Enter the option: ";
    cin>>opt;
    array.arr_input(t,arr);
    switch (opt)
    {
        case 1:
            clrscr();
            array.insert();
            break;
        case 2:
            clrscr();
            array.del();
            array.display();
            break;
        case 3:
            clrscr();
            cout<<"Max Val is: "<<array.large()<<endl;
            break;
        
        default:
            cout<<"Invalid Input";
            break;
    }
    return 0;

}
