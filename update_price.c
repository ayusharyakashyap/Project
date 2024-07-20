//update_price function

#include "utils.h"
#include <stdio.h>
#include <string.h>
struct Product1 {
    int id;
    int price;
};
int update_prices(){
    int sno,new_price;
    FILE *file;
    char line[100];
    struct Product1 product;
    file = fopen("item_prices.txt", "r+");//Opens price file
    printf("Enter the ID of the product:");
    scanf("%d", &sno);//Takes in the ID of the item whose price should be changed
    while (fgets(line,100, file)!=NULL) {
        sscanf(line, "%d %d", &product.id,&product.price);
        if (product.id==sno) {
            printf("Enter the new price for product %d: ", sno);
            scanf("%d", &new_price);//Takes in the new price 
            fseek(file, -strlen(line), SEEK_CUR);
            sprintf(line, "%d %d\n", product.id,new_price);//Changes the price in the file
            fputs(line, file);
            printf("Price updated for product %d.\n", sno);
            break;
        }
    }
    fclose(file); //closes the price file
    return 0;
}

