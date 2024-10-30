#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>

using namespace std;

bool authentication;
string userId;
int days = 0, rentalfee = 0;	// additional int vatiables defined
struct customer
{
	string customername;
	string carmodel;
	string carnumber;
};

customer cust; //Structure name is customer and object name is cust
			   //In cust, there are data types which are in the structure of customer
			   //Only the above 3 strings can be used in cust
int user_authentication(); //Authentication check

int login();
void registration();
void forgot();

int main()
{
	authentication = user_authentication();
	if (authentication = 1)
	{
		cout << "\t\t\t\tPlease Enter Customer Name: ";	//taking data from the user
		cin >> cust.customername; //Structure's object made in cust
								  //cust.(variable that we will access)
								  //Inside object is customer name
		cout << endl;
		do { 	cout << "\t\t\t\t Please Select a Car" << endl;	//giving user a choice to select among Six different models
			cout << "\t\t\t\t Enter 'A' For BMW 2020 Model. ($1000 per day)" << endl;
			cout << "\t\t\t\t Enter 'B' for Mercedes 2022. ($3500 per day)" << endl;
			cout << "\t\t\t\t Enter 'C' for Bently 2020. ($4000 per day)" << endl;
			cout << "\t\t\t\t Enter 'D' For Hyundai 2018 Model. ($400 per day)" << endl;
			cout << "\t\t\t\t Enter 'E' For Toyota Hilux 2021 Model. ($600 per day)" << endl;
			cout << "\t\t\t\t Enter 'F' For Suzuki Swift 2020 Model. ($400 per day)" << endl;
			cout << endl;
			cout << "\t\t\t\t Choose a Car from the above options: ";
			cin >> cust.carmodel;
			cout << endl;
			cout << "--------------------------------------------------------------------------" << endl;
			if (cust.carmodel == "A")
			{
				system("CLS");
				cout << "You have choosed BMW 2020 Model" << endl;
				ifstream inA("A.txt");	//displaying details of model A
				char str[200]; //Length of text
				while (inA)
				{
					inA.getline(str, 200); //reading lines
					cout << str << endl; //with str, we read the text from the file
				}
			}

			if (cust.carmodel == "B")
			{
				system("CLS");

				cout << "You have choosed Mercedes 2022 Model" << endl;
				ifstream inB("B.txt");	//displaying details of model B
				char str[200];
				while (inB)
				{
					inB.getline(str, 200);
					cout << str << endl;
				}
			}

			if (cust.carmodel == "C")
			{
				system("CLS");
				cout << "You have choosed Bently 2020 Model" << endl;
				ifstream inC("C.txt");	//displaying details of model C
				char str[200];
				while (inC)
				{
					inC.getline(str, 200);
					cout << str << endl;
				}
			}

			if (cust.carmodel == "D")
			{
				system("CLS");

				cout << "You have choosed Hyundai 2018 Model" << endl;
				ifstream inD("D.txt");	//displaying details of model D
				char str[200];
				while (inD)
				{
					inD.getline(str, 200);
					cout << str << endl;
				}
			}

			if (cust.carmodel == "E")
			{
				system("CLS");

				cout << "You have choosed Toyoya Hilux 2021 Model" << endl;
				ifstream inE("E.txt");	//displaying details of model E
				char str[200];
				while (inE)
				{
					inE.getline(str, 200);
					cout << str << endl;
				}
			}

			if (cust.carmodel == "F")
			{
				system("CLS");

				cout << "You have choosed Suzuku Swift 2020 Model" << endl;
				ifstream inF("F.txt");	//displaying details of model F
				char str[200];
				while (inF)
				{
					inF.getline(str, 200);
					cout << str << endl;
				}
			}

			if (cust.carmodel != "A" && cust.carmodel != "B" && cust.carmodel != "C" && cust.carmodel != "D" && cust.carmodel != "E" && cust.carmodel != "F")

				cout << "Invaild Car Model. Please try again!" << endl;
		}

		while (cust.carmodel != "A" && cust.carmodel != "B" && cust.carmodel != "C" && cust.carmodel != "D" && cust.carmodel != "E" && cust.carmodel != "F");
		cout << "--------------------------------------------------------------------------" << endl;
		cout << "Please provide following information: " << endl;
		//getting data from user related to rental service
		cout << "Please select a Car No. : ";
		cin >> cust.carnumber;
		cout << "Number of days you wish to rent the car : ";
		cin >> days;
		cout << endl;

		if (cust.carmodel == "A" || cust.carmodel == "a")
			rentalfee = days * 1000;
		if (cust.carmodel == "B" || cust.carmodel == "b")
			rentalfee = days * 3500;
		if (cust.carmodel == "C" || cust.carmodel == "c")
			rentalfee = days * 4000;
		if (cust.carmodel == "D" || cust.carmodel == "d")
			rentalfee = days * 400;
		if (cust.carmodel == "E" || cust.carmodel == "e")
			rentalfee = days * 600;
		if (cust.carmodel == "F" || cust.carmodel == "f")
			rentalfee = days * 400;
		
		cout << "\n";
		cout << "\n";
		cout << "\n";
		cout << "\n\t\t                       Car Rental                  " << endl;
		cout << "\t\t	///////////////////////////////////////////////////////////" << endl;
		cout << "\t\t Customer Name:" << setw(12) << cust.customername << endl;
		cout << "\t\t Car Model :" << setw(13) << cust.carmodel << endl;
		cout << "\t\t Car No. :" << setw(15) << cust.carnumber << endl;
		cout << "\t\t Number of days :" << setw(8) << days << endl;
		cout << "\t\t	 ________________________________________________________" << endl;
		cout << "\n";
		cout << "\t\t	| Total Rental Amount is :" << setw(10) << rentalfee << endl;
		system("Pause");
		system("CLS");
	}

	return 0;	//end of the program
}

