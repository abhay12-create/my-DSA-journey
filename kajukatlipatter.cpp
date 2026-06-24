#include<iostream>
using namespace std;
int main(){
    int n,nd,s;
    cin>>n;
    nd=(n+1)/2;
    for(int r=1; r<=nd; r++){
        if(r==1){
            for(s=1; s<=nd-r; s++){
                cout<<" ";
            }
                cout<<"*";
            
        }
        else{
            for(s=1; s<=nd-r; s++){
                cout<<" ";}
                cout<<"*";
            
            for(s=1; s<=2*r-3; s++){
                cout<<" ";
            }
             
                cout<<"*";
        }
            cout<<endl;

    }
    for(int r=nd-1; r>=1; r--){
        if(r==1){
            for(s=1; s<=nd-r; s++){
                cout<<" ";
            }
                cout<<"*";
            
        }
        else{
            for(s=1; s<=nd-r; s++){
                cout<<" ";}
                cout<<"*";
            
            for(s=1; s<=2*r-3; s++){
                cout<<" ";
            }
             
                cout<<"*";
        }
            cout<<endl;
}
return 0;
}
