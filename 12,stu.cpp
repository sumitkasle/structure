#include<iostream>
using namespace std;


struct student 
{
    int rno;
	float per,phy,che,math,bio,com;
	char name[20];	
    
void info()
     {
     	cout<<"enter your rno,name"<<endl;
     	cin>>rno>>name;
       
	    cout<<"enter your subject marks physics,chemistry,math,biology &computer"<<endl;
     	cin>>phy>>che>>math>>bio>>com;
     
     }
     
void per()
    {
    per=(phy+che+math+bio+com)/5;
    cout<<"your percentage is:"<<per;
}
};


int main()
{
    student s[5];
    int i;
    cout<<"welcome to our COLLAGE WEBSITE"<<endl; 
    for(i=0;i<5;i++)
    {
	
	s[i].info();
    s[i].per();
    
    }
	  return 0;
}

