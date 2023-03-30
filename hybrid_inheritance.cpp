#include<iostream>
using namespace std;

class university{
    public:
    void funa(){
        cout<<"CLASS A"<<endl;
    }
};
class department : public university{
    public:
    void funb(){
        cout<<"CLASS B"<<endl;
    }
};
class subject : virtual public department{
    public:
    void func(){
        cout<<"CLASS C"<<endl;
    }
};
class marks{
    public:
    void marks_display(){
        cout<<"marks of student";
    }
};
class student :virtual public department, public subject, public marks{
    public:
    void fund(){
            cout<<"CLASS D"<<endl;
        }
};
int main(){

    student ob1;
    ob1.funa();
    ob1.funb();
    ob1.func();
    ob1.fund();
    ob1.marks_display();
    return 0;
}