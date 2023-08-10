#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i;
	for(i=0; i<10; i++)
	{
		cin >> a[i];
	}
	for (int j=0; j<10; j++)
	{
		if(a[j]>0)
			cout << "X["<< j <<"] = " <<a[j] << endl;
		else
			cout << "X["<< j <<"] = " << 1 << endl;
	}
	
}