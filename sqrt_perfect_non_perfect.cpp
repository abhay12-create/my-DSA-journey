#include<iostream>
using namespace std;
int main(){
    int n, i; 
    cin>>n;
    float inc=1;
    float ans=0;
i=1;
while(i<=4){
    while(ans*ans<=n){
        ans=ans+inc;
    }
    ans=ans-inc;
    inc/=10;
    i++;
}
cout<<"ans;"<<ans<<endl;
return 0;
}
