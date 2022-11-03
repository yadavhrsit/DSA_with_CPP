#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ans = 0;
    int i = 0;
    int a[10];
    while (n!=0)
    {
        a[i]=n%2;    
        n=n/2;
        i++;
    }
    cout<<"Answer is: "<<endl;
    for(i=i-1;i>=0;i--)    
    {    
    cout<<a[i];    
    }    
        
}