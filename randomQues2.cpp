#include <bits/stdc++.h>
#include<strings.h>
using namespace std;

 
// returns number of words in str
int countWords(string &str, int N)
{
    int count=0;
    for (int i = 0; i < N; i++) {
        if (str[i+1] < 'A' || str[i+1] > 'Z' && str[i+1] < 'a' || str[i+1] > 'z')
        {
            if (str[i]=='A' || str[i]=='a' ||
            str[i]=='E' || str[i]=='e' ||
            str[i]=='I' || str[i]=='i' ||
            str[i]=='O' || str[i]=='o' ||
            str[i]=='U' || str[i]=='u'){

                count++;
            }
        }
    }
    return count;
}
 
int main(void)
{
    string str = "One Two,three. ,quartu eye";
    int N = str.length();
    cout<<"No of words : "<<countWords(str,N);
    return 0;
}