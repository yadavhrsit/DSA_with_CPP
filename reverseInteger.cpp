#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n=INT_MAX+10;
    int remainder=0,quotient=0,reverse=0;;
    
    for (int i = n; i%10 != 0;)
    {
        if (reverse > INT_MAX/10 || reverse < INT_MIN/10)
        {   
            cout<<"Out of Limit";
            break;
        }
        else
        {
            remainder = i%10;
            quotient = i/10;
            i = quotient;
            reverse = (reverse * 10) + remainder;
        }
        
        
    }
    cout<<reverse;
}