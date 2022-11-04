#include<iostream>
#include<limits.h>
using namespace std;
bool isPowerOfTwo(int n){
    int ans = 1;
    while (ans<=INT_MAX/2)
    {
        if(ans==n){
            return true;
        }
        ans*=2;

    }
    
    return false;
    
}
int main(){
    int n;
    cout<<"Enter Your Number: ";
    cin>>n;
    cout<<isPowerOfTwo(n);
    return 0;
}