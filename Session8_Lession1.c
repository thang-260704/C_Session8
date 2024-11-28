#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long a[] ={6,6,1,3,6,3,5,1,7,45,12};
int main(){
    for(int i=sizeof(a)/sizeof(a[0])-1;i>=0;i--){
        printf("%lld ",a[i]);
    }
}
