
#include <iostream>
using namespace std;

class clsPerson {
    
    string _name;
    class  clsAddress {

        string _addressLine1;
        string _addressLine2;
        string _city;
        string _country;

    public:
       // default constrctour
        clsAddress() {

            setAddressLine1("Building 11");
            setAddressLine2("ElHoda Street");
            setCity("Cairo");
            setCountry("Egypt");

        }

        //Parametrize Const
        clsAddress(string addressLine1, string addressLine2, string city, string country) {

             setAddressLine1(addressLine1);
             setAddressLine2(addressLine2);
             setCity(city);
             setCountry(country);

        }


        void setAddressLine1(string addressLine1) {
            _addressLine1 = addressLine1;
        }

        void setAddressLine2(string addressLine2) {
            _addressLine2 = addressLine2;
        }

        void setCity(string city) {
            _city = city;
        }

        void setCountry(string country) {
            _country = country;
        }

        string getAddressLine1() {
            return _addressLine1;
        }

        string getAddressLine2() {
            return _addressLine2;
        }

        string getCity() {
            return _city;
        }

        string getCountry() {
            return _country;
        }

        void printAddress() {
           
            cout << "Address Line 1 is : " << getAddressLine1() << "\n";
            cout << "Address Line 2 is : " << getAddressLine2() << "\n";
            cout << "City is : " << getCity() << "\n";
            cout << "Country is : " << getCountry() << "\n";
            cout << "-------------------------------\n\n";
        }
    };



public:

    void setName(string name) {
        _name = name;
    }

    string getName() {
        return _name;
    }

    //object from class address
    clsAddress address{ "Buildin20", "Elhoda street", "Cairo", "Egypt" };
    

    //defaul constructor
    clsPerson() {
        setName("Yomna Ahmed");

    }

    // parametrize constructor
    clsPerson(string name, string addressLine1, string addressLine2, string city, string country) {
        setName(name);
        address = clsAddress(addressLine1, addressLine2, city, country);
    }

    void printInfo() {
        cout << "Name is : " << getName() << "\n";
        address.printAddress();

    }

};

int main()
{
    clsPerson person1;
    person1.printInfo();

    clsPerson person2("Ali", "Building 20", "Elghelal Street", "Alxeandria", "Egypt");
    person2.printInfo();

    // here is some edit on info of person2
    cout << "Ali's Info after edit: \n\n";
    person2.address.setAddressLine1("Building 33");
    person2.address.setCity("Mansoura");
    person2.address.setAddressLine2("Elnour Street");
    person2.printInfo();
  
}

