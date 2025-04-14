#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of the arrays: ";
	cin>>size;
	int array1[size];
		cout<<"Enter " <<size <<" Elements of the first array: "<<endl;
	for(int i=0; i<size; i++){
	
		cin>>array1[i];
	}
	
	int array2[size];
	cout<<"Enter " <<size <<" Elements of the second array: "<<endl;
	for(int i=0; i<size; i++){
		cin>>array2[i];
	}
	int SumArray[size];
	for(int i=0; i<size; i++){
		SumArray[i]=array1[i]+array2[i];
		cout << "Index " << i+1 << ": " << SumArray[i] << endl;
	}
	return 0;
}
