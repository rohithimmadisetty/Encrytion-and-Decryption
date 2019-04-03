#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;

int main()
{
	char ch,a='y';
	ofstream obj;
	int i;
	int op;
	system("cls");
	
	while(a=='y' || a=='Y')
	{
     cout<<"\n\n\t\tEnter the option"<<endl;
     cout<<"\n\n                           1. entering the data\n\n"<<endl;
     cout<<"                           2. read from file\n\n"<<endl;
     cout<<"                           3. exit"<<endl;
     cin>>op;
	
	system("cls");
	switch(op)
	{
 case 1:
	{
	obj.open("Teja.txt",ios::app);
	cout<<"enter the content to stop pree ."<<endl;
	ch=getche();
	while(ch!='.')
	{
		i=(int)ch;
		i=i+4;
		ch=(char)i;
		obj.put(ch);
		ch=getche();
	}
	
	obj.close();
	}
    break;
case 2:
           	{
	           ifstream obj1;
	           obj1.open("sa1.txt",ios::in);
	           ch=obj1.get();
	           while(!obj1.eof() && ch!='.')
	              {
	                 i=(int)ch;
		             i=i-4;
		             ch=(char)i;
		             cout<<ch;
		             ch=obj1.get();
	              }
	
               	obj1.close();
		   }
                break;
case 3:
	{
		exit(0);
	}
	break;
}
cout<<"\n\n\n"<<endl;
cout<<"                             Do u want to continue y/n"<<endl;
cin>>a;
}
}
