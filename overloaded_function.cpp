#include<iostream>
using namespace std;
class abc{
    public:
    int x,y;
    abc(){}
    abc(int a, int b){
        x=a;
        y=b;
    }
    abc operator *( abc ob1){
        abc temp;
        temp.x = x*ob1.x;
        temp.y = y*ob1.y;
        return temp;
}
};

int main(){
    abc x(10,20),y(2,4);
    abc z = x*y;

    cout <<"answer is: "<<z.x<<"  "<<z.y;
    
   }