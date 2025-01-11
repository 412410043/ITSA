#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    double n;
    scanf("%lf",&n);
    n*=n*10;
    n=round(n);
    n/=10;

    printf("%.1lf\n",n);
    
	return 0;
}