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
	if(!infile.is_open()){
		return 1;
	}

		while(infile){
			string line;
 			getline(infile, line, ':');// ':' means take all the information up to the : which we call limiter
 			int population;//int from the file
 		    infile>>population;//taking the integer values from the file
            infile.get();
            if(infile){
            	cout<<"The";
            }else{
            	break;
            }
			cout<<"'"<<line<<"'"<<"--'"<<population<<"'"<<endl;


		}
		infile.close();

	return 0;


};




