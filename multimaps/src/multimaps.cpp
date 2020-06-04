//============================================================================
// Author      : Rasika Shinde
//============================================================================

#include <iostream>
#include <map>
using namespace std;


int main()
{

	//same as maps but we can collect the values of same key e can do it by mapping the vectors also
    multimap<int, string> lookup;

    lookup.insert(make_pair(30,"rasika"));
    lookup.insert(make_pair(20,"gunjan"));
    lookup.insert(make_pair(15,"rakshu"));
    lookup.insert(make_pair(10,"shubham"));
    lookup.insert(make_pair(30,"sanu"));


     //iterations
    for (multimap<int,string>:: iterator it=lookup.begin();
    		it!=lookup.end(); it++){
    	cout<< it->first<< ":" << it->second<<endl;
    }
    cout<<endl;
    //we have paired multimap and by using the function equal_range we can find the same key elements easily
    pair<multimap<int,string>:: iterator, multimap<int, string>::iterator> its=lookup.equal_range(30);

    for (multimap<int,string>:: iterator it=its.first; it !=its.second; it++){
    	cout<< it->first<<":" << it->second<<endl;
    }


    return 0;
}



