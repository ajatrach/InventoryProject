#include <iostream>
#include <string>
#include "Product.h"
#include "Product.cpp"

int main() {
    Product paper_ream("Paper",000001,12.50,10);
    paper_ream.printInfo();
}
