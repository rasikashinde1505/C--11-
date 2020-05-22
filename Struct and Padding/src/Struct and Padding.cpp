//============================================================================
// Name        : Struct.cpp
// Author      : rasika shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#pragma pack(1)/*by packing the struct u will get the exact size of the struct
               because by using this the size of one word=1 byte for each byte so for each and every
               byte it considers a new word */

//structure stores data in words
struct person{ // diff betn 'struct' and 'class' is the functions
	           //or members inside of it is by default public
char name[50]; // 50 byte // we can't use string because string is a pointer datatype
// it does store the value directly thats why in struct we must use array of char
int age; // 4 byte
double salary;//8 byte
};
int main() {
	cout<<sizeof(person)<<endl;

	person p1;
	cout<<"enter the name of the person"<<endl;
	cin.getline(p1.name,100);
    cout<<"enter the age of the person"<<endl;
	cin>>p1.age;
	cout<<"enter the salary of the person"<<endl;
	cin>>p1.salary;

	cout<<"person details are as follows"<<endl;
	cout<<"name of the person : "<<p1.name<<endl;
	cout<<"age of the person : "<<p1.age<<endl;
	cout<<"salary of the person : "<<p1.salary<<endl;


	return 0;
}
