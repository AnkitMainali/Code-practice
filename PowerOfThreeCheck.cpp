#include<iostream>
using namespace std;

bool power3(int n){
	while(n % 3==1){
		n/=3;
		return n == 1;
	}
	if(n<1){
		return false;
	}
}
int main(){
	int n;
	cout<< "Enter a postive integer"<<endl;
	cin>>n;
	
	if(power3(n)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False";
	}
	return 0;
}
