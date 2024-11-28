#include <stdio.h>
#include <stdlib.h>
#include <string.h>
long long a[] ={6,6,1,3,6,3,5,1,7,45,12},n;
int main(){
    scanf("%lld",&n);
    for(int i=0;i<sizeof(a)/sizeof(a[0]);i++){
        if(a[i]==n){
            printf("Vi tri phan tu trong mang la %d",i+1);
            return 0;
        }
    }
    printf("Phan tu khong ton tai trong mang");
}
