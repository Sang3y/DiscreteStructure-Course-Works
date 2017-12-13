#include <iostream>
using namespace std;
string Encryption(char a[], int length, int key)
{
	string b;
	for(int i = 0; i <length; i++)
	{
		char c = a[i]+key;
		if(((int)c)>90)
		{
			char b = 91-(int)a[i];
			c = 'A'+key-b;
		}
		else if((int)c == 32+key) //if space then c = space
		{
			c = ' ';
		}
			b = b+c; // assembling characters from loop
	}
	return b; // returns a bundle of char, strings
}
void Decryption(char a1[], int length, int key)
{
	cout << "\nDecryption: ";
	for(int i = 0; i <length; i++)
	{
		char c = a1[i]-key; //decreasing a1 by key for decryption
		
		if (a1[i]==' ') // if char is space, then output space for that char
		{
			cout << " ";
		}
		else if((int)c<65)
		{
			int b = ((int)a1[i])-64;
			c= 'Z'-key+b;
			cout << c;
		}
		else
		{
			cout << c;
		}
	}
}
int main()
{
	int key, i = 0;
	string input;
	cout <<"Enter the String: ";
	getline(cin, input);
	cout <<"Enter the Key: ";
	cin >> key;
	if(key>26)
	{
		key = key%26;	
	}
	// if key goes higher than 26, the keys begin from 0 again till 26, so if key is 52,twice revoluton of 1-26
	while(input[i])
	{
		input[i];
		if(islower(input[i]))
		{
			input[i]= toupper(input[i]);
		}
		i++;	
	}
	/////end of changing char to upper case
	int length = input.length(); //find length
	char a[length]; //length as size for char array a
	for(int i = 0; i<length; i++)
	{
		a[i] = input.at(i);
	}
	cout << endl;
	///end of placing input string as a character on char array a
	cout << "Encryption: " << Encryption(a,length,key); // display encryption from string return string
	string temp = Encryption(a,length,key); //assigning encryption string function to temp
	int length1 = temp.length(); // find the length of the encrypted string
	char a1[length1]; //placing the length for size of char array a1
	for(int i = 0; i<length1; i++)
	{
		a1[i] = temp.at(i);
	}
	///end of changing string to array of char
	Decryption(a1,length1,key); // display the decryption and passing a1 char arrat from encryption to d
}
/*
Output
Enter the String: abc xyz mon poy
Enter the Key: 5
Encryption: FGH CDE RTS UTD
Decryption: ABC XYZ MON POY
--------------------------------
Process exited after 35.54 seconds with return value 0
Press any key to continue . . .
*/
/*
Output
Enter the String: Professor Muller is Funny AbC xYz
Enter the Key: 500
Encryption: VXULKYYUX SARRKX OY LATTE GHI DEF
Decryption: PROFESSOR MULLER IS FUNNY ABC XYZ
--------------------------------
Process exited after 31.89 seconds with return value 0
Press any key to continue . . .
*/
 
