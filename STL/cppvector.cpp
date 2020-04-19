#include<iostream>
#include<cstdlib>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int item;
	vector<int> input;
	vector<int>::iterator it;
	cin>>item;
	input.push_back(item);
	cin>>item;
	input.push_back(item);
	input.push_back(item + 20);
	for(it = input.begin();it < input.end();it++)
	{
	cout<<*it<<"  ";


	}
	
	

	return 0;




}
