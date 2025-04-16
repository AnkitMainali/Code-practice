#include<iostream>
using namespace std;

int main(){
	int s;
	cout<<"Enter size of the arrays: ";
	cin>>s;
	
	int array1[s],array2[s],array[s+s];
	cout<<"Enter the elements of the first array: "<<endl;
	for(int i=0; i<s; i++){
		cin>>array1[i];
		array[i]=array1[i];
		
	}
	cout<<"Enter the elements of the second array: "<<endl;
	for(int i=0; i<s; i++){
	cin>>array2[i];
	array[i+s]=array2[i];
	}
	for(int i=0; i<s+s;i++){
		cout<<array[i]<<"  ";
	}
	return 0;
}
