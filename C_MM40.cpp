#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int a,sum=0;
    cin>>a;

    for(int i=1;i<=a;++i){
        sum+=i;
        if(i<a)
        cout<<i<<(" + ");
        else
        cout<<i<<(" = ");
    }

    cout<<sum<<"\n";
    
	return 0;
}
