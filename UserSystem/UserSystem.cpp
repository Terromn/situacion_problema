#include "UserSystem.h"

UserSystem::UserSystem(AdminSystem& admin) : adminSystem(admin) {}

void UserSystem::viewCatalog() {
    std::vector<Product*> catalog = adminSystem.getProductCatalog();

    if (catalog.empty()) {
        std::cout << "No products available in the catalog.\n";
        return;
    }

    std::cout << "\nProduct Catalog:\n";
    for (size_t i = 0; i < catalog.size(); ++i) {
        std::cout << (i + 1) << ". " << catalog[i]->getName() << std::endl;
    }

    int productChoice;
    std::cout << "\nEnter the number of the product you want to view details for: ";
    std::cin >> productChoice;

    if (productChoice > 0 && productChoice <= static_cast<int>(catalog.size())) {
        std::string selectedId = catalog[productChoice - 1]->getId();
        viewProductDetails(selectedId);
    } else {
        std::cout << "Invalid product selection.\n";
    }
}

void UserSystem::viewProductDetails(const std::string& productId) {
    std::vector<Product*> catalog = adminSystem.getProductCatalog();
    for (auto& product : catalog) {
        if (product->getId() == productId) {
            std::cout << "\nProduct Details:\n";
            std::cout << "ID: " << product->getId() << "\n";
            std::cout << "Name: " << product->getName() << "\n";
            std::cout << "Description: " << product->getDescription() << "\n";
            std::cout << "Price: $" << product->getPrice() << "\n";
            std::cout << "Stock Left: " << product->getStockLeft() << "\n";
            std::cout << "Category: " << product->getCategory() << "\n";
            break;
        }
    }
}

void UserSystem::makePurchase(const std::string& productId) {
    std::cout << "Purchase made for product ID: " << productId << std::endl;
}

// In UserSystem.cpp
double UserSystem::calculateTotalPrice(const std::string& productId, int quantity) {
    Product* product = adminSystem.findProductById(productId);
    if (product) {
        return product->getPrice() * quantity;
    }
    return 0.0;
}

