#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x,y,X,Y;
        cin>>n>>x>>y>>X>>Y;
        int a = min(x,n-x+1);
        int b = min(y,n-y+1);
        int c = min(X,n-X+1);
        int d = min(Y,n-Y+1);

        cout<<min(abs(x-X)+abs(y-Y),min(c,d)+min(a,b))<<endl;
        cout<<"this is created by Aryan "<<endl;
    }
}
