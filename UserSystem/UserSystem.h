#ifndef USER_SYSTEM_H
#define USER_SYSTEM_H

#include <iostream>
#include <string>
#include "../AdminSystem/AdminSystem.h"

class UserSystem {
private:
    AdminSystem& adminSystem;

public:
    UserSystem(AdminSystem& admin);
    void viewCatalog();
    void viewProductDetails(const std::string& productId);
    void makePurchase(const std::string& productId);

    double calculateTotalPrice(const std::string &productId, int quantity);
};

#endif // USER_SYSTEM_H
