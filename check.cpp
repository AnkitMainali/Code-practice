#include<iostream>
#include<iomanip>
using namespace std;
void PrintPersonInformation();
class person{
	
	public:
		
	string name;
	string address;
	double number;
	 
	 
	void PrintPersonInformation(){
		cout<< "The name, address and number of the person is: "
		 << name << " " << address << " " << std::fixed << std::setprecision(0) << number << endl;
	}
	
};
int main(){
	person p;
	p.name = "Ram";
	p.address = "Dudhe";
	p.number = 9816075788;
	p.PrintPersonInformation();
	return 0;
}
