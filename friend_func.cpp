#include<iostream>
using namespace std;

class def;
class abc{
    int i;
    public:
    void get(){
        cout<<"enter I: ";
        cin>>i;
        cout<<endl;
    }
    void display(def obj);
};

class def{
    int j;

    public:
    void get(){
        cout<<"enter J: ";
        cin>>j;
        cout<<endl;
    }
    friend void abc::display(def);
};

void abc::display(def obj){
    cout<<i<<" + "<<obj.j<<" = ";
    cout<<i+obj.j;
}

int main(){
    abc obj1;
    def obj2;

    obj1.get();
    obj2.get();
    obj1.display(obj2);
}