#include "Product.h"

Product::Product(string id, string name, string description, double price, int stockLeft, string category)
    : id(id), name(name), description(description), price(price), stockLeft(stockLeft), category(category) {
}

Product::~Product() {
}

string Product::getId() const { return id; }
void Product::setId(const string &id) { this->id = id; }

string Product::getName() const { return name; }
void Product::setName(const string &name) { this->name = name; }

string Product::getDescription() const { return description; }
void Product::setDescription(const string &description) { this->description = description; }

double Product::getPrice() const { return price; }
void Product::setPrice(double price) { this->price = price; }

int Product::getStockLeft() const { return stockLeft; }
void Product::setStockLeft(int stockLeft) { this->stockLeft = stockLeft; }

string Product::getCategory() const { return category; }
void Product::setCategory(const string &category) { this->category = category; }
