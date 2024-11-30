#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
protected:
    string id;
    string name;
    string description;
    double price;
    int stockLeft;
    string category;

public:
    Product(string id, string name, string description, double price, int stockLeft, string category);
    virtual ~Product();

    string getId() const;
    void setId(const string &id);

    string getName() const;
    void setName(const string &name);

    string getDescription() const;
    void setDescription(const string &description);

    double getPrice() const;
    void setPrice(double price);

    int getStockLeft() const;
    void setStockLeft(int stockLeft);

    string getCategory() const;
    void setCategory(const string &category);

    virtual void displayProduct() const = 0;
};

#endif // PRODUCT_H
