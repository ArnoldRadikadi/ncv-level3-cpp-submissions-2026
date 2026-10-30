#include <iostream>
#include <string>
#include <cctype>
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
        productName = "Unknown Product";

    if (p >= 0.0)
        price = p;
    else
        price = 0.0;

    if (q >= 0)
        quantityInStock = q;
    else
        quantityInStock = 0;
}


string Product::getProductCode() { return productCode; }
string Product::getProductName() { return productName; }
double Product::getPrice() { return price; }
int Product::getQuantityInStock() { return quantityInStock; }


void GetProductData(Product &p)
{
    string code, name;
    double pVal;
    int qty;

    cout << "Enter Product Code: ";
    cin >> code;
    cout << "Enter Product Name: ";
    cin.ignore(); // Clear input buffer
    getline(cin, name);
    cout << "Enter Price: ";
    cin >> pVal;
    cout << "Enter Quantity in Stock: ";
    cin >> qty;

    p.setProduct(code, name, pVal, qty);
}


void DisplayProduct(Product p)
{
    cout << "Product Code: " << p.getProductCode() << endl;
    cout << "Product Name: " << p.getProductName() << endl;
    cout << "Price: R" << p.getPrice() << endl;
    cout << "Quantity in Stock: " << p.getQuantityInStock() << endl;
}


void prodCompare(Product p1, Product p2)
{
    string name1 = p1.getProductName();
    string name2 = p2.getProductName();

    if (!name1.empty() && !name2.empty())
    {
        char char1 = tolower(name1[0]);
        char char2 = tolower(name2[0]);

        if (char1 == char2)
        {
            cout << "Success: Both product names (" << name1 << " and " << name2
                 << ") start with the same character ('" << name1[0] << "')." << endl;
        }
        else
        {
            cout << "Notice: The two product names (" << name1 << " and " << name2
                 << ") do NOT start with the same character." << endl;
        }
    }
    else
    {
        cout << "Error: One or both product names are empty." << endl;
    }
}

int main()
{
    Product p1, p2;

    cout << "Enter Details for Product 1" << endl;
    GetProductData(p1);

    cout << "\nEnter Details for Product 2" << endl;
    GetProductData(p2);

    cout << "\nDisplaying Product 1 Details" << endl;
    DisplayProduct(p1);

    cout << "\nDisplaying Product 2 Details" << endl;
    DisplayProduct(p2);

    cout << "\nComparing Product Names" << endl;
    prodCompare(p1, p2);

    return 0;
}
