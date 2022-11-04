#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int N = 13;
    int L[N] = {1,2,3,4,5,6,7,7,5,4,5,4,3};
    int R = 6;
    /* cout<<"Enter total Customers: N "<<endl; */
    cin>>N;
    /* cout<<"Enter all "<<N<<" Elements"<<endl; */
    for (int i = 0; i < N; i++)
    {
        cin>>L[i];
    } 
    /* cout<<"entered"<<endl;
    cout<<"Now enter top X customers"<<endl; */
    cin>>R; 
    int k = 0;
    int arr[N]={NULL},freq[N]={NULL},i=0,j=0,count=1;
    bool unique=1;
    int limit=0;
    /* copy_n(L, 13, arr); */
    while (i<N)
    {
        count=1;
        for (j = 0; j < i; j++)
        {
            if (L[i]==arr[j])
            {
                unique=0;
            }
            
        }
        if (unique)
        {
            limit++;
            for (j = i+1; j < N; j++)
            {
                if (L[i]==L[j])
                {
                    count++;
                }
                freq[i]=count;
                arr[i]=L[i];
            }
        }
        
        i++;
            
    }

    for (int step = 0; step < N-1; step++) {
    for (int i = 0; i < N - step-1; i++) {

      if (freq[i] < freq[i + 1]) {
        int temp = freq[i];
        freq[i] = freq[i + 1];
        freq[i + 1] = temp;
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      }
      else if (freq[i]==freq[i+1])
       {
            if (arr[i] < arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                temp=freq[i];
                freq[i] = freq[i + 1];
                freq[i + 1] = temp;
                
                
            }
        }
    }
    
    }
    int a=0;
    while (a<R && a<limit)
    {
        cout<<arr[a]<<" : "<<freq[a]<<endl;
        a++;
    }
        
}