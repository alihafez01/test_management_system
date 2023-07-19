#include<iostream>
#include<string>
#include <conio.h>
#include <iomanip>
using namespace std;

class NtsManager;
class Student
{
	string name, fatherName, address, email;
	string CNIC, mobile;
	int age, matricMarks,matricYear,intermediateMarks, intermediateYear;
	public:
		Student()
		{
			
		}
		friend ostream &operator << (ostream &os, Student &std);
		friend istream &operator >> (istream &is, Student &std);
		void editdata()
		{
			int a;
			do
			{
				cout << "which data you want to edit. choose from the menu below." << endl;
				cout << "\n\n1.Name\n2.Father Name\n3.CNIC\n4.Email\n5.Address\n6.Mobile Number\n7.Matric Marks"
					<< "\n8.Matric Year\n9.Intermediate Marks\n10.Intermediate Year\n11.exit\n";
				cout << "Enter choice: ";
				cin >> a;
				switch (a)
				{
				case 1:
				{
					cout << "You want to change the name\n";
					cout << "Enter the new name: ";
					cin >> name;
				}
				break;
				case 2:
				{
					cout << "You want to change the Father Name\n";
					cout << "Enter the new name: ";
					cin >> fatherName;
				}
				break;
				case 3:
					{
						cout<<"You want to change the CNIC number\n";
						cout<<"Enter the new CNIC number: ";
						cin>>CNIC;
					}
				break;
				case 4:
				{
					cout << "You want to change the Email\n";
					cout << "Enter the new Email: ";
					cin >> email;
				}
				break;
				case 5:
				{
					cout << "You want to change the Address\n";
					cout << "Enter the new Address: ";
					cin >> address;
				}
				break;
				case 6:
				{
					cout << "You want to change the Phone Number\n";
					cout << "Enter the new Number: ";
					cin >> mobile;
				}
				break;
				case 7:
				{
					cout << "You want to change the Matric Marks\n";
					cout << "Enter the new Marks: ";
					cin >> matricMarks;
				}
				break;
				case 8:
				{
					cout << "You want to change the Matric Year\n";
					cout << "Enter the new Year: ";
					cin >> matricYear;
				}
				break;
				case 9:
				{
					cout << "You want to change the Interedaite Marks\n";
					cout << "Enter the new Marks: ";
					cin >> intermediateMarks;
				}
				break;
				case 10:
				{
					cout << "You want to change the Intermediate Year\n";
					cout << "Enter the new year: ";
					cin >> intermediateYear;
				}
				break;
				case 11:
					{
						cout<<"Thank You!!!"<<endl;
					}
				break;
				}
			}//loop
			while (a != 11);
		}
};
ostream &operator << (ostream &os, Student &std)
{
	os<<"\n\n";
	os<<"Name: "<<std.name<<endl;
	os<<"Father Name: "<<std.fatherName<<endl;
	os<<"Age: "<<std.age<<endl;
	os<<"CNIC: "<<std.CNIC<<endl;
	os<<"Mobile Number: "<<std.mobile<<endl;
	os<<"Email: "<<std.email<<endl;
	os<<"Matric Marks: "<<std.matricMarks<<endl;
	os<<"Matric Year: "<<std.matricYear<<endl;
	os<<"Intermediate Marks: "<<std.intermediateMarks<<endl;
	os<<"Intermediate Year: "<<std.intermediateYear<<endl;
	return os;
}
istream &operator >> (istream &is, Student &std)
{
	is>>std.name;
	is>>std.fatherName;
	is>>std.email;
	is>>std.address;
	is>>std.CNIC;
	cin.ignore();
	is>>std.mobile;
	is>>std.age;
	is>>std.matricMarks;
	is>>std.matricYear;
	is>>std.intermediateMarks;
	is>>std.intermediateYear;
	return is;
}
class Mcq 
{
	int option;
	public:
		int result = 0;
		void setoption(int option)
		{
			this->option = option;
		}
		int getoption()
		{
			return option;
		}
		void test()
		{
			
			cout<<"1. If the hotel has no vacancy, you can stay with __."<<endl;
			cout<<"choose any option:\n1.ours\t2.our\t3.we\n4.us\n";
			cin>>option;
			if (option == 4)
			{
				result = result + 1;
			}
			cout<<"2. Maryam is __ to get involved in the argument."<<endl;
			cout<<"Choose any option:\n1.relegated\t2.relucant\t3.reticent\t4.reminiscent\n";
			cin>>option;
			if (option == 2)
			{
				result = result + 1;
			}
			cout<<"3. There are no restaurants anywhere near the factory, __?"<<endl;
			cout<<"Choose any option:\n1.there are\t2.are there\t3.there aren’t\t4.aren’t there\n";
			cin>>option;
			if (option == 2)
			{
				result = result + 1;
			}
			cout<<"4. Everyone __ Jimmy was invited to the party."<<endl;
			cout<<"Choose any option\n1.accept\t2.except\t3.exception\t4.even\n";
			cin>>option;
			if (option == 2)
			{
				result = result + 1;
			}
			cout<<"5. Does this bag belong to __?"<<endl;
			cout<<"Choose any option\n1. you\t2.your\t3.yours\t4.yourself\n";
			cin>>option;
			if (option == 1)
			{
				result = result + 1;
			}
			cout<<"6. __ that house have a finished basement?"<<endl;
			cout<<"Choose any option\n1.What\t2.Does\t3.Is\t4.Why\n";
			cin>>option;
			if (option == 2)
			{
				result = result + 1;
			}
			cout<<"7. This house doesn’t have an attic, __?"<<endl;
			cout<<"Choose any option\n1.won’t it\t2.doesn’t it\t3.it does\t4.does it\n";
			cin>>option;
			if (option == 4)
			{
				result = result + 1;
			}
			cout<<"8. ___ Julie’s car was brand new, it had mechanical problems."<<endl;
			cout<<"Choose any option\n1.As though\t2.So that\t3.In order that\t4.Even though\n";
			cin>>option;
			if (option == 4)
			{
				result = result + 1;
			}
			cout<<"9.Remember __ the garage after ___ your project."<<endl;
			cout<<"Choose any option\n1.closing, finishing\t2.closing, to finish\t3.to close, finishing\t4.to close, finish\n";
			cin>>option;
			if (option == 3)
			{
				result = result + 1;
			}
			cout<<"10.The company decided _ logo was outdated."<<endl;
			cout<<"Choose any option\n1.it’s\t2.it\t3.its\t4.itself\n";
			cin>>option;
			if (option == 3)
			{
				result = result + 1;
			}
		}
};
class NtsManager
{
	public:
		Mcq M;
		Student s;
};
int main()
{
	NtsManager Nts;
	cout<<"Enter the data in the following order:"<<endl;
	cout<<"Name\nFather Name\nEmail\nAddress\nCNIC\nMobile Number\nAge\nMatric Marks\nMatric Year\nIntermediate Marks\nIntermediate Year\n\n";
	cin>>Nts.s;
	cout<<Nts.s;
	char choice;
	string username, pasward;
	cout<<"You want to edit your record [Y/N]: ";
	cin>>choice;
	if ((choice == 'Y') || (choice == 'y'))
	{
		Nts.s.editdata();
		cout<<Nts.s;
	}
	else if ((choice == 'N') || (choice == 'n'))
	{
		cout<<"Ok Thank You!!"<<endl;
	}
	cout<<"Your username is: "<<"abc129578"<<endl;
	cout<<"Your pasward is: "<<"xyz458721"<<endl;
	cout<<"Enter your username: ";
	cin>>username;
	if (username == "abc129578")
	{
		cout<<"Enter your pasward: ";
		cin>>pasward;
		if (pasward == "xyz458721")
		{
			system("cls");
			cout<<"Press any key to start the test\n";
			getch();
			Nts.M.test();
			cout<<"Result: "<<Nts.M.result<<endl;
		}
		else
		{
			cout<<"Your pasward is incorrect"<<endl;
		}
	}
	else
	{
		cout<<"Your username is incorrect"<<endl;
	}
	return 0;
}
