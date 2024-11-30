#ifndef DOGTOYS_H
#define DOGTOYS_H

#include "../Product/Product.h"
#include <string>
using namespace std;

class DogToys : public Product {
private:
    int material;
    string color;

public:
    DogToys(string id, string name, string description, double price, int stockLeft, string category, int material, string color);

    int getMaterial() const;
    void setMaterial(int material);

    string getColor() const;
    void setColor(const string &color);

    void displayProduct() const override;
};

#endif // DOGTOYS_H
