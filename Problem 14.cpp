#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int n;
    cin>>n;

    for(int i=1;i<=n;i+=2){
        if(i<=n-2)
        cout<<i<<" ";
        else
        cout<<i<<"\n";
    }

	return 0;
}
