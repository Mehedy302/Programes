#include<iostream>
#include<set>
using namespace std;

int main()
{
	set<int> st;
	set<int>::iterator it;
	//insertion
	int item;

	cin>>item;
	st.insert(item);
	item = item + 20;

	st.insert(item);

	//finding
	cin>>item;
	it = st.find(item);
	cout<<*it;
	//erase
	st.erase(item);
	return 0;


}
