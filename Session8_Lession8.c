#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long n,sum;
long long a[5][5]={
    {3, 4, 1, 6, 4},
    {5, 6, 1, 2, 6},
    {9, 7, 3, 0, 2},
    {7, 6, 3, 1, 5},
    {1, 4, 1, 7, 6}
};
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i+j==4){
                printf("%2lld ",a[i][j]);
                sum+=a[i][j];
            }
            else printf("   ");
        }
        printf("\n");
    }
    printf("Tong duong cheo phu: %lld",sum);
}
