//============================================================================
// Author      : Rasika Shinde
//============================================================================

#include <iostream>
#include <map>

using namespace std;

int main() {
	map<string, int> ages;

	ages["rasika"]=20;
	ages["gunjan"]=25;
	ages["rakshu"]=10;
	ages["mrunal"]=23;
	ages["mohit"]=21;

	ages["rasika"]=24;//updated value will be the final value in the map element

	cout<<ages["rasika"]<<endl;

	//how to find the element in the map using key
	if(ages.find("mrunal") != ages.end()){
		cout<<"found:"<<endl;
	}
	else{
		cout<<"not found"<<endl;
	}
	//creating of pair and the add it to map
	ages.insert(pair<string, int>("peter", 100));

	//iterate through map
	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		cout << it->first << ":" << it->second << endl;

	}

	cout<<"==============================="<<endl;

	for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++) {
		pair<string, int> age = *it; // if we have more than one map then it will make sure the type of the map
		cout << age.first << ":" << age.second << endl;
	}

//another way of iteration

	return 0;

}
