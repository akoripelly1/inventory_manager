// InventoryItem.h
#ifndef INVENTORYITEM_H
#define INVENTORYITEM_H

#include <string>

class InventoryItem {
public:
    int id;
    std::string name;
    int quantity;
    double price;

    InventoryItem(int id, std::string name, int quantity, double price) :
        id(id), name(std::move(name)), quantity(quantity), price(price) {}
};

#endif // INVENTORYITEM_H
