#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   int arr[3][3],i,j;
   int brr[3][3]={1};
   for(i=0;i<3;i++){
    for(j=0;j<3;j++)
        cin>>arr[i][j];
   }
   for(i=0;i<3;i++){
    int sum=0;
    for(j=0;j<3;j++){
        sum+=arr[i][j];
        if(i-1>=0){
            sum+=arr[i-1][j];
        }
        if(i+1<=2){
            sum+=arr[i+1][j];
        }
        if(j-1>=0){
            sum+=arr[i][j-1];
        }
        if(j=1<=2){
            sum+=arr[i][j+1];
        }
        if(sum%2==0){
            brr[i][j]=1;
        }
        else{
            brr[i][j]=0;
        }
        cout<<brr[i][j];
        sum=0;
    }
    cout<<endl;
   }
}
