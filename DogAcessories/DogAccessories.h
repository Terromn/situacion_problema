#ifndef DOG_ACCESSORIES_H
#define DOG_ACCESSORIES_H

#include "../Product/Product.h"
#include <string>

class DogAccessories : public Product {
private:
    int material;
    std::string size;

public:
    DogAccessories(std::string id, std::string name, std::string description, double price, int stockLeft, std::string category, int material, std::string size);

    int getMaterial() const;
    void setMaterial(int material);

    std::string getSize() const;
    void setSize(const std::string &size);

    void displayProduct() const override;
};

#endif // DOG_ACCESSORIES_H
