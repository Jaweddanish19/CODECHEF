#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int z,y,a,b,c;
        cin>>z>>y>>a>>b>>c;

        int n=z-y;
        int m=a+b+c;

        if (n>=m)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}