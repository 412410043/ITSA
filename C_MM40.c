#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a,sum=0;
    scanf("%d",&a);

    for(int i=1;i<=a;++i){
        sum+=i;
        if(i<a)
        printf("%d + ",i);
        else
        printf("%d = ",i);
    }

    printf("%d\n",sum);
    
	return 0;
}