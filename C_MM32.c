#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);

    if(n==(n/100)*(n/100)*(n/100)+(n%100/10)*(n%100/10)*(n%100/10)+(n%10)*(n%10)*(n%10))
    printf("Yes\n");
    else
    printf("No\n");
    
	return 0;
}