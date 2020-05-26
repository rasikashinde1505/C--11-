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

int main() {
	//int myarray[5][5];//declartion
	//int myarray1[2][2]={1,2,3,4};//declaration with initialization
	//int myarray2[3][3] = { { 1, 1, 1 }, { 2, 2, 2 }, { 3, 3, 3 } };	//declaration with initialization
cout<<"2D arrays"<<endl;
	int A[3][3], B[3][3],c[3][3], addition[3][3], substraction[3][3];

	cout << "enter the values 1st matrix:" << endl;

	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			cin >> A[i][j];
		}
	}
	cout << "enter the values of 2nd matrix:" << endl;

	for (int i = 0; i <= 2; i++) {
		for (int j = 0; j <= 2; j++) {
			cin >> B[i][j];
		}
	}
// addition of matrix:
	for(int i=0;i<=2;i++)
	{
		for (int j = 0; j <= 2; j++) {
			addition[i][j] = A[i][j] + B[i][j];
		}
		//substraction of matrix
		for (int i = 0; i <= 2; i++) {
			for (int j = 0; j <= 2; j++) {
				substraction[i][j] = A[i][j] - B[i][j];
			}


			cout << "3*3 matrix addition" << endl;

			for (int i = 0; i <= 2; i++) {
				for (int j = 0; j <= 2; j++) {
					cout << addition[i][j] << " ";
				}
				cout<<endl;
			}
			cout << "3*3 matrix substraction" << endl;

			for (int i = 0; i <= 2; i++) {
				for (int j = 0; j <= 2; j++) {
					cout << substraction[i][j] <<" ";
				}
				cout << endl;
			}

cout<<endl;
cout<<"2D vectors "<<endl;
			//** 2D vectors**//

			vector< vector<int>  > matrix(3, vector<int>(4,7));// 3 is a rows of matrix and 4 is column in that rows
			// so we will get 3 rows and 4 columns in each row

			for(int row=0; row<matrix.size(); row++){ //matrix.size is rows size and
				for(int col=0; col<matrix[row].size(); col++){// matrix[row].size is columns in that rows
					cout<<matrix[row][col]<<flush;
				}
				cout<<endl;
			}



			return 0;

		}
}
}
