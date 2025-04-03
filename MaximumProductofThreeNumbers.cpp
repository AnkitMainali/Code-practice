  #include<iostream>
  using namespace std;
  
  int main(){
         int array[3],multi;
        for(int i=0;i<3;i++){
        	cout<<"Enter three numbers"<<endl;
            cin>>array[i];
        }   
         multi= array[0]*array[1]*array[2];
        cout<< multi;
return 0;
}
