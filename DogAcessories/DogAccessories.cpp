#include "../Product/Product.h"
#include "DogAccessories.h"
#include <iostream>

DogAccessories::DogAccessories(string id, string name, string description, double price, int stockLeft, string category, int material, string size)
    : Product(id, name, description, price, stockLeft, category), material(material), size(size) {}

int DogAccessories::getMaterial() const { return material; }
void DogAccessories::setMaterial(int material) { this->material = material; }

string DogAccessories::getSize() const { return size; }
void DogAccessories::setSize(const string &size) { this->size = size; }

void DogAccessories::displayProduct() const {
    cout << "Dog Accessory Product: " << name << endl;
    cout << "ID: " << id << ", Price: $" << price << ", Stock Left: " << stockLeft << endl;
    cout << "Description: " << description << ", Category: " << category << endl;
    cout << "Material: " << material << ", Size: " << size << endl;
}
