#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
 int t;
 cin>>t;
 while(t--)
    {
        ll r,b,d,a;
        cin>>r>>b>>d;

            a=(abs(r-b));
        if(r<b || a<=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
 }
