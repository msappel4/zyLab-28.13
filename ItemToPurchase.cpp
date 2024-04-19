#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

ItemToPurchase::ItemToPurchase() {
   itemName = "none";
   itemPrice = 0;
   itemQuantity = 0;
}

ItemToPurchase::ItemToPurchase(string name; int price; int quantity){
   itemName = name;
   itemPrice = price;
   itemQuantity = quantity;
}
