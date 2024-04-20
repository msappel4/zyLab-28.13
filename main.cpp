#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   
   string itemName;
   int itemPrice;
   int itemQuantity;
   
   cout << "Item 1" << endl;
   cout << "Enter the item name:" << endl;
   getline (cin, itemName);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity;
   cout << endl;
   ItemToPurchase item1 = ItemToPurchase(itemName, itemPrice, itemQuantity);
   
   cout << "Item 2" << endl;
   cout << "Enter the item name:" << endl;
   cin.ignore();
   getline (cin, itemName);
   cout << "Enter the item price:" << endl;
   cin >> itemPrice;
   cout << "Enter the item quantity:" << endl;
   cin >> itemQuantity;
   cout << endl;
   ItemToPurchase item2 = ItemToPurchase(itemName, itemPrice, itemQuantity);
   
   cout << "TOTAL COST" << endl;
   int item1cost = item1.GetQuantity()*item1.GetPrice();
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = " << "$" << item1cost << endl;
   int item2cost = item2.GetQuantity()*item2.GetPrice();
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = " << "$" << item2cost << endl;
   int totalcost = item1cost + item2cost;
   cout << endl;
   cout << "Total: $" << totalcost;
   cout << endl;
   
   return 0;
}
