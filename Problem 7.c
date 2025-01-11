#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,a,max=0;
    scanf("%d",&n);

    for(int i=0;i<n;++i){
        scanf("%d",&a);
        if(max<a)
        max=a;
    }

    printf("%d\n",max);

	return 0;
}