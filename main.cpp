// main.cpp
#include "DatabaseManager.h"
#include <iostream>

int main() {
    std::string dbPath = "inventory.db";
    DatabaseManager dbManager(dbPath);

    // Example usage
    std::cout << "Fashion Inventory Management System" << std::endl;
    // Implement CLI interactions here

    return 0;
}
