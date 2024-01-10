//ADITYA CHEAP BANKS LTD!!
#include <stdio.h>
#include <string.h>
//#include <conio.h>
void main() {
    char id[20];
    char password[20];
    char ID[20]= { 'a', 'd', 'i', 't', 'y', 'a', 'r', 'a', 'j'};
    char PASSWORD[20]= { 'a', 'd', 'i', 't', 'y', 'a', 'r', 'a', 'j'};
    //clrscr();
    printf("Welcome to ADITYA RAJ BANKS LIMTED!");
    printf("\n\nEnter your UserID: ");
    scanf("%s",&id);
    printf("\nEnter your Password: ");
    scanf("%s",&password);
    int value=strcmp(id,ID);  
   if(value==0)  {
   printf("login success!!");  
   //clrscr();
   printf("WELCOME: ");
   }
   else  {
   printf("Something Went Wrong"); 
   }
    
    

 
 
    
    
    
}
