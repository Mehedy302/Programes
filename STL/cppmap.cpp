#include<iostream>
#include<map>
#include<cstdlib>
#include<string>
using namespace std;

int main()
{
map<int,string> attendence;
map<int,string>::iterator iter;

attendence.insert(pair<int,string>(1,"Mehdy Hasan"));
attendence[2] = "Mofajjol Hosen";
cout<<attendence.at(1);
cout<<attendence.find(2)->second;



return 0; 






}

