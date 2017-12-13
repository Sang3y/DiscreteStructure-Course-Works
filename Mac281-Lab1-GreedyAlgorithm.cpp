#include <iostream>
using namespace std;
void MakeChange(int c[], int sizeR, int d[], int changeN)
{
	for(int i= 0; i<sizeR; i++)
	{
		d[i]=0;
		while(changeN>=c[i])
		{
			d[i] = d[i]+1;
			changeN= changeN-c[i];
		}
	}
}
void display(int d[],int sizeR, int c[])
{
	for(int i=0; i<sizeR; i++)
	{
		cout << "Amount of coins for value of " << c[i] << " is "<< d[i] << "\n";
	}
}

int main(){
	int sizeR, changeN;
	cout <<"Enter the size of currency Array: ";
	cin >> sizeR;
	
	int c[sizeR];
	int d[sizeR];
	cout <<"Enter the currency array value" << endl;
	cout << "{25,10,5,1} with size of 4 is recommended for USA" << endl;
	for(int i = 0; i<sizeR; i++)
	{
		cout << "c[" << i << "]=";
		cin >> c[i];
	}
	cout << "Now Enter the currency to break in to coins" << endl;
	cin >> changeN;
	MakeChange(c, sizeR, d,changeN);
	display(d,sizeR,c);
}
/*
Output
Enter the size of currency Array: 4
Enter the currency array value
{25,10,5,1} with size of 4 is recommended for USA
c[0]=25
c[1]=10
c[2]=5
c[3]=1
Now Enter the currency to break in to coins
66

Amount of coins for value of 25 is 2
Amount of coins for value of 10 is 1
Amount of coins for value of 5 is 1
Amount of coins for value of 1 is 1
--------------------------------
Process exited after 5.95 seconds with return value 0
Press any key to continue . . .
 */
