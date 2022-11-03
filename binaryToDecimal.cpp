#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n[]={1,0,1,1,0,1};
    int ans = 0;
    int decimalResult = 0;
    int a[10];
    int len = sizeof(n) / sizeof(int);
    while (len>=0)
    {
        decimalResult += n[len] * pow(2,len);
        len--;
    }
    cout<<endl<<decimalResult;
}