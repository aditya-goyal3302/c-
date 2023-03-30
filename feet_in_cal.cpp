#include<iostream>
using namespace std;

class dis{
    int ft,in;
    public:
    void input(){
        cout<<"Enter Size For Object:"<<endl;
        cout<<"Input feet: ";
        cin>>ft;
        cout<<"Input Inches: ";
        cin>>in;
    }
    void display(){
        cout<<"Feets: "<<ft<<"'"<<endl<<"Inches: "<<in<<"''";
    }
    friend dis operator +(dis p1, dis p2);
    // dis operator +(dis p1){
    //     dis temp;
    //     temp.ft = ft + p1.ft;
    //     temp.in = in + p1.in;
    //     if (temp.in >= 12){
    //         temp.ft += temp.in / 12;
    //         temp.in = temp.in % 12;
    //     }
    //     return temp;
    // }

};

 dis operator +(dis p1, dis p2){
        dis temp;
        temp.ft = p2.ft + p1.ft;
        temp.in = p2.in + p1.in;
        if (temp.in >= 12){
            temp.ft += temp.in / 12;
            temp.in = temp.in % 12;
        }
        return temp;
    }

int main(){
    dis ob1,ob2;

    ob1.input();
    ob2.input();

    (ob1+ob2).display();
    return 0;
}