#include <iostream>
using namespace std;
class clsMobile {


public:
	virtual void Dial(string phone) = 0;
	virtual void sendSms(string sms) = 0;

};

class samsungGalxy : public clsMobile {

public:
	virtual void Dial(string phone) {
		cout << "Samsung Phone number is : " << phone << "\n";
	}
	virtual void sendSms(string sms) {
		cout << "Samsung sms is : " << sms << "\n";
	}
};

class iphone : public clsMobile {

public:
	virtual void Dial(string phone) {
		cout << "Iphone Phone number is : " << phone << "\n";
	}
	virtual void sendSms(string sms) {
		cout << "Iphone sms is : " << sms << "\n";
	}
};

class redmi : public clsMobile {

public:

	virtual void Dial(string phone) {
		cout << "Redmi Phone number is : " << phone << "\n";
	}
	virtual void sendSms(string sms) {
		cout << "Redmi sms is : " << sms << "\n";
	}

};

int main()
{

	samsungGalxy samsung1;
	samsung1.Dial("0144458");
	samsung1.sendSms("note8");

	iphone iphone1;
	iphone1.Dial("011145798");
	iphone1.sendSms("iphone7");


	redmi redmi1;
	redmi1.Dial("012488888");
	redmi1.sendSms("last edition");
}