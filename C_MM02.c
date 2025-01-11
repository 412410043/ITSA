#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a,b;
    scanf("%lf %lf",&a,&b);

    double area;
    area=a*b/2;

    printf("%.1lf\n",area);
	return 0;
}