#include <iostream>
using namespace std;
class Complex{
    int r;
    int i;
    public:    
    void input(){
        cout<<"Enter the complex no: ";
        cout<<endl<<"real: ";
        cin>>r;
        cout<<"imaginary: ";
        cin>>i;
    }

    void display(){
        cout<<"Complex Number is: "<<r<<"+i"<<i<<endl;
        cout<<endl;
    }
    Complex add(Complex obj){
        Complex temp;
        temp.r = r + obj.r;
        temp.i = i + obj.i;
        return temp;
    }
    int real(){
        return r;
    }
    int imag(){
        return i;
    }
};
int main(){
    Complex ob1;
    ob1.input();
    ob1.display();
    Complex ob2;
    ob2.input();
    ob2.display();
    Complex ob;
    ob = ob1.add(ob2);
    ob.display();
}