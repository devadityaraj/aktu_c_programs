#include  <stdio.h>
#include  <conio.h>
void main()
{
    int s=0,i,j,a,b,h;
    printf("program to print the armstrong number from 1 to 100");
    for(i=100;i>0;i--)
    {
            h=i;
            if(i>9)
            {
                for(j=0;j<2;j++)
            {
                 b=i/10;
                 a=i%10;
                 i=b;
                 s=s+a*a;
            }
            if(h==s)
            {
               printf("\nnumber %d is armstrong number",h);
            }
            }
            else
            {
                for(j=0;j<1;j++)
                {
                    a=i%10;
                    s=s+a;
                }
                if(h==s)
                {
                    printf("\nnumber %d is armstrong number",h);
                }
            }
            s=0;
            i=h;
    }
    getch();
}
