#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        int x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        if(x1>x2){
            swap(x1,x2);
            swap(y1,y2);
        }
        if(y2<=y1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
