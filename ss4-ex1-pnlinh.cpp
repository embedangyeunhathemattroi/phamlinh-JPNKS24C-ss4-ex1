#include<stdio.h>
 int main(){
    int n;
    printf("Kiem tra mot so nhap vao la am hay duong\n");
    printf("Nhap n (n<>0): ");
	scanf("%d",&n);
    if(n>0)
       printf("%d la so nguyen duong", n);
    else//n<0
       printf("%d la so nguyen am",n);
}
