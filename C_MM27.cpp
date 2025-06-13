#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    int a,b;
    cin>>a>>b;

    if(a>b){
        a=a^b;
        b=a^b;
        a=a^b;
    }

    cout<<(a+b)*(b-a+1)/2<<"\n";

	return 0;
}
