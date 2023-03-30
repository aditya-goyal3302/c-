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
void SetColor(int ForgC)
 {
    WORD wColor;
    CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(console, &csbi))
     {
        //cout<<"activated";
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(console, wColor);
     }
     return;
 }
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
        
        unsigned long long int o=0,t=1,ans = 0,num = n;

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

        int digit=0 , rev=0, num=n;

        do{
            digit = num % 10;
            rev = (rev * 10) + digit;
            num = num / 10;
        } while (num != 0);

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
    SetColor(4);
    gotoXY(0,0); SetColor(3); cout<<"WELCOME TO NUMBER FUNCTION!!";
    
    while(1){
        int x=4;
	    bool running = true;
        char arr[7][30] = {"1 -> Check Even/Odd","2 -> Sum of All Digits","3 -> Find if Armstrong","4 -> Find if Prime","5 -> Print Fibonacci Series","6 -> palindrome number or not","7 -> Exit"};

        while(running){
            //clrscr();
            gotoXY(0,2); SetColor(3); cout<<"Functions List :-";                                   // menu fof functions on program
            //SetColor(3);
            for(int i=0; i<7; i++){
                //cout<<option<<"hi";
                if(i == (x-4)){
                    
                    gotoXY(2,(4+i)); SetColor(4); cout<<arr[i]<<endl;
                }
                else{
                    
                    gotoXY(2,(4+i)); SetColor(1); cout<<arr[i]<<endl;
                }
            }

            // gotoXY(3,4); cout<<"1 -> Check Even/Odd"<<endl;
            // gotoXY(3,5); cout<<"2 -> Sum of All Digits"<<endl;
            // gotoXY(3,6); cout<<"3 -> Find if Armstrong"<<endl;
            // gotoXY(3,7); cout<<"4 -> Find if Prime"<<endl;
            // gotoXY(3,8); cout<<"5 -> Print Fibonacci Series"<<endl;
            // gotoXY(3,9); cout<<"6 -> palindrome number or not"<<endl;
            // gotoXY(3,10); cout<<"7 -> Exit"<<endl;
            // gotoXY(0,11); cout<<"Select the One Option of following: ";
            system("pause>nul");
            // option = getche();                                               // input for menu function in one char.
            //while (!kbhit()){}

            if(GetAsyncKeyState(VK_DOWN)){
                //gotoXY(0,x); SetColor(4); cout<<"  ";
                if(x != 10){
                    x++;
                    //gotoXY(0,x); SetColor(4); cout<<"->";
                    continue;
                }
                else if(x == 10){
                    x= 4;
                    //gotoXY(0,x); SetColor(4); cout<<"->";
                    continue;
                }

            }

            if(GetAsyncKeyState(VK_UP)){
                //gotoXY(0,x); SetColor(4); cout<<"  ";
                if(x != 4){
                    x--;
                    //gotoXY(0,x); SetColor(4); cout<<"->";
                    continue;
                }
                else if(x <= 4){
                    x = 10;
                    //gotoXY(0,x); SetColor(4); cout<<"->";
                    continue;
                }
            }

            if(GetAsyncKeyState(VK_RETURN)){
                clrscr();
                option = x - 3 + '0';
                running = false;
            }
        }
        SetColor(3);
        if (option == '7')                                              // break loop if press 5 (exit)
           break;
        
        if(!(option == '1' || option == '2' || option == '3' || option == '4' || option == '5' || option == '6')){     // if no option is correct 
            clrscr();
            cout<< "Wrong Choice. Try Again!! "<<endl<<endl;                         // print "wrong choice"
            continue;                                                                // itrate loop from begning     
        }
        
        long long int nm;
        cout<<"Enter the value: "; 
        cin>> nm;                                         // input value of number for various function.
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
        num.input(nm);                                             //input function

        if(option == '1'){
            if(num.checkEven())
                cout<<endl<<"NUMBER IS EVEN"<<endl;                         //if even
            else
                cout<<endl<<"NUMBER IS odd"<<endl;                          //if odd
        }

        if(option == '4'){
           if(num.verify_prime() == 1)
                cout<<endl<<"NUMBER IS prime"<<endl;                  // if prime
            else
                cout<<endl<<"NUMBER IS Non-Prime"<<endl;              //  if non prime
        }

        if(option == '2'){
            cout<<endl<<"SUM of all digits is: "<<num.sum()<<endl;    // print sum
        }

        if(option == '3'){
            if(num.amstrong())
                cout<<endl<<"Number is Amstrong "<<endl;              //print if amstrong
            else 
                cout<<endl<<"Number is not Amstrong "<<endl;         //print if not amstrong
        }

        if(option == '5')
            num.fibonacci();
        
        if(option == '6'){
            if(num.palindrome())
                cout<<endl<<"Number is Palindrome "<<endl;              //print if Palindrome
            else 
                cout<<endl<<"Number is not Palindrome "<<endl;         //print if not Palindrome
        }
        SetColor(2);
        cout<<"Press Any Key to Continue";                          // wait to show output
        exit = getche();
        clrscr();                                                   // clesar screen before loop itrates again
        
    }

    SetColor(3);
    clrscr();  
    cout<<endl<<"Press any key to EXIT.."<<endl;
    exit = getche();
    SetColor(15);

    return 0;
}
