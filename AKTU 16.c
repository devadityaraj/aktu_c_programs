#include <stdio.h> 
#include <conio.h>
void main()
{ 
int num,i,r,s;
clrscr();
printf("Enter the number: ");
scanf("%d",&num);
r=0;
for(i=num/2; i>1; i--) {
    s=num%i;
    if(s==0) {
        r=1;
    }
}
if(r==1){
    printf("%d is not a prime number",num);
}
else {
    printf("%d is a prime number",num);
}
    getch();
}
