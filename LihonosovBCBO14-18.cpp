#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
#include <clocale>

using namespace std;

struct peremenniye
{
	string numberst;
	string soname;
	string name;
	string male;
	string otchestvo;

};
peremenniye *stud, *copstud;
int kolvo=10;

void vivod()
{
	cout<< endl<< "_____________________"<< endl <<endl;
	for (int i=0; i<kolvo; i++)
	{
		cout<<stud[i].numberst<<" "<<stud[i].soname<<" "<<stud[i].name<<" "<<stud[i].otchestvo<<" "<<stud[i].male<<endl;
		 
	}
		cout << "\n";
		cout << "\n";
			cout << "\n";
		system("pause");
			system("cls");
	
}

void dobavit()
{
	for (int i=0; i<kolvo; i++)
	{
		copstud[i].numberst=stud[i].numberst;
		copstud[i].soname=stud[i].soname;
		copstud[i].name=stud[i].name;
		copstud[i].male=stud[i].male;
	}
	
	kolvo++;
	stud = new peremenniye [kolvo];
	
		for(int i=0; i<kolvo-1;i++)
		{
			stud[i].numberst=copstud[i].numberst;
			stud[i].soname=copstud[i].soname;
			stud[i].name=copstud[i].name;
			stud[i].male=copstud[i].male;	
		}
		
	cout << "������� ���:";
	cin >> stud[kolvo-1].name;
	cout << "������� �������:";
	cin >> stud[kolvo-1].soname;
	cout << "������� ��������:";
	cin >>stud[kolvo-1].otchestvo;
	cout << "������� ���(�/�):";
	cin>>stud[kolvo-1].male;
	cout << "������� ����� ������������� ������:";
	cin>> stud[kolvo-1].numberst;
	
	copstud= new peremenniye[kolvo];	 	

		cout << "\n";
		cout << "������� ������� ��������: \n";
		cout << "\n";
		system("pause");
			system("cls");


		
			}

 void delet()
 {
 		cout<< endl<< "_____________________"<< endl <<endl;
	for (int i=0; i<kolvo; i++)
	{
		cout<<stud[i].numberst<<" "<<stud[i].soname<<" "<<stud[i].name<<" "<<stud[i].otchestvo<<" "<<stud[i].male<<endl;
		 
	}
 	string namest;
 	cout << "������� ����� ������������� ������:";
 	cin>> namest;
 	for(int i=0;i<kolvo;i++)
 	{
 		copstud[i].numberst=stud[i].numberst;
		copstud[i].soname=stud[i].soname;
		copstud[i].name=stud[i].name;
		copstud[i].male=stud[i].male;
 	}
 	kolvo--;
 	stud = new peremenniye [kolvo];
 	
 	int m=0;
 	
 	for (int i=0; i<kolvo+1; i++)
	 {
	 	if (copstud[i].numberst!=namest)
	 	{
	 		stud[m].numberst=copstud[i].numberst;
			stud[m].soname=copstud[i].soname;
			stud[m].name=copstud[i].name;
			stud[m].male=copstud[i].male;
			m++;
	 	}
	 } 
	 
	 copstud=new peremenniye [kolvo];
		cout << "\n";
		cout << "������� ������� �����: \n";
		cout << "\n";
		system("pause");
			system("cls");
 }

void sortubivanie()
{
	string temp;
	string temp2;
	for (int m=0; m<kolvo; m++)
	{
		for (int i=0; i<kolvo-1; i++)
		{
			if (stud[i].numberst<stud[i+1].numberst)
			{
				temp=stud[i].soname;
				stud[i].soname=stud[i+1].soname;
				stud[i+1].soname=temp;
				
				temp=stud[i].name;
				stud[i].name=stud[i+1].name;
				stud[i+1].name=temp;
				
				temp=stud[i].otchestvo;
				stud[i].otchestvo=stud[i+1].otchestvo;
				stud[i+1].otchestvo=temp;
				
				temp=stud[i].male;
				stud[i].male=stud[i+1].male;
				stud[i+1].male=temp;
				
				temp=stud[i].numberst;
				stud[i].numberst=stud[i+1].numberst;
				stud[i+1].numberst=temp;
			}
		}
	}
		cout << "\n";
		cout << "������ ������� ������������ �� ��������: \n";
		cout << "\n";
		system("pause");
			system("cls");
}
void sortvosrast()
{
	string temp;
	string temp2;
	for (int m=0; m<kolvo; m++)
	{
		for (int i=0; i<kolvo-1; i++)
		{
			if (stud[i].numberst>stud[i+1].numberst)
			{
				temp=stud[i].soname;
				stud[i].soname=stud[i+1].soname;
				stud[i+1].soname=temp;
				
				temp=stud[i].name;
				stud[i].name=stud[i+1].name;
				stud[i+1].name=temp;
				
				temp=stud[i].otchestvo;
				stud[i].otchestvo=stud[i+1].otchestvo;
				stud[i+1].otchestvo=temp;
				
				temp=stud[i].male;
				stud[i].male=stud[i+1].male;
				stud[i+1].male=temp;
				
				temp=stud[i].numberst;
				stud[i].numberst=stud[i+1].numberst;
				stud[i+1].numberst=temp;
			}
		}
	}
		cout << "\n";
		cout << "������ ������� ������������ �� �����������: \n";
		cout << "\n";
		system("pause");
			system("cls");
}

void upload()
{
	ifstream fin("stud.txt");
	for ( int i=0; i<kolvo; i++)
	{
		fin>> stud[i].numberst>> stud[i].soname>> stud[i].name>> stud[i].otchestvo>> stud[i].male;
	}
			cout << "\n";
			cout << "�������� ������� ���������: \n";
			cout << "\n";
		system("pause");
			system("cls");
}
void save()
{
	ofstream fout("stud.txt");
	for ( int i=0; i<kolvo; i++)
	{
		fout<< stud[i].numberst<<" "<< stud[i].soname<<" "<< stud[i].name<<" "<< stud[i].otchestvo<<" "<< stud[i].male<<endl;
	}
	cout << "\n";
	cout << "������ ������� �������: \n";
	cout << "\n";
		system("pause");
			system("cls");
}




int main() 
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	stud = new peremenniye[kolvo];
	copstud = new peremenniye[kolvo];
	
	int g;
	
	while (true)
	{
	system("pause");
			system("cls");
cout << "  ����\n"
		<< "(0) ����� �� ���������.\n"
		<< "(1) ������� ������ ���������.\n"
		<< "(2) �������� �������� ���������.\n"
		<< "(3) ������� �������� �� ������.\n"
		<< "(4) ������������� ������ �� �������� ���� ������.\n"
		<< "(5) ������������� ������ �� ����������� ���� ������.\n"
		<< "(6) �������� ��������� �� �����.\n"
		<< "(7) ��������� ������ � ����.\n"
		<< "��� �����: ";
					
					
	cin>>g;
	
	
	if (g==0)
	{
		break;
	}
		switch (g)
		{
			case(1):
				vivod();
				break;
			case(2):
				dobavit();
				break;
			case(3):
				delet();
				break;
			case(4):
				sortubivanie();
				break;
			case(5):
				sortvosrast();
				break;
			case(6):
				upload();
				break;
			case(7):
				save();
				break;
				
			default:	
				cout << "\n";		
				cout<<"������ - ������� ���������� �����"<<endl;
				cout << "\n";
				break;
				
				
		}
}
}
	
		

