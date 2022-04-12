#include<iostream>
using namespace std;


struct emp 
{
	int id,sal;
	char name[20],no[10],city[10];	
    
void info()
     {
     	cout<<"enter your id,name,city,sal,no"<<endl;
     	cin>>id>>name>>city>>sal>>no;
     
     }
     
void post()
    {
	if(sal>25000)
	cout<<"your post is manager"<<endl;
  
    if(25000>sal>15000)
	cout<<"your post is developer"<<endl;

	 if(sal<15000)
	cout<<"your post is worker"<<endl;

	 }     

};


int main()
{
    emp e[5];
    int i;
    cout<<"welcome to our EMPLOYEE WEBSITE"<<endl; 
    for(i=0;i<5;i++)
    {
	
	e[i].info();
    e[i].post();
    
}
	  return 0;
}

