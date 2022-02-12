#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
            cout<<j;
            j=j+1;
        }
        int k=k-1;
        while(i<=n){
            int space=n-k;
            while(space){
                cout<<" ";
                space=space-1;
            }
            int l=1;
            while(l<=k){
                cout<<"*";
                l=l+1;
            }
        }
        cout<<endl;
        i=i+1;
    }
}