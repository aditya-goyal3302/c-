#include<iostream>
#include<math.h>
//#include<conio.h>

using namespace std;

class num{
    int n;
    public:
    void input(int x){
        n = x;
    }

    bool verifyPrime(){
        if (n <= 1)
            return false;
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
    return true;
    }

};

int main(){
    //char exit;
    num ob;
    int n1;
    cout<<"enter numbers: ";
    cin>> n1;
    ob.input(n1);
    if(ob.verifyPrime())
        cout<<n1<<" is Prime Number";
    else
        cout<<n1<<" is not Prime Number";

    //exit = getche();
    return 0;
}

