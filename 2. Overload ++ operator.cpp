#include<iostream>
using namespace std;
class Count{
	public:
		int i;
		Count(int x=0):i(x){}
		Count& operator++() {
			++i;
			return *this;
		}
		Count operator++(int){
			Count temp=*this;
			++i;
			return temp;
		}
		void display(){
			cout<<"i=" <<i<<endl;
		}
};
int main()
{
	Count count1(10);
	cout<<"Before increment : ";
	count1.display();
	Count count2= ++count1;
	cout<<"After prefix increment:\n";
	count1.display();
	count2.display();
	return 0;
}
