//Sangey Lama 
//Lab3-Base b Expansion 
 
#include<iostream>   
using namespace std;   
    
    
void Convert(int num, int base, int &i, int collect[])   
{   
     int &x = i;  
    int tempdiv=num;     
    while(tempdiv!=0)   
    {   
        collect[x] = tempdiv%base;   
        tempdiv = tempdiv/base;       
        x++;           
    }    
}   
   
void display(int collect[],int i,int base,int num)   
{   
 cout<<"The Base "<<base<<" of the integer "<< num <<" is: "; 
    for(int k=i-1; k>-1; k--)   
    {   
           
        if(collect[k]>9&&collect[k]<16)   
        {   
             if(collect[k]==10)   
            {   
                cout<<"A";   
            }   
            else if(collect[k]==11)   
            {    
                cout<<"B";   
            }   
            else if(collect[k]==12)   
            {   
                cout<<"C";   
            }   
            else if(collect[k]==13)   
            {   
                cout<<"D";   
            }   
            else if(collect[k]==14)   
            {        
                cout<<"E";           
            }   
            else if(collect[k]==15)   
            {    
                cout<<"F";   
            }   
        }   
        else  
        cout<< collect[k];   
    }   
}   
   
int main()   
{   
int base, num, i=0;    
int collect[100000];  
cout<<"Enter the Number: ";   
cin>>num;   
cout<<"Enter the base: ";   
cin>>base;   
   
Convert(num,base,i,collect);   
display(collect,i,base,num);  
}   
