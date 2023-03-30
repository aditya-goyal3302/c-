#include<iostream>
#include<math.h>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE); // used for goto
COORD CursorPosition; // used for goto

void gotoXY(int x, int y) 
{ 
	CursorPosition.X = x; 
	CursorPosition.Y = y; 
	SetConsoleCursorPosition(console,CursorPosition); 
} 

class array_f{
    int num[100];
    int size ;
    public:
    void arr_input(){
        cout<<"Enter Array Length: ";
        cin>> size;
        
        if(size < 0){
            cout<<"Wrong Choice";
            return ;
        }
        cout<<"Enter Values: ";
        for(int i=0; i<size; i++){
            cin>>num[i];
    }
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
    int x=4;
    char option, exit;
	bool running = true;
    gotoXY(0,0); cout<<"WELCOME TO ARRAY FUNCTIONS!!";

    while(1){
        while(running){

            gotoXY(0,2); cout<<"Functions List :-";                                   // menu fof functions on program
            gotoXY(3,4); cout<<"1 -> Largest Number In Array";
            gotoXY(3,5); cout<<"2 -> Insert Element In Array";
            gotoXY(3,6); cout<<"3 -> Delete Element In Array";
            gotoXY(3,7); cout<<"4 -> Exit"; 
            system("pause>nul");            

            if(GetAsyncKeyState(VK_DOWN)){
                gotoXY(1,x); cout<<"  ";
                if(x != 7){
                    x++;
                    gotoXY(1,x); cout<<"->";
                    continue;
                }
                else if(x == 7){
                    x= 4;
                    gotoXY(1,x); cout<<"->";
                    continue;
                }

            }
            if(GetAsyncKeyState(VK_UP)){
                gotoXY(1,x); cout<<"  ";
                if(x != 4){
                    x--;
                    gotoXY(1,x); cout<<"->";
                    continue;
                }
                else if(x <= 4){
                    x = 7;
                    gotoXY(1,x); cout<<"->";
                    continue;
                }
            }
            if(GetAsyncKeyState(VK_RETURN)){
                clrscr();
                option = x - 3 + '0';
                running = false;
            }
        }
        array_f array;

        if(option == '4')
            break;
        
        if(!(option == '1' || option == '2' || option == '3')){     // if no option is correct 
            clrscr();
            cout<< "Wrong Choice. Try Again!! "<<endl<<endl;                         // print "wrong choice"
            continue;                                                                // itrate loop from begning     
        }
        
        array.arr_input();

        if(option == '1')    
            cout<<"Max Val is: "<<array.large()<<endl;

        if(option == '2')
            array.insert();

        if(option == '3')
            array.del();


        array.display();

    }
    return 0;

}
