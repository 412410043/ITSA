#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double a,b,sum=0;
    scanf("%lf %lf",&a,&b);

    if(a>=121){
        sum+=(a-120)*b*1.66f;
        sum+=b*2.33f*60;
    }

    else if(a>=61){
        sum+=(a-60)*b*1.33f;
        sum+=b*60;
    }

    else
    sum+=a*b;

    printf("%.1lf\n",sum);

	return 0;
}