#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a[4][6]={
    { 23, 12, 3,  -5, 23, 43},
    {-12, 90, 54,  4,  5, 55},
    {  3,  6, 78, 12,  3, 1},
    { 34, 88, -12,45, 11, 90}
};
long long max;
int main(){
    for(int i=0;i<4;i++)for(int j=0;j<6;j++)max=fmax(max,a[i][j]);
    printf("%lld",max);
}
