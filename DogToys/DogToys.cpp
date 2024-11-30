#include "../Product/Product.h"
#include "DogToys.h"
#include <iostream>

DogToys::DogToys(string id, string name, string description, double price, int stockLeft, string category, int material, string color)
    : Product(id, name, description, price, stockLeft, category), material(material), color(color) {}

int DogToys::getMaterial() const { return material; }
void DogToys::setMaterial(int material) { this->material = material; }

string DogToys::getColor() const { return color; }
void DogToys::setColor(const string &color) { this->color = color; }

void DogToys::displayProduct() const {
    cout << "Dog Toy Product: " << name << endl;
    cout << "ID: " << id << ", Price: $" << price << ", Stock Left: " << stockLeft << endl;
    cout << "Description: " << description << ", Category: " << category << endl;
    cout << "Material: " << material << ", Color: " << color << endl;
}
