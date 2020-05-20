//============================================================================
// Name        : BasicException.cpp
// Author      : rasika
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<stdexcept>
#include<fstream>

using namespace std;

int main(){

	string infilename ="test.txt";
	ifstream infile;
	infile.open(infilename);
	if(infile.is_open()){

		string line;
		while(infile){
			getline(infile, line);
			cout<<line<<endl;
		}
		infile.close();
	}else{
		cout<<"cannot open file: "<< infilename<<endl;

	}


	return 0;


};




