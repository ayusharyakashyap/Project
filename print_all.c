//print_all function

#include "utils.h"
#include <stdio.h>
#include <string.h>
int print_all(){
    FILE* name_file=fopen("item_names.txt", "r"); //Opens name file
    FILE* price_file=fopen("item_prices.txt", "r");//Opens price file
    FILE* quantity_file=fopen("item_quantities.txt", "r");//Opens quantity file
    FILE* date_file=fopen("item_dates.txt", "r");//Opens date file
    if (name_file == NULL || price_file == NULL || quantity_file == NULL || date_file == NULL) {
        printf("Error opening file(s).\n"); //Prints error if the files are empty
        return 1;
    }
    char name[100];
    int price;
    int quantity;
    char date[20];
    while (fscanf(name_file, "%s", name) == 1 && fscanf(price_file, "%d", &price) == 1 &&
           fscanf(quantity_file, "%d", &quantity) == 1 && fscanf(date_file, "%s", date) == 1) { //Condition that files are not empty
           printf("ID: %s\n",name); //Prints ID of the item
           fscanf(name_file,"%s",name);fscanf(price_file, "%d", &price);fscanf(quantity_file, "%d", &quantity);fscanf(date_file, "%s", date);
           printf("Name: %s\nPrice: %d\nQuantity: %d\nDate: %s\n\n", name, price, quantity, date);//Prints all the characteristics of item
    }
    fclose(name_file); // closes name file
    fclose(price_file);//closes price file
    fclose(quantity_file);//closes quantity file
    fclose(date_file);//closes date file

    return 0;
}
