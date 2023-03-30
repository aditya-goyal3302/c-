#include<iostream>
using namespace std;

class matrix{
    float mat[10][10];
    int r,c;
    public:
    void input(int d1,int d2){
        r=d1;
        c=d2;
        for(int i = 0; i<r; i++){
            for(int j =0; j<c; j++)
                cin>>mat[i][j];
            cout<<endl;
        }
    }
    void display(){
        for(int i = 0; i<r; i++){
            for(int j =0; j<c; j++)
                cout<<" "<<mat[i][j];
            cout<<endl;
        }
    }
    void digonal(){
        for(int i = r-1; i>=0; i--){
            for(int j =r-i-1; j<=r-i-1; j++)
                mat[i][j]=0;
        }
    }
};

int main(){
    matrix ob;
    int r,c;
    cout<<"Enter Rows & Colums for square matrix: ";
    cin>>r>>c;

    if(r != c)
        cout<<"Wrong input";
    else{
        ob.input(r,c);
        cout<<"Matrix before making digonals zero: "<<endl;
        ob.display();
        ob.digonal();
        cout<<"Matrix After making digonals zero: "<<endl;
        ob.display();
    }
    return 0;
}