#include<iostream>
using namespace std;
int main(){
    int n,no, flag,i;
    cin>>n;
    for(no=2; no<=n; no++){
        flag=1;
        for(i=2; i<=no-1; i++){
            if(no%i==0){
                flag=0;
                break;
            }
        }
            if(flag==1){
                cout << no << endl;
            }
        }
        return 0;
    }
