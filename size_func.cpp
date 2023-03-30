#include<iostream>
#include<Windows.h>
#include<wincon.h>
using namespace std;

// void font_size(int x) {
//     static CONSOLE_FONT_INFOEX  fontex;
//     fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
//     HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
//     GetCurrentConsoleFontEx(hOut, 0, &fontex);
//     fontex.FontWeight = x;
//     fontex.dwFontSize.X = 72;
//     fontex.dwFontSize.Y = 72;
//     SetCurrentConsoleFontEx(hOut, NULL, &fontex);
// }

int main(){
    // cout<<"HI"<<endl;
    // font_size(900);
    // cout<<"HI";
    static CONSOLE_FONT_INFOEX  fontex;
     fontex.cbSize = sizeof(CONSOLE_FONT_INFOEX);
     HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
     GetCurrentConsoleFontEx(hOut, 0, &fontex);
     fontex.FontWeight = 1000;
     fontex.dwFontSize.X = 36;
     fontex.dwFontSize.Y = 36;
     SetCurrentConsoleFontEx(hOut, 0, &fontex);
     cout << "This text is bold, like me.\n";
       
    
     fontex.FontWeight = 200;
     fontex.dwFontSize.X = 12;
     fontex.dwFontSize.Y = 12;
     SetCurrentConsoleFontEx(hOut, 0, &fontex);
     cout << "This text is not.\n";//<-----------How do I make this line different from the first?

     return 0;
}