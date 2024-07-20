# STORE INVENTORY MANAGEMENT SYSTEM


# AIM: The main aim of this project is to provide a basic interface for managing the stocks , using c language. 

# DESCRIPTION:
>> The main features which this system offers are 
     *Adding new items to the inventory
     *Deleting an item from the inventory
     *Updating the quantity of an item 
     *Updating the price of an item
     *Showing the total number of items in the inventory
     *Showing the details of all the items in the inventory
   The user can access all these features using the option number and ID of each item in the inventory

>>For a particular item , the user can store the name of the item , its manufacture date , price and the quantity .
  Four different files have been used for each of these characteristics of an item.


* To login , login() function is used. This provides three attempts for the user to enter the right username and password.Otherwise the program exits 
  automatically.

* Once you successfully login , the user is provided with six options/features as mentioned above. The user can access each of these using the option number.

* For adding an item , add_new_item() function is used . Using this function , we can add name,price,date and qauntity to an item.
  four different files have been used for each of these.

* For deleting an item , delete_items() function is used .Using this function , we can remove all the characteristics of an item from all the four files
  using the ID of the item .

* For updating the quatity of an item , Update() function is used. Using this function , we can change the quantity of a particular item from that
  specific file (item_quantities.txt), using the ID of the item.

* For updating the price of an item , Update_price() function is used .Using this function , we can change the price of a particular item from that 
  specific file (item_prices.txt), using the ID of the item.

* For checking the total number of items in the inventory , count_items() function is used. This function increments or decrements the value of count,
  each time the user adds or deletes an item, in each file, thereby giving the value of total number of items in the inventory

* For showing the details of all the items present in the inventory , print_all() function is used . This function throws error if the file is empty.
  It prints each of the characteristics of all the items in the inventory.

* Finally , if the user wants to exit , 0 must be given as the input. For this , sleep() function is used . Which exits the program if 0 is the input.
