//============================================================================
// Name        : hello.cpp
// Author      : rasika
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

class Animal {
private:
	string name;
	int number;

public:
//set name method
	void setName(string name) {
		this->name = name;
	}
	// speak method
	void speak() {
		cout << "my name is" << name << endl;
		cout << "my number is: " << number << endl;

	}
	void number1() {
		cout<< this->number;

	}
	Animal(int x){
		this->number=x;
	}
		Animal() { // constructor for first obj

		cout << "constructor created for obj 1" << endl;

	}
	Animal(const Animal &other) {
		this->name = "ajsjbxjabs";
		cout << "constructor for obj 2" << endl;
		cout << name << endl;
	}
	~Animal() {
		cout << "destructor called" << endl;

	}
};

//returning object from functions
Animal* createAnimal() { // it returns the value here which we call
	Animal *a = new Animal(); // object created(even if the name is too long like in gb or mg it will be stored at the memory location)
	/* why did we use 'new' here so making the pointer is nothing but using the memory from the stack(which is arrays of memory which we have in our RAM) and if we call this pointer again and again and again
	 the stack will overflow right!
	 so if we use 'new operator' for creating an object this memory locations are taken by the 'heap' so the advantage is that even
	 if we call the same pointer 1000 times it will be called as one time*/
	a->setName(" rasika shinde"); // set the name through object
	return a; // when it comes here it create one temporary obj to store the return value
			  // and  then it gives to animal again and the it goes to the new object 'frog'
}

int main() {
	Animal *frog = createAnimal();// created new pointer object to take data from function

	frog->speak();// called speak method (used '->' because '.' can not work with pointers because of high value
	delete frog; //de-allocating the memory of frog

	Animal animal2;
	animal2.number(5);

	Animal animal;
	animal.setName(" rasika");
	animal.speak();

	Animal animal1 = animal; // Animal animal1(animal) is also one way to copy the constructor
	animal1.setName(" gunjan");
	animal1.speak();

	const int nSTRING = 5;

	string texts[nSTRING] = { "rasika", "gunjan", "kadu", "rakshu", "shubham" }; // defined array
	string *pTexts = texts; // storing the string values of array in the pointer

	pTexts += 3; // this will print the 4rd position from the array because array starts from 0 i.e rakshu

	cout << *pTexts << endl;

	pTexts -= 3; // and this will take back 3 steps from the position of rakshu

	cout << *pTexts << endl;

	string *pEnd = &texts[nSTRING]; //storing address of the string array to pEnd
	pTexts = &texts[3]; // from where it should start to read the array
	cout << &texts[3] << endl;
	cout << pTexts << endl;
	cout << pEnd << endl;

	while (pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++; // incrementing
	}

	/*cout<<sizeof(texts)/sizeof(string)<< endl;//(to find the size of array)

	 for(int i=0;i<sizeof(texts)/sizeof(string); i++){
	 cout<<texts[i]<< " "<< flush<<endl;// printing the  array values in by one using loop
	 }

	 for(int i=0;i<sizeof(texts)/sizeof(string); i++, pTexts++){
	 cout<<*pTexts<< " "<< flush;
	 }
	 cout<<*pTexts<<endl;
	 pTexts++; */
	return 0;

}
