#include<stdio.h>
int main(){
    int rev=0,n,m;
printf("enter the number");
scanf("%d",&n);
while(n>0){
m=n%10;
rev=rev*10+m;
n=n/10;
}
printf("reverse is %d",rev);

return 0;
}              
