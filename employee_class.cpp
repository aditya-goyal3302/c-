#include<iostream>
#include<iomanip>   //used for setw()
#include<string.h>
using namespace std;

void line(){
        for(int i =0;i<80; i++)
            cout<<"_";
        cout<<endl;
}
class emp{
    public:
    char name[10],designation[10],phone[11],residence[15];
    int sal;
    
    static int count;    // for count of employee
    void get(){
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter designation: ";
        cin>>designation;
        cout<<"Enter Phone Number: ";
        cin>>phone;
        cout<<"Enter Residence: ";
        cin>>residence;
         cout<<"Enter Salary: ";
        cin>>sal;
    }
    static void  header(){
        system("cls");
        cout.setf(ios::left,ios::adjustfield);
        cout<<setw(9)<<"SNO" <<setw(14)<<"Name"<< setw(15)<<"Designation" << setw(14)<<"Residence"<<setw(12)<< "Salary"<<setw(16)<<"Phone";
        cout<<endl;
        line();
    }
    void display(int i){
        cout<<endl;
        cout.setf(ios::left,ios::adjustfield);
        //cout<<(count++)<<name<<designation<<residence<<sal<<phone;
        cout<<setw(9)<<i <<setw(14)<<name<< setw(15)<<designation << setw(14)<<residence<<setw(12)<<sal<<setw(16)<<phone;
        cout<<endl;
    }
};

int emp::count = 1;

int main(){
    emp ob[50];
    int size;
    cout<<"Enter Total No. OF Employees: ";
    cin>>size;
    for(int i=0; i<size; i++){
        ob[i].get();
        cout<<endl;
    }

    emp::header();

    for(int i=0; i<size; i++){
        ob[i].display(i+1);
    }
    
    for(int i =0; i< size; i++){
        char s[10];
        strcpy(s,ob[i].name);
        if(s[0] == 110|| s[0]==78){
            cout<<"Name starts with N:"<<endl;
            ob[i].display(i+1);
        }
    }
    for(int i =0; i< size; i++){
        if(!strcmp(ob[i].designation, "Manager")){
            cout<<"Designation Manager:"<<endl;
            ob[i].display(i+1);
            
        }
    }

    for(int i =0; i< size; i++){
        if(!strcmp(ob[i].residence, "CHD")){
            cout<<"City is Chandighar:"<<endl;
            ob[i].display(i+1);
        }
    }
    return 0;
}