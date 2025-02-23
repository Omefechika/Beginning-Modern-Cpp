#include <iostream>
#include <iomanip>
using namespace std;

class ProductionSlip
{
public:
    static const unsigned int productId{};
    static const unsigned int craftPersonId{};

    // Class productionslip accepts two arguments for initialization
    // the craft person's ID and the completed product number
    ProductionSlip(unsigned int craftPersonId, unsigned int productId)
        : _craftPersonNumber(craftPersonId), // craft-person's number
          _productNumber(productId)          // product number
    {
        // empty body
    };

    // each worker slip contains three arguments
    // function to set completed slip details
    void setSlipDetails(unsigned int craftPerson, unsigned int product)
    {
        _craftPersonNumber = craftPerson;
        _productNumber = product;
    }

    // function to retrieve user number
    int getCraftPerson() const
    {
        return _craftPersonNumber;
    }

    // function to retrieve product number
    int getProductNumber() const
    {
        return _productNumber;
    }

    
    // returns a summary of a craft persons item task
    void getProductSlip() const
    {
        cout << "Craft-person Number: " << getCraftPerson()
             << "\nProduct Number: " << getProductNumber()
             << endl;
    }

private:
    unsigned int _craftPersonNumber{0};
    unsigned int _productNumber{0};
};
