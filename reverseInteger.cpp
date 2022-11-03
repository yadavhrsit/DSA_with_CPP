#include<iostream>
using namespace std;
int main(){
    int n=1234;
    int remainder=0,quotient=0,reverse=0;;
    for (int i = n; i%10 != 0;)
    {
        remainder = i%10;
        quotient = i/10;
        i = quotient;
        reverse = (reverse * 10) + remainder;
    }
    cout<<reverse;
}