#include <iostream>

using namespace std;

class LucasNumber{
	public:
		long memory[10000];
        unsigned int lucas(unsigned int n)//Naive Lucas
	    {
		  	if(n==0) return 2;
		  	if(n==1) return 1;
		    unsigned long t1 = lucas(n-1);
		  	unsigned long t2 = lucas(n-2);
		  	return t1+t2;
		}	
		
		unsigned long smart_lucas(unsigned long n) //Smart Lucas
		{
			if(memory[n]!=-1) return memory[n];
			unsigned long l1 = smart_lucas(n-1);
			unsigned long l2 = smart_lucas(n-2);
			memory[n] = l1+l2;
			return memory[n];
		}
		
		
		long lucas2(long n)//Smart Lucas
		{
			//fill(begin(memory), end(memory), -1);
			memory[0]=2;
			memory[1]=1;
			return smart_lucas(n);
		}
};


int main()
{
	
	LucasNumber dynamic;
	unsigned int lucasnum;
	cout<<"Enter the Lucas number: ";
	cin>>lucasnum;
	
	for(int i =0; i<lucasnum; i++)
	{	 
	cout << dynamic.lucas(i)<<","; //Output for Naive Lucas
	//cout<<dynamic.lucas2(i)<<","; //output for Smart Lucas
    }
	
//	cout<<"It took "<<begin-end<<" milliseconds for Lucas of "<<lucasnum;	
}
