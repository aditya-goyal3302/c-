#include<iostream>
#include<string.h>

using namespace std;

class collage{
    public:
    char department[10];
    int sal,emps;
    void input(char a[], int b, int c){
        strcpy(a,department);
        emps = b;
        sal = c;
    } 
    static void count_sal(collage *ob , int t){
        int c=0;
        for(int i =0;i<t;i++){
            if(ob[i].sal > 10000){
                c++;
            } 
        }

        cout<<"employees sal more then 10k: "<<c;
    }
    static void count_emp(collage *ob , int t){
        int c=0;
        for(int i =0;i<t;i++){
            if(ob[i].emps > 5){
                c++;
            } 
        }
        cout<<"employees more then 5 in department: "<<c<<endl;
    }
};
class BCA : public collage{
    public:
    void get(){
        cout<<"department: "<<department<<" employees: "<<emps<<" sal = "<<sal<<endl;
    }
};
int main(){
collage ob[10];

for(int i=0 ; i<2; i++){
    char department[10];
    int sal,emps;
    cout<<"Enter department: ";
    cin>>department;
    cout<<"Enter salary: ";
    cin>>sal;
    cout<<"Enter employees: ";
    cin>>emps;
    ob[i].input(department,emps,sal);

}
collage::count_emp(ob,2);
collage::count_sal(ob,2);



}