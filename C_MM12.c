#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d",&a);

    if(a*1000%238!=0)
    printf("%d\n",a*1000/238+1);
    else
    printf("%d\n",a*1000/238);

	return 0;
}