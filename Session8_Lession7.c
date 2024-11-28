#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long n,sum,a[1005][1005];
int main(){
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)scanf("%lld",&a[i][j]);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j){
                printf("%2lld ",a[i][j]);
                sum+=a[i][j];
            }
            else printf("   ");
        }
        printf("\n");
    }
    printf("Tong duong cheo chinh: %lld",sum);
}
