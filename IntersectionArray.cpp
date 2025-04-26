#include<iostream>
using namespace std;
bool exists(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}
int main(){
	int size1,size2,size=0;
	cout<<"Enter the size of the first array: ";
	cin>>size1;
	cout<<"Enter the size of the second array: ";
	cin>>size2;
	int array1[size1];
		cout<<"Enter " <<size1 <<" Elements of the first array: "<<endl;
	for(int i=0; i<size1; i++){
	
		cin>>array1[i];
	}
	
	int array2[size2],result[1000];
	cout<<"Enter " <<size2 <<" Elements of the second array: "<<endl;
		for(int i=0; i<size2; i++){
		cin>>array2[i];
	}
	for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
	       if (array1[i] == array2[j]) {
                if (!exists(result, size, array1[i])) {
                    result[size++] = array1[i];
                }
			}
				}
			}

    for (int i = 0; i < size; i++) {
        cout << result[i] << " ";
    }
	return 0;
}
