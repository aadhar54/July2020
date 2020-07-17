#include<iostream>
using namespace std;

int main(){

	int a[100];

	//0 ........99 
	a[0]=5;
	cout<<a[1]<<endl; 


	int b[5];
	for(int j=0;j<5;j++){
		cout<<"Enter "<<j<<" element"<<endl;
		cin>>b[j];  // User Input 
		cout<<b[j]<<endl;
	}

	return 0;
}