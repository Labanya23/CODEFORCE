#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        //if(a>b){
            //swap(a,b);
        //}
        //if(a==1 || a%2!=0){
            //cout<<"No"<<endl;
        //}
        if(a==1 && b==1){
            cout<<"No"<<endl;
           // break;
        }
        else if((a%2==0)&&(a/2!=b)){
            cout<<"Yes"<<endl;
        }
         else if((b%2==0)&&(b/2!=a) )
        {
            cout<<"Yes"<<endl;
        }

       else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
