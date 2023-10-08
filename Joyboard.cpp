#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--)
    {
        int n,m,k,s;
        cin>>n>>m>>k;
        if(n%2==0){
            s=n*k-m*k;
            cout<<s/3<<endl;
        }
        else
        {
            cout<<s+1<<endl;
        }
    }
    return 0;
  }
