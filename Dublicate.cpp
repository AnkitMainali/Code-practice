#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size of an array:"<<endl;
	cin>>size, dublicate=0;
	int array[size];
	for(int a=0;a<size;a++){
		cout<<"Enter the elements of the array"<<endl;
		cin>>array[a];
	}
	
/*	for(int i=0;i<size-1;i++){
	
		if(array[i]==array[i+1]){
			cout<<"True";
		}
			else{
				cout<<"False";
			}
	*/
	

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                duplicate = 1;
                break;
            }
        }
    }

    if (duplicate) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
	return 0;
	}

