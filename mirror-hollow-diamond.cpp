#include<iostream>
using namespace std;
int main(){
    int n,nd,j;
    cin>>n;
    nd=(n+1)/2;
    for(int r=1; r<=nd; r++){
        if(r==1){
            for(int i=1; i<=n; i++){
                cout<<"*";
            }
        }
        else {
                for( j=1; j<=nd-r+1; j++){
                    cout<<"*";
                }
                for( j=1; j<=2*r-3; j++){
                    cout<<" ";
                }
                for(j=1; j<=nd-r+1; j++){
                    cout<<"*";
                }
            }
        cout<<endl;
    }
    for(int r=nd-1; r>=1; r--){
        if(r==1){
            for(int i=1; i<=n; i++){
                cout<<"*";
            }
        }
        else {
                for( j=1; j<=nd-r+1; j++){
                    cout<<"*";
                }
                for( j=1; j<=2*r-3; j++){
                    cout<<" ";
                }
                for(j=1; j<=nd-r+1; j++){
                    cout<<"*";
                }
            }
        cout<<endl;
    }
    return 0;
}
