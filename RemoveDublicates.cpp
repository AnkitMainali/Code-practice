#include<iostream>
using namespace std;

int main(){
	int size,a;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	int num[size];
	cout<<"Enter the elements of the array"<<endl;
	for(int i=0; i<size;i++){
		cin>>num[i];
	}
	for(int i=0;i<size;i++){
		if(num[i]!= num[i-1]){
			num[i]= num[a];
			a++;
		}
	}
	  for (int i=0;i<a;i++) {
        cout << num[i] << " ";
    }
	return a;
}
