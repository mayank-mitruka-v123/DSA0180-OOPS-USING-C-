#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
   Animal(string name, string species, int age) {
       this->name = name;
       this->species = species;
       this->age = age;
   }

   string getName() const {
       return name;
   }

   void setName(string name) {
       this->name = name;
   }

   string getSpecies() const {
       return species;
   }

   void setSpecies(string species) {
       this->species = species;
   }

   int getAge() const {
       return age;
   }

   void setAge(int age) {
       this->age = age;
   }

private:
   string name;
   string species;
   int age;
};

class Cat : public Animal {
public:
   Cat(string name, string species, int age, string color, string breed) : Animal(name, species, age) {
       this->color = color;
       this->breed = breed;
   }

   string getColor() const {
       return color;
   }

   void setColor(string color) {
       this->color = color;
   }

   string getBreed() const {
       return breed;
   }

   void setBreed(string breed) {
       this->breed = breed;
   }

private:
   string color;
   string breed;
};

class Dog : public Animal {
public:
   Dog(string name, string species, int age, double weight, string breed) : Animal(name, species, age) {
       this->weight = weight;
       this->breed = breed;
   }

   double getWeight() const {
       return weight;
   }

   void setWeight(double weight) {
       this->weight = weight;
   }

   string getBreed() const {
       return breed;
   }

   void setBreed(string breed) {
       this->breed = breed;
   }

private:
   double weight;
   string breed;
};

int main() {
   Cat cat("Whiskers", "Cat", 2, "Black", "Persian");
   Dog dog("Fido", "Dog", 4, 30.5, "Labrador");

   cout << "Cat Details:" << endl;
   cout << "Name: " << cat.getName() << endl;
   cout << "Species: " << cat.getSpecies() << endl;
   cout << "Age: " << cat.getAge() << endl;
   cout << "Color: " << cat.getColor() << endl;
   cout << "Breed: " << cat.getBreed() << endl;

   cout << "\nDog Details:" << endl;
   cout << "Name: " << dog.getName() << endl;
   cout << "Species: " << dog.getSpecies() << endl;
   cout << "Age: " << dog.getAge() << endl;
   cout << "Weight: " << dog.getWeight() << endl;
   cout << "Breed: " << dog.getBreed() << endl;

   return 0;
}

