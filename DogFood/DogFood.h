#ifndef DOGFOOD_H
#define DOGFOOD_H

#include "../Product/Product.h"  // Adjusted to reflect the relative path
#include <string>
using namespace std;

class DogFood : public Product {
private:
    int kilos;
    string flavor;

public:
    DogFood(string id, string name, string description, double price, int stockLeft, string category, int kilos, string flavor);

    int getKilos() const;
    void setKilos(int kilos);

    string getFlavor() const;
    void setFlavor(const string &flavor);

    void displayProduct() const override;
};

#endif // DOGFOOD_H
