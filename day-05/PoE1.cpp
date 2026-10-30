#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string productCode;
    string productName;
    double price;
    int quantityInStock;

public:
    Product();
    void setProduct(string code, string name, double p, int q);
    string getProductCode();
    string getProductName();
    double getPrice();
    int getQuantityInStock();
};


Product::Product()
{
    productCode = "";
    productName = "";
    price = 0.0;
    quantityInStock = 0;
}


void Product::setProduct(string code, string name, double p, int q)
{
    productCode = code;


    if (name != "")
        productName = name;
    else
        productName = "Product name cannot be an empty string";

    // To prevent price from being a negative number
    if (p >= 0.0)
        price = p;
    else
        price = 0.0;

    // To prevent quantity in stock from being a negative number
    if (q >= 0)
        quantityInStock = q;
    else
        quantityInStock = 0;
}


string Product::getProductCode() { return productCode; }
string Product::getProductName() { return productName; }
double Product::getPrice() { return price; }
int Product::getQuantityInStock() { return quantityInStock; }

int main()
{

    Product p1;

    p1.setProduct("P101", "Bread", 29.99, 10);


    cout << "Product Code: " << p1.getProductCode() << endl;
    cout << "Product Name: " << p1.getProductName() << endl;
    cout << "Price: R" << p1.getPrice() << endl;
    cout << "Quantity in Stock: " << p1.getQuantityInStock() << endl;

    cout << "\n" << endl;


    Product p2;

    p2.setProduct("P102", "Milk", 45.50, 15);

    cout << "Product Code: " << p2.getProductCode() << endl;
    cout << "Product Name: " << p2.getProductName() << endl;
    cout << "Price: R" << p2.getPrice() << endl;
    cout << "Quantity in Stock: " << p2.getQuantityInStock() << endl;

    cout << "\n" << endl;

    return 0;
}
