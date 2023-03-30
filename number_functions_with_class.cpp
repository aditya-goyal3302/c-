#include<iostream>
#include<math.h>
#include<conio.h>                                     //added for using for getche();
using namespace std;

class Numbers{                                         //used class for various functions
    int n;                                             // private variable by default
    public:
    void input(int x){
        n=x;
    }

    int checkEven(){                                  //function returns 0 if number is odd and 1 for even
        if((n%2)!=0)
          return 0;     //0 = false
        return 1;       //1 = true
    }

    int verify_prime(){                                //function returns 1 if number is prime number and 0 if not
        if (n <= 1)
            return 0;
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return 0;
        return 1;
    }

    float amstrong(){                                  //function returns 1 if number is amstrong and 0 if not
        int l=0,temp = n;
        float ans=0,o=0;

        for(l=0;temp > 0; l++)
            temp /= 10;
        temp = n;
        for(int i =0; i<l; i++){
            o= temp%10;
            ans += pow(o,l) ;
            temp/=10;
        }
        if(ans == n)
            return 1;
        return 0;
    }

    void fibonacci(){
        
        int o=0,t=1,ans = 0,num = n;

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

    int sum(){                                         //function returns sum of all digits of number
        int num = n;
        int res = 0;
        while (num !=0){
            res += num%10;
            num = num/10;
        }
    return res;
    }

    
    int palindrome(){

        int digit=0 , rev=0, n=n;

        do{
            digit = n % 10;
            rev = (rev * 10) + digit;
            n = n / 10;
        } while (n != 0);

        if(rev == n)
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
    Numbers num;
    char option = 0,exit;

    clrscr();
    cout<<"WELCOME TO NUMBER FUNCTION!!"<<endl<<endl;

    while(1){

        cout<<"Functions List :-"<<endl;                                   // menu fof functions on program
        cout<<"1 -> Check Even/Odd"<<endl;
        cout<<"2 -> Sum of All Digits"<<endl;
        cout<<"3 -> Find if Armstrong"<<endl;
        cout<<"4 -> Find if Prime"<<endl;
        cout<<"5 -> Print Fibonacci Series"<<endl;
        cout<<"6 -> palindrome number or not"<<endl;
        cout<<"7 -> Exit"<<endl;
        cout<<"Select the One Option of following: ";

        option = getche();                                               // input for menu function in one char.
        clrscr();

        if (option == '7')                                              // break loop if press 5 (exit)
           break;
        
        if(!(option == '1' || option == '2' || option == '3' || option == '4' || option == '5' || option == '6')){     // if no option is correct 
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
            return 0;                                       // if cin.fail() is true it returns 0.
        }
        num.input(x);                                             //input function

        if(option == '1')
            if(num.checkEven())
                cout<<endl<<"NUMBER IS EVEN"<<endl;                         //if even
            else
                cout<<endl<<"NUMBER IS odd"<<endl;                          //if odd
        if(option == '4')
           if(num.verify_prime() == 1)
                cout<<endl<<"NUMBER IS prime"<<endl;                  // if prime
            else
                cout<<endl<<"NUMBER IS Non-Prime"<<endl;              //  if non prime
        
        if(option == '2')
            cout<<endl<<"SUM of all digits is: "<<num.sum()<<endl;    // print sum

        if(option == '3')
            if(num.amstrong())
                cout<<endl<<"Number is Amstrong "<<endl;              //print if amstrong
            else 
                cout<<endl<<"Number is not Amstrong "<<endl;         //print if not amstrong

        if(option == '5')
            num.fibonacci();
        
        if(option == '6')
            if(num.palindrome())
                cout<<endl<<"Number is Palindrome "<<endl;              //print if Palindrome
            else 
                cout<<endl<<"Number is not Palindrome "<<endl;         //print if not Palindrome
        
        cout<<"Press Any Key to Continue";                          // wait to show output
        exit = getche();
        clrscr();                                                   // clesar screen before loop itrates again
        
    }
    clrscr();  
    cout<<endl<<"Press any key to EXIT.."<<endl;
    exit = getche();
    return 0;
}
