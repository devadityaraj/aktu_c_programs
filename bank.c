//ADITYA CHEAP BANKS LTD!!
#include <stdio.h>
#include <string.h>
//#include <conio.h>
void main() {
    char id[20];
    char password[20];
    char ID[20]= { 'a', 'd', 'i', 't', 'y', 'a', 'r', 'a', 'j'};
    char PASSWORD[20]= { 'a', 'd', 'i', 't', 'y', 'a', 'r', 'a', 'j'};
    float balance = 1000;
    int choice;
    
    //clrscr();

    printf("Welcome to ADITYA RAJ BANKS LIMTED!");
    printf("\n\nEnter your UserID: ");
    scanf("%s",&id);
    printf("\nEnter your Password: ");
    scanf("%s",&password);
    int value=strcmp(id,ID);  
   if(value==0)  {
       int value=strcmp(password,PASSWORD);  
   if(value==0) {
   printf("\n\nLogin Success!!");
   do {
   printf("\n\nWelcome, MASTER Aditya Raj! \n\n1. Add Money \n2. Withdraw Money \n3. Check Balance \n4. Logout \n\nEnter Your Choice Sir: ");
   scanf("%d",&choice);
   switch(choice) {
       case 1:
       {
           float add_ammount;
           printf("Enter the ammount to be added: ");
           scanf("%f",&add_ammount);
           balance += add_ammount;
           printf("\n\n%0.2f is addedd to your account!",add_ammount);
           printf("\n\nTotal balance is: %0.2f",balance);
       }
     break;
     
     case 2:
     { 
         if(balance < 500) {
             printf("Not enough balance to withdraw\nPlease maintain 500 minimum balance\nYour balance is: %0.2f",balance);
         }
         else {
         float subtract_ammount;
           printf("Enter the ammount to withdraw: ");
           scanf("%f",&subtract_ammount);
           if(subtract_ammount > balance-500) {
               printf("\n\nPlease Maintain Your Minimum Balance (500) \nYour balance is %0.2f",balance);
           }
           else {
           balance -= subtract_ammount;
           printf("\n\n%0.2f is withdrawed from your account!\n\nRemaining balance: ",subtract_ammount,balance);
           printf("\n\nTotal balance is: %0.2f",balance);
           }
         }
     }
    break;
    
    case 3:
    {
        printf("Your Current Account Balance is: %0.2f",balance);
    }
    
    case 4:
    {
        printf("Logout Sucess");
    }
    
    default: {
        printf("Please Give Valid Choice");
    }
       
   }
   
   
   }  while(choice = 4);
} else {
    printf("Wrong User ID or Password \n\n");
    main();
}
} else  {
   printf("Wrong User ID or Password \n\n");
   main();
}

}

