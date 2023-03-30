#include<iostream>
#include<conio.h>
using namespace std;

class circle{
    private:
    float rad;
    public:
    void input(float p1){
        rad = p1;
    }
    float area(){
        float res;
        res = 3.14*rad*rad;
        return res;
    }
    float cf(){
        return (2*3.14*rad);
    }
};

int main(){
        circle ob[5];
        float x;
        char a;
        for(int i =0; i<5 ; i++){
        cout<<"enter the value of circle radius:";
        cin>> x;
        ob[i].input(x);
        cout<<"\nArea of circle: "<<ob[i].area();
        cout<<"\nCircumfrence of circle: "<<ob[i].cf()<<endl;
        a = getche();
        }

    return 0;
}