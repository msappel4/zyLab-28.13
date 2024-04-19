#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

//constructor
//ItemToPurchase (string itemName, int itemPrice, int itemQuantity);
   void ItemToPurchase::SetName(string itemName){
      this->itemName = itemName;
   }
   string ItemToPurchase::GetName(){
      return itemName;
   }
   void ItemToPurchase::SetPrice(int itemPrice){
      this->itemPrice = itemPrice;
   }
   int ItemToPurchase::GetPrice(){
      return itemPrice;
   }
   void ItemToPurchase::SetQuantity(int itemQuantity){
      this->itemQuantity = itemQuantity;
   }
   int ItemToPurchase::GetQuantity(){
      return itemQuantity;
   }
