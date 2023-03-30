#include <iostream>

#include<iostream>
using namespace std;

class multiarray{
    int s;
    int a[10][10];
    int b[10][10];
    int add[10][10];
    int mul[10][10]={0};
    public:
    void show(){
        cout<<"Addition Matrix:"<<endl;
        for(int i=0; i<s; i++){
            for(int j=0; j<s; j++){
                cout<<add[i][j]<<" ";
            }
            cout<<endl;
        }

        cout<<"Multipication Matrix:"<<endl;
        for(int i=0; i<s; i++){
            for(int j=0; j<s; j++){
               cout<<mul[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    void input(){
        cout<<"Enter size of Square Matrix(MAX:10): ";
        cin>>s;
        cout <<"Input matrix a: ";
        for(int i=0; i<s; i++){
            for(int j=0; j<s; j++){
                cin>>a[i][j];
            }
        }
        cout <<"Input matrix b: ";
        for(int i=0; i<s; i++){
            for(int j=0; j<s; j++){
                cin>>b[i][j];
            }
        }
    }
    void add_matrix(){
        for(int i=0; i<s; i++){
            for(int j=0; j<s; j++){
                add[i][j] = a[i][j] + b[i][j];
            }
        }
    }
    void mul_matrix(){
        for(int i=0; i<s; i++){
            for(int j=0; j<s; j++){
                //mul[i][j] = 0;
                for(int k=0; k<s; k++)
                    mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
};

int main(){
    multiarray ob1;
    ob1.input();
    ob1.add_matrix();
    ob1.mul_matrix();
    ob1.show();
}
