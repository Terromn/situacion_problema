#ifndef ADMIN_SYSTEM_H
#define ADMIN_SYSTEM_H

#include "../Product/Product.h"
#include "../DogFood/DogFood.h"
#include "../DogAcessories/DogAccessories.h"
#include "../DogToys/DogToys.h"
#include <vector>

class AdminSystem {
private:
    std::vector<Product*> productCatalog;

public:
    void addProductToCatalog(Product* product);
    void deleteProductById(const std::string& productId);

    Product *findProductById(const std::string &productId);

    std::vector<Product*> getProductCatalog() const;
};

#endif // ADMIN_SYSTEM_H
