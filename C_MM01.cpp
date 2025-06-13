#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[]) {
    double u,l,h;
    cin>>u>>l>>h;

    cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<(u+l)*h/2<<"\n";

	return 0;
}
