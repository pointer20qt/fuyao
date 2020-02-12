#include<iostream>
#include<vector>
using namespace std;
int main()
{ 
	vector<int>arr = { 1, 2, 3, 4, 5 };
	try{
		int arr2 = arr.at(20);
		cout << arr2 << endl;
	}catch (exception &e){
		cout << "out_of_range" << endl;
	}
}
