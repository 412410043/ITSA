#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i+=2){
        if(i<=n-2)
        printf("%d ",i);
        else
        printf("%d\n",i);
    }

	return 0;
}