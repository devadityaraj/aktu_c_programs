/*Example input of values 
Enter principal amount (p): 5000 ↲
Enter time in year (t): 2 
<Click Enter>
Enter rate in percent (r): 18
<Click enetr>
Simple Interest = 1800.000
Compound Interest = 1962.000
*/


#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	 float p, t, r, si, ci;
	 clrscr();
	 printf("Enter principal amount (p): ");
	 scanf("%f", &p);
	 printf("Enter time in year (t): ");
	 scanf("%f", &t);
	 printf("Enter rate in percent (r): ");
	 scanf("%f", &r);
	 
	 si = (p * t * r)/100.0;
	
	 ci = p * (pow(1+r/100, t) - 1);
	
	 printf("Simple Interest = %0.3f\n", si);
	 printf("Compound Interest = %0.3f", ci);
	 getch();
	 return(0);
} printf("Compound Interest = %0.3f", ci);
	 getch();
	 return(0);
}