#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter num1 : ";
	cin>>a;
	cout<<"Enter num2 : ";
	cin>>b;
	
	cout<<"Division of two nums.\n"<<endl;
	try{
		if(b==0)
		{
			throw "Division by zero and negative integers is not possible.";
		}
		c=a/b;
		cout<<"Quotient = "<<c<<endl;
	}
	catch (const char* msg) {  // Catch the thrown exception
        cout << "Exception caught: " << msg << endl;
    }
	return 0;
}
