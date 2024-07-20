//main function

#include<stdio.h>
#include "utils.h"
#include<stdlib.h>

int main(){
   int id;
   char s[50];
   char filename[4][20] = {"item_names.txt", "item_prices.txt", "item_dates.txt", "item_quantities.txt"};
   FILE* files[4];
   int i=0;
   if(login()==0){
      printf("TOO MANY LOGIN TRIES , CLOSING PROGRAM....\n");  //For login 
      return 0;
   }else{
      printf("OPENING STORE INVENTORY MANAGEMENT PROGRAM!\n");
      printf("\n");
   }
   while(1){
    printf("<<STORE INVENTORY MANAGEMENT SYSTEM>> \n");
    printf("1.ADD A NEW ITEM INTO THE INVENTORY\n");
    printf("\n");
    printf("2.DELETE AN ITEM FROM THE INVENTORY\n");         //Prints these after loging in
    printf("\n");
    printf("3.CHANGE THE PRICE OF AN ITEM\n");
    printf("\n");
    printf("4.GET THE TOTAL NUMBER OF ITEMS IN THE INVENTORY\n");
    printf("\n");
    printf("5.CHANGE STOCK OF AN ITEM\n");
    printf("\n");
    printf("6.GET DETAILS OF ALL ITEMS IN THE INVENTORY\n");
    printf("\n");
    printf("PRESS 0 TO EXIT THE APPLICATION\n");
    printf("\n");
    printf("\n");
    int opt;
    scanf("%d",&opt);        //Switch case,depending on input, different features can be accessed
    switch(opt){
        case 1:
           add_new_item();
           break;
        case 2:
           printf("ENTER THE ID TO BE DELETED: ");
           scanf("%s",s);
           delete_items(s);
           break;
        case 3:
           update_prices();
           break;   
        case 4:   
           printf("TOTAL ITEMS ARE : %d\n",count_items());
           break;
        case 5:
           update();
           break;
        case 6:
           print_all();
           break;   
        case 0:
           sleep();
           exit(0);
        default:
           printf("Please enter a valid option:\n");       
    }
   } 
}
