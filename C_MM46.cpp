#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    char op;
    int n,a1,a2,b1,b2;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>op>>a1>>a2>>b1>>b2;
        if(op=='+')
        cout<<a1+b1<<" "<<a2+b2<<"\n";
        else if(op=='-')
        cout<<a1-b1<<" "<<a2-b2<<"\n";
        else if(op=='*')
        cout<<a1*b1-a2*b2<<" "<<a1*b2+a2*b1<<"\n";
    }
    
	return 0;
}
