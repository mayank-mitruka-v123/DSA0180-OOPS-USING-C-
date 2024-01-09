#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
		Person(string name,int age) : name(name),age(age){}
		bool operator == (const Person& other) const{
			return name == other.name && age == other.age;
	}		
};
int main(){
	Person per1("Alice",30);
	Person per2("John",23);
	Person per3("Anto",30);
	if(per1==per2){
		cout<<"Person1 and Person2 are equal."<<endl;
	}
	if(per1==per3){
		cout<<"Person1 and Person3 are equal."<<endl;
	}
	else{
		cout<<"Person1 and Person3 are not equal"<<endl;
	}
	return 0;
}

