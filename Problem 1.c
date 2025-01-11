#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a;
    scanf("%d",&a);

    if(a>0)
    printf("正數\n");
    else if(a<0)
    printf("負數\n");
    else
    printf("0\n");
    
	return 0;
}