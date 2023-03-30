#include<iostream>
#include<string.h>
using namespace std;

class str{
    char *fn;
    int fns;
    public:
    str() {}
    str (char *ptr)
    {
        fns = strlen(ptr);
        fn = new char[fns + 1];
        fn = strcpy(fn,ptr);
    }
    char* operator + (str p1){
        int size = strlen(fn)+ strlen(p1.fn)+1;
        char *temp;
        temp = new char[size];
        strcpy(temp,fn);
        strcat(temp,p1.fn);
        return temp;
    }

    str operator +(char strn[15]){
        str temp;
        int i=0;
            for(int j=0; fn[j] != '\0'; j++,i++){
                temp.fn[i] = fn[j];
            }
            temp.fn[i] = ' ';
            i++;
            for(int j=0; strn[j] != '\0'; j++,i++){
                temp.fn[i] = strn[j];
            }       
        return temp;
    }  
    bool operator == (str p1){
        if (!strcmp(fn , p1.fn))
            return true;
        return false;
    }
};


int main(){

    char a[10] = "Aditya " , b[10] = "goyal";
    str o1(a), o2(b);
    char *k;
    k = (o1 + o2);
    cout<<k<<endl;

    if(o1 == o2)
        cout<<"They Are Equals";
    else
        cout<<"They Are Not Equal";

    return 0;
}