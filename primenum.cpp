#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number to check : ";
    int n;
    cin>>n;
    
    bool check = 1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {

            check = 0;
            break;
        }
    }
    if(check){
        cout<<"It is Prime";
    }
    else{
        cout<<"Not prime";
    }
}