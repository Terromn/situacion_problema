#include "AdminSystem.h"

void AdminSystem::addProductToCatalog(Product* product) {
    productCatalog.push_back(product);
}

void AdminSystem::deleteProductById(const std::string& productId) {
    for (auto it = productCatalog.begin(); it != productCatalog.end(); ++it) {
        if ((*it)->getId() == productId) {
            productCatalog.erase(it);
            break;
        }
    }
}

// AdminSystem.cpp
Product* AdminSystem::findProductById(const std::string& productId) {
    for (Product* product : productCatalog) {
        if (product->getId() == productId) {
            return product;
        }
    }
    return nullptr; // Return nullptr if product not found
}


std::vector<Product*> AdminSystem::getProductCatalog() const {
    return productCatalog;
}
