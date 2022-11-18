#include<iostream>
#include<string>
using namespace std;

class Stack{
    private:
    int top;
    int arr[5];

    public:
    Stack(){
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i]=0;
        }
    }

    int fill(void){
        cout<<"Enter 5 Values "<<endl;
        for (int i = 0; i < 5; i++)
        {
            cin>>arr[i];
            cout<<" ";
        }
        cout<<endl<<"All 5 values Entered"<<endl;
        
    }

    int change(void){
        cout<<"Enter The Element You want to Change"<<endl;
        int val;
        cin>>val;
        int pos;
        cout<<"Change at : "<<pos;
        if (arr[pos]>0 || pos>4)
            arr[pos]=val;
        else
            cout<<"Invalid Position";
    }

    int push(void){
        if (top==4)
        {
            cout<<"Stack Overflow";
        }
        else
        {
        cout<<"Enter The Value "<<endl;
        int val;
        cin>>val;
        top++;
        arr[top]=val;
        }
    }

    int pop(void){
        if (top==-1)
        {
            cout<<"Stack Underflow";
        }
        else
        {
        arr[top]=0;
        top--;
        }
    }

    int isEmpty(void){
        //cout<<"Its "<<(top==-1)?"Empty":"Not Empty";
        (top == -1 ? cout<<"Empty" :cout<<"Not Empty");

    }

    int isFull(void){
        //cout<<"Its "<<(top==4)?"Full":"Not Full";
        (top == 4 ? cout<<"Full" :cout<<"Not Full");
    }

    int Peek(void){
        cout<<"Peek at: ";
        int pos;
        cin>>pos;
        (arr[pos]!=0 ? cout<<arr[pos] :cout<<"Invalid Position");
    }

    int Count(void){
        cout<<top+1;
    }

    int Display(void){
        for (int i = 0; i < top; i++)
        {
            cout<<arr[i];
        }
    }


};

int main(){
    
}