
#include <iostream>
using namespace std;

class clsPerson {
    struct stAddress {
        string _addressLine1;
        string _addressLine2;
        string _city;
        string _country;

    };
    string _name;
public:
    
    stAddress address;
    void setName(string name) {
        _name = name;

    }
    string getName() {
        return _name;
    }

    void setAddress(string addressLine1, string addressLine2, string city, string country) {

        address._addressLine1 = addressLine1;
        address._addressLine2 = addressLine2;
        address._city = city;
        address._country = country;
  
    }

    stAddress getAddress() {
        return address;
    }
    
    //defaul constructor
    clsPerson() {
        setName("Yomna Ahmed");
        setAddress("Building 11", "Malah Street", "Cairo", "Egypt");
    }

    // parametrize constructor
    clsPerson(string name, string addressLine1, string addressLine2, string city, string country) {
        setName(name);
        setAddress(addressLine1, addressLine2, city, country);
    }

    void printInfo() {
        cout << "Name is : " << getName() << "\n";
        cout << "Address Line 1 is : " << getAddress()._addressLine1<< "\n";
        cout << "Address Line 2 is : " << getAddress()._addressLine2<< "\n";
        cout << "City is : " << getAddress()._city<< "\n";
        cout << "Country is : " << getAddress()._country << "\n";
        cout << "-------------------------------\n\n";
    }

};

int main()
{
    
    clsPerson Person1;
    Person1.setAddress("Building 10", "Elghelal Street", "Cairo", "Egypt");
    Person1.setName("Aliaa");
    Person1.printInfo();

    clsPerson Person2("Ali", "Building 20", "Hia Street", "New Jersy", "United State");
    Person2.printInfo();
}

