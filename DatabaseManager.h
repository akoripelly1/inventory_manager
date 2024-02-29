// DatabaseManager.h
#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <sqlite3.h>
#include <string>
#include <vector>
#include "InventoryItem.h"

class DatabaseManager {
private:
    sqlite3* db;
public:
    DatabaseManager(const std::string& dbPath);
    ~DatabaseManager();

    bool addItem(const InventoryItem& item);
    bool deleteItem(int id);
    std::vector<InventoryItem> getAllItems();
};

#endif // DATABASEMANAGER_H
