#include <iostream>
#include "AdminSystem/AdminSystem.h"
#include "UserSystem/UserSystem.h"
#include "Product/Product.h"
#include "DogFood/DogFood.h"
#include "DogToys/DogToys.h"
#include "DogAcessories/DogAccessories.h"

const std::string ADMIN_PASSWORD = "admin123";

int main() {
    AdminSystem adminSystem;
    UserSystem userSystem(adminSystem);

    int choice;
    while (true) {
        std::cout << "=== Main Menu ===" << std::endl;
        std::cout << "1. Admin" << std::endl;
        std::cout << "2. User" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Choose an option: ";
        std::cin >> choice;

        if (choice == 1) {
            std::string password;
            std::cout << "Enter password: ";
            std::cin >> password;

            if (password == ADMIN_PASSWORD) {
                int adminChoice;
                while (true) {
                    std::cout << "\n=== Admin Menu ===" << std::endl;
                    std::cout << "1. Add Product" << std::endl;
                    std::cout << "2. Delete Product" << std::endl;
                    std::cout << "3. Logout" << std::endl;
                    std::cout << "Choose an option: ";
                    std::cin >> adminChoice;

                    if (adminChoice == 1) {
                        int productChoice;
                        std::cout << "\n=== Add Product ===" << std::endl;
                        std::cout << "1. Dog Food" << std::endl;
                        std::cout << "2. Dog Toy" << std::endl;
                        std::cout << "3. Dog Accessory" << std::endl;
                        std::cout << "Choose product type: ";
                        std::cin >> productChoice;

                        std::string id, name, description, category;
                        double price;
                        int stockLeft;

                        std::cout << "Enter product ID: ";
                        std::cin >> id;
                        std::cout << "Enter product name: ";
                        std::cin >> name;
                        std::cout << "Enter product description: ";
                        std::cin >> description;
                        std::cout << "Enter product price: ";
                        std::cin >> price;
                        std::cout << "Enter stock left: ";
                        std::cin >> stockLeft;
                        std::cout << "Enter product category: ";
                        std::cin >> category;
                        std::cout << "Product Successfully Created\n";

                        if (productChoice == 1) {
                            DogFood* dogFood = new DogFood(id, name, description, price, stockLeft, category, 5, "Chicken");
                            adminSystem.addProductToCatalog(dogFood);
                        } else if (productChoice == 2) {
                            DogToys* dogToy = new DogToys(id, name, description, price, stockLeft, category, 1, "Red");
                            adminSystem.addProductToCatalog(dogToy);
                        } else if (productChoice == 3) {
                            DogAccessories* dogAccessory = new DogAccessories(id, name, description, price, stockLeft, category, 1, "M");
                            adminSystem.addProductToCatalog(dogAccessory);
                        }
                    } else if (adminChoice == 2) {
                        std::string idToDelete;
                        std::cout << "Enter product ID to delete: ";
                        std::cin >> idToDelete;
                        adminSystem.deleteProductById(idToDelete);
                    } else if (adminChoice == 3) {
                        break;  // Logout
                    }
                }
            } else {
                std::cout << "Invalid password, try again." << std::endl;
            }
        } else if (choice == 2) {
            bool userActive = true;
            while (userActive) {
                userSystem.viewCatalog();
                std::string selectedId;
                std::cout << "Enter product ID to purchase (or 0 to go back to main menu): ";
                std::cin >> selectedId;

                if (selectedId == "0") {
                    userActive = false;
                } else {
                    int quantity;
                    std::cout << "Enter quantity to buy (minimum 50): ";
                    std::cin >> quantity;

                    if (quantity >= 50) {
                        double totalPrice = userSystem.calculateTotalPrice(selectedId, quantity);
                        std::cout << "Purchased successfully! You will be charged: $" << totalPrice << std::endl;
                    } else {
                        std::cout << "Minimum quantity to buy is 50.\n";
                    }

                    int continueChoice;
                    std::cout << "Would you like to continue shopping?\n";
                    std::cout << "1. Yes\n2. No (Go back to Main Menu)\n";
                    std::cin >> continueChoice;
                    if (continueChoice == 2) {
                        userActive = false;
                    }
                }
            }
        } else if (choice == 3) {
            break;  // Exit
        }
    }

    return 0;
}
