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

// template
/*template<typename T,int n>
class Array{
private:
	T m_array[n];
public:
	int GetSize() const {
		return n;
	}
};*/


int main() {

	vector<string> strings;

    strings.reserve(3);/// is used to reserve the memory

    //strings.push_back("gunjan"); //pus_back actually copies the constructed content to the vector
    // but we want to construct the content iiun the vector for which we use 'emplace_back'
    strings.emplace_back("gunjan");//emplace_back is used to avoid coping of data too vector
    //it directly construct the data in the vector
    strings.emplace_back("rakshu");
    strings.emplace_back("munna");


    cout<<strings[2]<<endl;
    cout<<strings[1]<<endl;
    cout<<strings[0]<<endl;

    cout<<strings.size()<<endl;

    //1.methods to loop through a vector
    for (int i; i<strings.size(); i++){
    	cout<<strings[i]<<endl;
    }
    //2. method using iterator begin and end
    for(vector<string>::iterator it= strings.begin(); it !=strings.end(); it++){
    	cout<<*it<<endl;
    }
    //3. method we can increment decrement it as we do in general for loop
    vector<string>::iterator it= strings.begin();
    it +=2;
    cout<<*it<<endl;

	return 0;
}
