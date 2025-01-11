#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d",&a);

    if(a>=100)
    a*=100*0.7f;
    else if(a>=30)
    a*=100*0.8f;
    else if(a>=10)
    a*=100*0.9f;
    else
    a*=100;

    printf("%d\n",a);

	return 0;
}