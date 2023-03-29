#include<iostream>
#include<set>

using namespace std;

//Write function count() here.
int count(int data[], int N)
{
	set<int> setX;
	for (int i = 0; i < N; i++)
	{
		setX.insert(data[i]);
	}
	return setX.size();
}

