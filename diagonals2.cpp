#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,k;
    cin>>n>>k;
    int a=0;
    bool flag=false;
    while(k>0){
        a++;
        k-=n;
        if(flag){
            n--;
            flag=false;
            continue;
        }
        if(!flag){
            flag=true;
        }
    }
    cout<<a<<endl;
    return 0;
}
