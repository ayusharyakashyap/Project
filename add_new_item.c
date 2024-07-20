//add_new_item function

#include "utils.h"
#include <stdio.h>
#include <string.h>
struct item{                 //struct is used to group all the variables needed 
    int q;
    int price;
    char name[20];
    char mfg_date[10];
};
int add_new_item(){
     int count_items();
     int q;
     int price;
     char name[10];
     char check[10];
     char mfg_date[20];
     struct item new[1];
     printf("enter the name of the product:\n"); // Takes name of new item
     scanf("%s",name);
     FILE* ptr=fopen("item_names.txt","r"); //The name of the newly added item is stored is item_names.txt file
     while(fscanf(ptr,"%s",check)!=EOF){
       if(strcmp(check,name)==0){
        printf("item already exists\n"); // If the added item is already present , it prints this
        fclose(ptr);
        return 0;
       }
     }
     fclose(ptr);
     FILE* ptr1=fopen("item_names.txt","a");
     printf("Enter the manufacturing date of the product in dd/mm/yyyy format:\n");// Takes mfg date of new item
     scanf("%s",mfg_date);
     FILE*ptr2=fopen("item_dates.txt","a"); //The mfg date of newly added item is stored in item_dates.txt file
     printf("Enter the price of the product\n");
     scanf("%d",&price);
     while(price<0){
      printf("Enter a valid price:\n"); // Takes price of new item
      scanf("%d",&price);
     }
     FILE*ptr3=fopen("item_prices.txt","a");// The price of newly added item is stored in item_prices.txt file
     fprintf(ptr3,"%d ",count_items()+1); 
     fprintf(ptr3,"%d",price);
     fprintf(ptr3,"\n");
     fclose(ptr3);
     printf("Enter the quantity of the product:\n");// Takes quantity of new item
     scanf("%d",&q);
     while(q<0){
      printf("PLEASE ENTER A VALID QUANTITY:\n");
      scanf("%d",&q);
     }
     fprintf(ptr1,"%d ",count_items()+1);
     fprintf(ptr1,"%s",name);
     fprintf(ptr1,"\n");
     fclose(ptr1);
     fprintf(ptr2,"%d ",count_items()+1);
     fprintf(ptr2,"%s",mfg_date);
     fprintf(ptr2,"\n");
     fclose(ptr2);
     fprintf(ptr3,"%d ",count_items()+1);
     fprintf(ptr3,"%d",price);
     fprintf(ptr3,"\n");
     fclose(ptr3);
     FILE*ptr4=fopen("item_quantities.txt","a"); // The quantity is stored in item_quantities.txt file
     fprintf(ptr4,"%d ",count_items()); //The count function is here is used to count the number of added items
     fprintf(ptr4,"%d",q);
     fprintf(ptr4,"\n");
     fclose(ptr4);
     printf("ITEM ADDED SUCCESFULLY!!\n");
}
