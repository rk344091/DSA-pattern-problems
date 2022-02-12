#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
      /*  int count=i;
        int j=1;
        while(j<=i){
            cout<<count;
            count=count+1;
            j=j+1;
        }*///or
        int j=1;
        while(j<=i){
            cout<<i+j-1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}