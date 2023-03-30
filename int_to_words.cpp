#include <iostream>

using namespace std;
void print(char a[]){
    int i=0;
    while(a[i] != '\0' ){
        cout<<a[i];
        i++;
    }
    cout<<" ";

}
int main()
{
    int n;
    char ones[10][8]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    char ten[9][10]={"Eleven","Twelve","Thirteen","Fourteen","Fiveteen","Sixteen","seventeen","Eightteen","Nineteen"};
    char tens[9][10]={"Ten","Twenty","Thirty","Fourty","Fivty","Sixty","Seventy","Eightty","Ninety"};
    char h[8] = "Hundred";
    for(int j=0;j<1000;j++){
        int te,tte,nn[3]={0},i=0;
    //cin>>j;
        if(j > 999 || j<0) return 0;
        cout<<j<<" = ";
        te=j;
        while(te != 0){
            tte = te%10;
            te/=10;
            nn[i]= tte;
            i++;
        }

        if(nn[2] > 0){
            print(ones[nn[2]]);
            //cout<<" ";
            print(h);

            //cout<<" ";
        }

        if(nn[1] == 1 && nn[0] != 0){
            print(ten[nn[0]-1]);
        }
        else if((nn[1] >= 2) || (nn[1]==1 && nn[0] == 0) ){
            print(tens[nn[1]-1]);
            //cout <<" ";
            if (nn[0] != 0)
                print(ones[nn[0]]);
        }
        else if(nn[1] <= 9 && nn[0] >= 0){
            print(ones[nn[0]]);
        }
        cout<<endl;
    }
    
    return 0;
}