#include<iostream>
using namespace std;
class Complex{
	public:
		float real,imag;
		Complex(float r=0.0,float i=0.0) : real(r),imag(i){}
		Complex operator+(const Complex& other) const {
			return Complex(real + other.real,imag+other.imag);
		}
		void display() const{
		cout<<real<<"+"<<imag<<"i"<<endl;
		}
};
int main()
{
	Complex c1(5.0,3.0);
	Complex c2(1.5,1.0);
	Complex c3 = c1+c2;
	cout << "Sum of complex numbers : ";
	c3.display();
	return 0;
}
