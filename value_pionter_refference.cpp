#include<iostream>
//#include <stdlib.h>
// #include <windows.h>
// #include <dos.h>
// #include <dir.h>
// #include <conio.h>
using namespace std;
class fun_call{
    public:
        int add (int i , int j){
            i += j;
            return i;
        }
        int mul (int &i , int &j){
            return (i * j);
        }
        int div (int *i , int *j){
            int res = *i / *j;
            return res;
        }
};
// void SetColor(int ForgC)
//  {
//      WORD wColor;

//     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
//     CONSOLE_SCREEN_BUFFER_INFO csbi;

//                        //We use csbi for the wAttributes word.
//      if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
//      {
//                  //Mask out all but the background attribute, and add in the forgournd     color
//           wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
//           SetConsoleTextAttribute(hStdOut, wColor);
//      }
//      return;
//  }
void bef(int v1, int v2){
    cout<<endl<<"before: "<<v1<<" "<<v2<<endl;
}
void af(int v1, int v2){
    cout<<endl<<"after function: "<<v1<<" "<<v2<<endl<<endl;
}
int main(){
    system("cls");
    int v1,v2,v3;
    //SetColor(30);

    cout<<"Enter 2 values: ";
    cin>>v1>>v2; cout<<endl;
    v3= v1;

    fun_call obj;
    cout<<"Call by value (ADD)"; bef(v1,v2);
    cout<<obj.add(v1,v2); af(v1,v2);
    v1=v3;

    
    cout<<"Call by reference (mul)"; bef(v1,v2);
    cout<<obj.mul(v1,v2); af(v1,v2);
    v1=v3;

    cout<<"Call by pointer (div)"; bef(v1,v2);
    cout<<(obj.div(&v1, &v2)); af(v1,v2);
    
    return 0;
}