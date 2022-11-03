#include<iostream>
#include<string>
using namespace std;
int main (){
    int n=23,i=0;
    int binaryofN[10];
    while (n!=0)
    {
        binaryofN[i]=n%2;
        n=n/2;
        i++;
    }
    while (i>=0)
    {
        cout<<binaryofN[i]<<endl;
        i--;
    }
    
    
}