#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
		Person(string name,int age) : name(name),age(age){}
		friend ostream& operator<<(ostream& os,const Person& person){
			os<<"Name:"<<person.name<<",Age:"<<person.age;
			return os;
		}
};
int main()
{
	Person person("Alice",30);
	cout<<"Person details : "<<person<<endl;
	return 0;
}
