#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 20

int main()
{
    int a[MAX], closestNum[3];
    int goal;
    int closest = 2147483647;
    int temp;
    for(int i=0; i<MAX; i++) scanf("%d",a+i);
    printf("Goal: ");
    scanf("%d",&goal);
    for(int i=0; i<MAX; i++){
        for(int j=i+1; j<MAX; j++){
            for(int k=j+1; k<MAX; k++){
                temp = *(a+i) + *(a+j) + *(a+k);
                //printf("i=%d j=%d k=%d\n",i,j,k);
                temp -= goal;
                temp = abs(temp);
                if (temp < closest){
                    closest = temp;
                    *closestNum = i; *(closestNum+1) = j; *(closestNum+2) = k;
                    if (closest == 0)i = j = k = MAX;
                }
            }
        }
    }
    printf("%d %d %d",*(a+*closestNum), *(a+*(closestNum+1)), *(a+*(closestNum+2)));
    return 0;
}
