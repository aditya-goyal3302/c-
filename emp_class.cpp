#include<iostream>
using namespace std;

class collage{
    char name[20];

    public:
    collage(){
        cin>> name;
    }
    friend class department;

};
class department{
    public:
    char* get(collage ob){
        return ob.name;
    }

};
class employee : public department{
    public:
    void get_emp(collage ob){
        cout<< get(ob);
    }
};
int main(){
    collage ob1;
    employee ob2;
    ob2.get_emp(ob1);
}