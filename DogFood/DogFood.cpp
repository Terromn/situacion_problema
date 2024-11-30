#include "../Product/Product.h"  // Adjusted to reflect the relative path
#include "DogFood.h"
#include <iostream>

DogFood::DogFood(string id, string name, string description, double price, int stockLeft, string category, int kilos, string flavor)
    : Product(id, name, description, price, stockLeft, category), kilos(kilos), flavor(flavor) {}

int DogFood::getKilos() const { return kilos; }
void DogFood::setKilos(int kilos) { this->kilos = kilos; }

string DogFood::getFlavor() const { return flavor; }
void DogFood::setFlavor(const string &flavor) { this->flavor = flavor; }

void DogFood::displayProduct() const {
    cout << "Dog Food Product: " << name << endl;
    cout << "ID: " << id << ", Price: $" << price << ", Stock Left: " << stockLeft << endl;
    cout << "Description: " << description << ", Category: " << category << endl;
    cout << "Kilos: " << kilos << ", Flavor: " << flavor << endl;
}
