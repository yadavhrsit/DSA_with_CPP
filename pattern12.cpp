#include<iostream>
using namespace std;



int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){
        int spaces=1;
        while (spaces<row)
        {
            cout<<" ";
            spaces++;
        }
        

        int column=1;
        while(column<=len-row+1){
            cout<<row;
            column++;
        }
        cout<<endl;
        row++;
    }

}