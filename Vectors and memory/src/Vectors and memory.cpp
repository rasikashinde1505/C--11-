//============================================================================
// Name        : Struct.cpp
// Author      : rasika shinde
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<vector>
using namespace std;

int main(){
	//vector is an array which automatically resizes itself
	vector<int> numbers(0); // initially the vector is empty so it size =0 and capacity=0

	cout<<"size: " << numbers.size()<<endl;// size is number of elements in the vector. vectors internally works on arrays, so as the size of the vector
	//exceeds the capacity the capacity becomes double for example

	int capacity = numbers.capacity();//capacity is  number of elements of allocated memory or internal array of vector or
	//mostly the capacity of vector is greater or equal to the size of the vector
	cout<<"capacity : "<<capacity<<endl;

	numbers.push_back(1);//added 1
	cout<<"size: "<<numbers.size()<<endl;//size =1
	cout<<"capacity: "<<numbers.capacity()<<endl;//capacity=1

	numbers.push_back(1);//again added 1
		cout<<"size: "<<numbers.size()<<endl;//size =2
		cout<<"capacity: "<<numbers.capacity()<<endl;//capacity= 2

		numbers.push_back(1);//again added 1
			cout<<"size: "<<numbers.size()<<endl;//size= 3
			cout<<"capacity: "<<numbers.capacity()<<endl;//capacity= 4 because capacity mostly increases * 2 of the previous

			numbers.push_back(1);
				cout<<"size: "<<numbers.size()<<endl;//size = 4
				cout<<"capacity: "<<numbers.capacity()<<endl;//capacity = 4 remains same because we already had 1 place remaining to store the new element

				numbers.push_back(1);
					cout<<"size: "<<numbers.size()<<endl;//size = 5
					cout<<"capacity: "<<numbers.capacity()<<endl;//capacity= 8 it changes to previous*2=8 and same for the rest

	//loop through vector
	 cout<<"LOOP THROUGH VECTOR"<<endl;
	for(int i=0; i<1000; i++){
		if(numbers.capacity() != capacity){
			capacity = numbers.capacity();
			cout<<"capacity: "<<capacity<<endl;
		}
		numbers.push_back(i);
	}
	numbers.clear();// to clear the vector
	numbers.reserve(200);// to reserve the memory
	numbers.resize(100);//t resize the array
	cout<<"size: "<<numbers.size()<<endl;
	cout<<"capacity: "<<numbers.capacity()<<endl;
	return 0;
}
