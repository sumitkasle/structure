#include<iostream>
using namespace std;


struct student 
{
	int rno;
	float per,lp;
	char name[20];	
    
void info()
     {
     	cout<<"enter your last year percentage"<<endl;
        cin>>lp;
		cout<<"last year you got :"<<lp<<endl;
		if(lp>80) 
		cout<<"congratulation";    	
	 }
void get()
     {
     	cout<<"enter your name,rno and per"<<endl;
     	cin>>name>>rno>>per;
     	cout<<name<<"  "<<rno<<"   "<<per<<endl;
     	
	 }
};


int main()
{
    student s1,s2;
    cout<<"welcome to our school"<<endl; 
    s1.info();
    s2.get();
	  return 0;
}

