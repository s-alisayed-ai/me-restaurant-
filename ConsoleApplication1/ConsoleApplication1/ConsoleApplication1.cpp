#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string name;
	int age;
	void display() {
		cout << "Name: " << name << ", Age: " << age << endl;
	}
};

int main() {
	int size;
	cout << "Enter number of people: ";
	cin >> size;
	// Dynamically creating an array of Person objects
	Person* people = new Person[size];
	// Input values
	for (int i = 0; i < size; ++i) {
		cout << "Enter name for person " << (i + 1) << ": ";
		cin >> (people + i)->name;
		cout << "Enter age for person " << (i + 1) << ": ";
		cin >> (people + i)->age;
	}
	// Display all people
	cout << "\nPeople Info:\n";
	for (int i = 0; i < size; ++i) {
		people[i].display();
	}
	// Free the memory
	delete[] people;
	return 0;
}