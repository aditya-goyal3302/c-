// #include<iostream>
// using namespace std;
// class calculation{
//     public:
//     int num;
//     void get_data(){
//         cout<<"Avinandan/2699"<<endl;
//         cout<<"enter number"<<endl;
//         cin>>num;
//     }
//     void factorial(){
//         int factorial=1;
//         for(int i=1;i<=num;i++){
//             factorial = factorial*i;

//         }
//         cout<<"factorial is:"<<factorial;

//     }
//     void fibonacci(){
//         int num1=0,num2=1,num3;
//         if(num==0||num==1){
//             cout<<"num 1 :"<<num1<<endl;
//             cout<<"num 2 :"<<num2<<endl;
//         }
//         else{
//             for(int i=1;i<=num;i++){
//                 num3=num1+num2;
//                 num1=num2;
//                 num2=num3;
//              cout<<num3<<" ";
//             }
//         }

//     }
//     void palindrome(){
//      int n, num, digit, rev = 0;

//      cout << "Enter a positive number: ";
//      cin >> num;

//      n = num;

//      do
//      {
//          digit = num % 10;
//          rev = (rev * 10) + digit;
//          num = num / 10;
//      } while (num != 0);

//      cout << " The reverse of the number is: " << rev << endl;

//      if (n == rev)
//          cout << " The number is a palindrome.";
//      else
//          cout << " The number is not a palindrome.";
//     }

// };
// main(){
//     while(1){
//         cout<<"press 1 for calculating factorial"<<endl;
//         cout<<"press 2 for calculating fibonacci"<<endl;
//         cout<<"press 3 for calculating palindrome"<<endl;
//         cout<<"enter your choice"<<endl;
//         int ch;
//         cin>>ch;
    
//         switch(ch){
//             calculation obj;
//             case 1:
//             obj.get_data();
//             obj.factorial();
//             break;
//             case 2:
//             obj.get_data();
//             obj.fibonacci();
//             break;
//             case 3:
//             obj.get_data();
//             obj.palindrome();
//             break;
//             default:
//                 continue;

//         }
//     }

// }







// #include <iostream>       // std::cout
// #include <string>         // std::string

// int main ()
// {
//   std::string str ("There are two needles in this haystack with needles.");
//   std::string str2 ("needle");

//   // different member versions of find in the same order as above:
//   std::size_t found = str.find(str2);
//   if (found!=std::string::npos)
//     std::cout << "first 'needle' found at: " << found << '\n';

//   found=str.find("needles are small",found+1,6);
//   if (found!=std::string::npos)
//     std::cout << "second 'needle' found at: " << found << '\n';

//   found=str.find("haystack");
//   if (found!=std::string::npos)
//     std::cout << "'haystack' also found at: " << found << '\n';

//   found=str.find('.');
//   if (found!=std::string::npos)
//     std::cout << "Period found at: " << found << '\n';

//   // let's replace the first needle:
//   str.replace(str.find(str2),str2.length(),"preposition");
//   std::cout << str << '\n';

//   return 0;
// }
// #include<iostream>
// using namespace std;
// int fun()
// {
// static int demo=100;
// cout<<"demo = "<<demo<<endl;
// return demo;
// }
// int main()
// {
// fun() = 200;
// fun();
// }

#include <iostream>  
using namespace std;  
class A  
{  
    public:  
    void Display()  
    {  
        std::cout << "Class A" << std::endl;  
    }  
};  
class B  
{  
    public:  
    void Display()  
    {  
        std::cout << "Class B" << std::endl;  
    }  
};  

class C : public A, public B  
{  
    void view()  
    {  
        display();  //
    }  
};  
int main()  
{  
    C obj; A obj2; B  obj3;

             obj.B :: display();  
    return 0;  
} 

