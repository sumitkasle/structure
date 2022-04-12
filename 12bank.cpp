#include<iostream>
using namespace std;


struct cus 
{
    int acno;
	float bal,b;
	char name[20];	
    
void info()
     {
     	cout<<"enter your acoount number"<<endl;
     	cin>>acno;
       
	    cout<<"enter your name & bank balance"<<endl;
     	cin>>name>>bal;
     
     }
     
void get()
    {
  if(bal<200)
  cout<<"name of customer having less bank balance"<<name<<endl;
   
  if(bal>1000)
 {
   b=bal+100;
  cout<<"customer name "<<name<<endl<<"incriment"<<b<<endl;
}
  
}
};


int main()
{
    cus s[10];
    int i;
    cout<<"welcome to our BANK WEBSITE"<<endl; 
    for(i=0;i<10;i++)
    {
	
	s[i].info();
    
    }
     for(i=0;i<10;i++)
    {
	

    s[i].get();
    
    }
	  return 0;
}

