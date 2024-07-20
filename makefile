#This is a makefile for 9 source files
#Name of this file is makefile
#use make command to compile the files
#use ./myprog command to get the output

final:
	gcc count_items.c add_new_item.c print_all.c login.c update.c update_price.c delete_items.c mymain.c sleep.c -o myprog
