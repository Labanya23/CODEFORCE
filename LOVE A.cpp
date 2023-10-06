#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[50];
    cin>>str;
    int i,l=strlen(str),c=0;
    for(i=0;i<l;i++)
        {

            if(str[i]=='a')c++;
        }
        if(c*2>l)
            cout<<l<<endl;
        else
        {
            int y=l-(c*2)+1;
            cout<<l-y<<"\n";
        }

    }
