#include<iostream>
using namespace std;
// Question
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1


int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){
        int column=1;
        while(column<=len-row+1){
            cout<<column;
            column++;
        }
        int star=2*(row-1);
        while (star)
        {
            cout<<"*";
            star--;
        }
        int col=1;
        while(col<=len-row+1){
          cout<<len-row-col+2;
          col++;
        }
        
        cout<<endl;
        row++;
    }

}