#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[10],i=0,j;
	
	int v, prod;
	cin >> v;
	if( v < 50)
	{
		for(j=0; j<10; j++)
		{
			if(j==0){
				 a[j]= 1 * v;
			}
			else{
				v= 2*v;
				a[j]= v;
			}
			
		}
	}
	for(int i = 0; i<10; i++)
	{
		cout << "N[" << i << "] = " <<a[i]  << endl;
	}
}