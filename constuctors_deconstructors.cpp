#include<iostream>
using namespace std;
class abc{
    public:
    int i,j;
    
    abc(){
        cout<<"Defatult-Constructor in working"<<endl<<endl;
    }
    abc(int k ){
        i=k;
        j=k;
        cout<<"Parameterized-Constructor in working"<<endl<<endl;
    }
    abc(char ch, int x=1){
        i=x;
        cout<<"char parameter Constructor in working number is : "<<x<<endl<<endl;
    }
    
    abc(const abc &p1){
        i=p1.i;
        j=p1.j;
        cout<<"Copy-Constructor in working"<<endl<<endl;
    }
    ~abc(){
        cout<<"De-constructor in working"<<endl<<endl;
    }
};

int main(){
    abc obj1(1);
    {
        abc obj0('a');
        abc obj3('a',2);
    }
    abc obj2;
    obj2 = obj1;
    cout << obj2.i;
    return 0;
}