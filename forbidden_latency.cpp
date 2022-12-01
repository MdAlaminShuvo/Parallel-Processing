#include<bits/stdc++.h>
using namespace std;

int arr[10][10];

int main(){

    //freopen("text.txt","r",stdin);
    //freopen("text2.txt","w",stdout);


    int i,j,k,l,n,m;
    cin>>m>>n;
    int ar[n+1]={0};
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            cin>>arr[i][j];
        }
    }
    for(i=1;i<=m;i++){
        for(j=1;j<=n;j++){
            if(arr[i][j]==1 && j!=1){
                for(k=j;k>=1;k--){
                    int s ;
                    s = arr[i][j]-arr[i][k];
                    if(s==0){
                        l = j-k;
                        ar[l] = 1;
                    }
                }
            }
        }
    }
    int maxl=0;
    cout<<"Forbidden Latency: ";
    for(i=1;i<=n;i++){

        if(ar[i]==1){
            cout<<i<<" ";
            maxl=i;
        }
    }
    cout<<endl;
    cout<<"Permissible Latency: ";
    for(i=1;i<=n;i++){
        if(ar[i]==0)
            cout<<i<<" ";
    }

    cout<<endl;
    cout<<"Collision Vector: ";
    for(i=maxl;i>=1;i--){
        cout<<ar[i]<<" ";
    }
    cout<<endl;


  /*1 0 0 0 0 1
    0 1 0 1 0 0
    0 0 1 0 0 0
    0 0 0 1 1 0*/
}
