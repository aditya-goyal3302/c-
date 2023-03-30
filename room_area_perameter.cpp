#include<iostream>

using namespace std;

class Room{
    float length, breath;                                                            //private variable declaration
    public:
    void get(float x, float y);
    void display();
    int area();
    int perameter();
};

void Room::get(float x, float y){
        length = x;
        breath = y;
}
void Room::display(){
    cout<<"Length is: "<<length<<endl;
    cout<<"Breath is: "<<breath<<endl;
    cout<<"Area is: "<<area()<<endl;
    cout<<"Perameter is: "<<perameter()<<endl;
}
int Room::area(){
    return length*breath;
}
int Room::perameter(){
    return (length+breath)*2;
}

int main(){
    system("cls");

    Room obj[5];
    int i = 0;

    while(i < 5){
        float l,b;
        cout<<"Enter Length & Breath for element "<<i+1<<" : ";
        cin>>l>>b;
        obj[i].get(l,b);
        obj[i].display();
        i++;
    }
    return 0;
}