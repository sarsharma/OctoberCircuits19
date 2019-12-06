#include<stdio.h>

int main(){
    int n, k;
    int diff=0;
    scanf("%d %d", &n , &k);
    int flag=0, count=0, i,j;
    if(n==2&&k==2)
    printf("Yes");
    else if(n%2==0)
    printf("No");

    else
    {
        for(i=1; i<=(n/2)+1; i+=1)
        {   //printf("%d\t", i);
            if(flag==1){
            break;
            //printf("Break");
            }
            count=0;
            for(j=1; j<=n; j+=i){
                count++;
               // printf("%d", j);
            }
            //printf("\n");
            if(count==k){
                flag=1;
                diff=i;
                break;
            }
            }
        }
        if(flag==1){
            printf("Yes\n");
        for(j=1; j<=n; j+=diff){
            printf("%d", j);
        }
        }

    }

