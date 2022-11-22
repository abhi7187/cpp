#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    long int a=5;
    long int y=0,i=0,j=0,m=0;
    while(a>0){
        int di=a%2;
        if(di==0){
            y=1*pow(10,i)+y;
        }
        else{
            y=0*pow(10,i)+y;
        }
        a=a/2;
        i++;
    }
    while(y>0){
        int d=y%10;
        m=m+d*pow(2,j);
        y=y/10;
        j++;
    }
    cout<<m;
    return 0;
}
