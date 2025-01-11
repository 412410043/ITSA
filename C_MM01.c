#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double u,l,h;
    scanf("%lf %lf %lf",&u,&l,&h);

    printf("Trapezoid area:%.1lf\n",(u+l)*h/2);

	return 0;
}