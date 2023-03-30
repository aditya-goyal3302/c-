#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<conio.h>

using namespace std;

class number{
    int num = 0;
    public:

    void input(int x){
        num = x;
    }
    float amstrong(){                                  //function returns 1 if number is amstrong and 0 if not
        int l=0,temp = num;
        float ans=0,o=0;

        for(l=0;temp > 0; l++)
            temp /= 10;
        temp = num;
        for(int i =0; i<l; i++){
            o= temp%10;
            ans += pow(o,l) ;
            temp/=10;
        }
        if(ans == num)
            return 1;
        return 0;
    }

    void fibonacci(){
        
        int o=0,t=1,ans = 0;

        if(num == 1){
            cout<<o<<endl;
        }
        if(num >= 2){
            cout<<o<<endl;
            cout<<t<<endl;
        }
        
        int i;
        for(i = 2; i < num; i++){
            ans = o+t;
            o = t;
            t= ans;
            cout<<ans<<endl;
        }

    }

    int palindrome(){

        int digit=0 , rev=0, n=num;

        do{
            digit = n % 10;
            rev = (rev * 10) + digit;
            n = n / 10;
        } while (n != 0);

        if(rev == num)
            return 1;
        else 
            return 0;
    }

};

void clrscr()                                         // function clears screen of consol
{
  system("cls");
}

int main(){
    clrscr();
    int num;
    number n;
    char option ,exit;

    cout<<"WELCOME TO NUMBER FUNCTION!!"<<endl<<endl;

    while(1){

        cout<<"Functions List :-"<<endl;                                   // menu fof functions on program
        cout<<"1 -> Find Fibonacci"<<endl;
        cout<<"2 -> palindrome number or not"<<endl;
        cout<<"3 -> Armstrong number or not"<<endl;
        cout<<"4 -> Exit"<<endl;
        cout<<"Select the One Option of following: ";

        option = getche();                                              // input for menu function in one char.
        clrscr();

        if (option == '4')                                              // break loop if press 5 (exit)
           break;
        
        if(!(option == '1' || option == '2' || option == '3')){     // if no option is correct 
            clrscr();
            cout<< "Wrong Choice. Try Again!! "<<endl<<endl;                         // print "wrong choice"
            continue;                                                                // itrate loop from begning     
        }
        
        long long int x;
        cout<<"Enter the value: "; 
        cin>> x;                                         // input value of number for various function.
        if(cin.fail()){                                  // cin.fail() tells if invalid data is entered.
            cout<<"invalid input"<<endl;
            cout<<"Press 1 to Start Again "<<endl;
            cout<<"Press any other key to EXIT.."<<endl;
            exit = getche();
            if(exit == '1'){
                clrscr();
                continue;}
            break;                                       // if cin.fail() is true it returns 0.
        }
        n.input(x);                                             //input function

        if (option == '1')
            n.fibonacci();

        if(option == '2')
            if(n.palindrome())
                cout<<endl<<"Number is Palindrome "<<endl;              //print if Palindrome
            else 
                cout<<endl<<"Number is not Palindrome "<<endl;         //print if not Palindrome
        if(option == '3')
            if(n.amstrong())
                cout<<endl<<"Number is Amstrong "<<endl;              //print if amstrong
            else 
                cout<<endl<<"Number is not Amstrong "<<endl;         //print if not amstrong


    }
    clrscr();  
    cout<<endl<<"Press any key to EXIT.."<<endl;
    exit = getche();
    return 0;
}