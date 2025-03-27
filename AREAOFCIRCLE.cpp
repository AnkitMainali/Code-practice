#include<iostream>
using namespace std;
int main()
{
	int radius;
	const float PI= 3.14;
	float area;
	
	cout << "Enter radius:" <<endl;
	cin >> radius;
	
	area= PI*radius*radius;
	//display
	cout<<"The area of the circle is:"<<area;
	
	
	return 0;
	
}
