#include<iostream>
using namespace std;
int main(){
    int n,r;
    cin>>n;
    for(r=1; r<=n; r++){
        if(r==1){
            cout<<1;
        }
        else{
        for(int j=1; j<=r; j++){
            if(j==1 || j==r){
                cout<<r-1;
            }
            else{
                cout<<0;
             }   
           }
        }
cout << endl;
}
return 0;
}
