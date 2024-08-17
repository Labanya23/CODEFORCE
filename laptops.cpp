#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool c=false;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        if(a!=b){
            c=true;
        }
    }
    if(c==true){
        cout<<"Happy Alex"<<endl;
    }
    else{
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}
