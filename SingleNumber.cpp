#include<iostream>
using namespace std;

/*int singleNumber(int size, int n[]){

	for(int i=0; i<size; i++){
		result ^=n[i];
	}
	return result;
}*/
int main(){
	const int MAXSIZE =100;
	int n;
	int num[MAXSIZE];
	
	cout<<"Enter the number of elements:"<<endl;
	cin>>n;
	
	cout<<"Enter "<<n<<" integers(all appear twice except one): ";
	for (int i = 0; i < n; i++) {
        cin >> num[i];
    }
	int result =0;
	for(int i=0; i<n; i++){
		result ^=num[i];
	}
	cout<<"The single number is:"<<result<<endl;
	return 0;
}
