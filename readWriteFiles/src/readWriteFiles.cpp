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
	//creation and write to file
char arr[100];
cout<<"enter your name and age"<<endl;
cin.getline(arr,100);
string outfilename= "test.txt";

ofstream outfile(outfilename,ios::app);

//outfile.open(outfilename, ios::out);

outfile<<arr;
cout<<"file write operation performed successfully"<<endl;
outfile.close();
	return 0;


};




// how to create and read/write from the file
/*char arr[100];
	  cout<<"enter your name and age"<<endl;

	  cin.getline(arr, 100);//if we directly write to array it will not take anything after the space eg. rasika 24
	   // only rasika will be written in the array

	  //write to file
	  ofstream myFile( "xyz.text",ios::app);//creation of file and  write to the file (app will add the content to the file)

	  myFile<<arr;// store to file
	  myFile.close();

	  cout<<"file write operation performed successfully"<<endl;


	  // read from file
	  cout <<"read from file started"<<endl;

	  ifstream obj( "xyz.text");//read from the file

	  obj.getline(arr,100);
	  cout<<"array content :"<<endl;
	  cout <<"read from file successful"<<endl;

	  obj.close();
*/
