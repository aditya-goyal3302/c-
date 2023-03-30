#include<iostream>
#include<math.h>
using namespace std;

class cart{
    float x,y;
    public:
    cart(){}
    cart(float p1, float p2){
        x=p1,y= p2;
    }
    // cart(polar p1){
    //     x= p1.ret_rad()* cos(3.14*p1.ret_theta()/180.0);
    //     y = p1.ret_rad()* sin(3.14*p1.ret_theta()/180.0);
    // }
    void input(){
        cin>>x>>y;
    }
    void display(){
        cout<<"x = "<<x<<" y = "<<y;
    }
};
class polar{
    float r,theta;
    public:
    polar(){}
    polar(float p1, float p2){
        r=p1;
        theta=p2;
    }
    float ret_theta(){
        return theta;
    }
    float ret_rad(){
        return r;
    }
    void display(){
        cout<<theta;
        cout<<r;
    }
    operator cart(){
        return cart(r*cos(3.14* theta /180.0), r* sin(3.14* theta/180.0));
    }
};
int main(){
    polar ob(5,90);
    cart c1;
    c1= cart(ob);
    c1.display();
    return 0;
}