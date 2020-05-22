//============================================================================
// Name        : Struct.cpp
// Author      : rasika shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<fstream>
using namespace std;
#pragma pack(push,1)

//structure stores data in words
struct Person{
char name[50]; //50 bytes
int age; // 4 bytes
double salary;//8 bytes
};
#pragma pack(pop)

int main() {
	Person someone1={"rasika shinde",  24, 500};
	Person someone2={"gunjan kadu",  25, 200};

	string fileName= "test.bin";

	//==write binary file==//
	ofstream outputFile; //writing to file

	outputFile.open(fileName, ios::binary);

	if(outputFile.is_open()){
//I found this one is easy
     outputFile.write((char *)(&someone1), sizeof(Person));
     outputFile.write((char *)(&someone2), sizeof(Person));
//new method of casting
		//inputFile.write(reinterpret_cast<char *>(&someone1), sizeof(Person));
       //inputFile.write(reinterpret_cast<char *>(&someone2), sizeof(Person));

     outputFile.close();

	}else{
		cout<<"could not open the file: "<<fileName;
	}

	//==read binary file==//
	Person someoneElse1={};
	Person someoneElse2={};

	ifstream inputFile;//reading from file

	inputFile.open(fileName, ios::binary);

		if(inputFile.is_open()){

			/*why we used char* here because to read and write the file we need to supply pointer datatype but
			as we can see the someoneElse is of type person which is not pointer type so we need to use casting here
			that is why we casted the someoneElse with (char*) */

//I found this one easy
			//inputFile.read((char *)(&someoneElse1), sizeof(Person));
			//inputFile.read((char *)(&someoneElse2), sizeof(Person));

			//this one of the another method of casting
			inputFile.read(reinterpret_cast<char *>(&someoneElse1), sizeof(Person));
			inputFile.read(reinterpret_cast<char *>(&someoneElse2), sizeof(Person));


			inputFile.close();

		}else{
			cout<<"could not read the file: "<<fileName;
		}

		cout<<someoneElse1.name<<","<<someoneElse1.age<<","<<someoneElse1.salary<<endl;
		cout<<someoneElse2.name<<","<<someoneElse2.age<<","<<someoneElse2.salary<<endl;


	return 0;
}
