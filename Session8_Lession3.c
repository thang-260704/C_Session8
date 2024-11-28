#include <stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
long long a[10005][10005],n;
int main()
{
  scanf("%lld",&n);
  for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)scanf("%lld",&a[i][j]);
  printf("\n");
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)printf("%lld ",a[i][j]);
    printf("\n");
  }
}
