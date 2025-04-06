#include <iostream>
using namespace std;

int removeElement(int nums[], int size, int val) {
    int i;
    for (i=0;i < size;i++) {
        if (nums[i] == val) {
            nums[i] = nums[size - 1];
            size--;
        } 
    }
    if(nums[i] != val) {
            cout<<"Element not found"<<endl;
        }
    return size; 
}

int main() {
	int b;
	cout<<"Enter the size of the array:"<<endl;
    cin>>b;
    int nums[b];
    for(int a=0;a<b;a++){
    cout<<"Enter the elements of the array:";
    cin>>nums[a];
	}
    int size = sizeof(nums) / sizeof(nums[0]);
    int val;
    cout<<"Enter the value to be removed:"<<endl;
    cin>>val;

    int newSize = removeElement(nums, size, val);

    cout << "New size: " << newSize <<endl;
    cout << "Modified array: ";
    for (int i = 0; i < newSize; i++) {
    cout << nums[i] << " ";
    }
    return 0;
}
