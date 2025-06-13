#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[]) {
    int a,d[3]={0};
    cin>>a;

    while(a>=86400){
        a-=86400;
        ++d[0];
    }

    while(a>=3600){
        a-=3600;
        ++d[1];
    }

    while(a>=60){
        a-=60;
        ++d[2];
    }


    cout<<d[0]<<" days\n"<<d[1]<<" hours\n"<<d[2]<<" minutes\n"<<a<<" seconds\n";
	return 0;
}
