//
// Created by ajatr on 5/19/2022.
//

#include <iostream>
#include "Product.h"

Product::Product(){      //default constructor
    name="NA";
    id=0;
    price=0;
    quantity=0;
}

Product::Product(std::string n, int i, double p, int q){    //constructor w/specific values
    name= n;
    id= i;
    price = p;
    quantity = q;
}


std::string Product::getName() {   //value retrieving
    return name;
}
int Product::getId() {
    return id;
}
double Product::getPrice() {
    return price;
}
int Product::getQuantity() {
    return quantity;
}

void Product::printInfo() {        //print data
    std::cout << "Name: "
    <<name
    <<"ID: "
    <<id
    <<"Price: "
    <<price
    <<"Quantity: "
    <<quantity<<std::endl;
}