int user_authentication()
{
	int c;
	cout << "\t\t\t______________________________________________\n\n\n";
	cout << "\t			Welcome to the login page			 \n\n\n";
	cout << "\t\t\t__________________	MENU	_________________\n\n\n";
	cout << "\t	Press 1 to login" << endl;
	cout << "\t	Press 2 to register" << endl;
	cout << "\n\t\t Please enter your choice: ";
	cin >> c;
	cout << endl;

	switch (c)
	{
		case 1:
			authentication = login(); //Login is returning the authentication variable
			break;

		case 2:
			registration();
			break;

		default:
			system("cls");
			cout << "\t\t\t Please select from options given above\n" << endl;
			main();
	}

	return authentication;
}



int login()
{
	int count = 0;
	string userId, password, id, pass;
	system("cls");
	cout << "Please enter the username and password: " << endl;
	cout << "\t\t\t USERNAME ";
	cin >> userId;
	cout << "\t\t\t PASSWORD ";
	cin >> password;

	ifstream records("records.txt"); //reads data
	//input is the object name
	while (records >> id >> pass) //id is the first word in records txt file and second word is password
	{
		if (id == userId && pass == password)
		{
			count = 1;
			system("cls");
		}
	}

	records.close(); //close is built-in function

	if (count == 1)
	{
		cout << userId << "\n Your login is successful \n Thanks for logging in \n";
		authentication = 1;
		return authentication;
	}
	else
	{
		cout << "\n Login error \n Please check your username and password\n";
		authentication = 0;
		main();
	}
}

void registration()
{
	string ruserId, rpassword, rid, rpass;
	system("cls");
	cout << "\t\t\t Enter the username: ";
	cin >> ruserId;
	cout << "\t\t\t Enter the password: ";
	cin >> rpassword;

	ofstream f1("records.txt"); //f1 is like a name we gave to read from the txt file
								// ofstream writes data to records txt file
	f1 << ruserId << ' ' << rpassword << endl;
	system("cls");
	cout << "Registration is successful. \n";
	main();

}
//1- Registration/login
//2- User is asked to select desired car
//3- Specifications of cars will be shown
//4- Car number means model
//5- User is asked for how many number of days he wishes to rent the car
//6- Total rent is shown to user.


