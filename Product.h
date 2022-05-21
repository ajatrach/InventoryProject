//
// Created by ajatr on 5/19/2022.
//
#ifndef INVENTORYPROJECT_PRODUCT_H
#define INVENTORYPROJECT_PRODUCT_H
#include <string>


class Product {
private:
    std::string name;
    double price;
    int id;
    int quantity;

public:
    Product();    // empty constructor

    Product(std::string n, int i, double p, int q); //constructor w/specific values

    std::string getName();   //retrieve individual data
    double getPrice();
    int getId();
    int getQuantity();

    void printInfo();      //print all data
};


#endif //INVENTORYPROJECT_PRODUCT_H
