#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <chrono>
#include <ctime>
#include <fstream>
using namespace std;


string getTimeStr() //date & time function
{
	time_t now = chrono::system_clock::to_time_t(chrono::system_clock::now());
	string s(11, '\0');
	strftime(&s[0], s.size(), "%d-%m-%Y", std::localtime(&now));
	return s;
}
void update_database(string id, string subject, string status, string date, string description) //database update function
{
	string fullname, id1;
	string line;

	ofstream tickets("ticket_database.txt", ofstream::out | ofstream::app);
	tickets << "------------------------------------------" << endl;
	tickets << "ID:" << id << endl;
	tickets << "Subject:" << subject << endl;
	tickets << "Status:" << status << endl;
	tickets << "Date:" << date << endl;
	tickets << "Description:" << description << endl;

	tickets.close(); // סגירת הקובץ

			cout << "Thank you! Your call is now saved in the system." << endl << "We will contact you soon!" << endl;
}
void create_new_ticket(string id) //creating new ticket function
{
	string description = " ";
	string status = "new";
	string subject = " ";
	string date = getTimeStr();

	int choise = 0;

	while (choise < 1 || choise > 6)
	{
		cout << "Choose Subject:" << endl;
		cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
		cout << "[1]  Courses" << endl;
		cout << "[2]  Grades" << endl;
		cout << "[3]  Maintenance problem" << endl;
		cout << "[4]  Other" << endl;
		cout << "[5]  Back" << endl;
		cout << "[6]  Back to Main Menu" << endl;

		cin >> choise;
		cout << endl;

		switch (choise)
		{

		case 1://[1]  Courses
		{
			subject = "Courses";

			cout << subject << endl << "Describe your problem:" << endl;
			cin.ignore();
			getline(cin, description);
			update_database(id, subject, status, date, description);

			break;
		}

		case 2://[2]  Grades
		{
			subject = "Grades";

			cout << subject << endl << "Describe your problem:" << endl;
			cin.ignore();
			getline(cin, description);
			update_database(id, subject, status, date, description);
			break;
		}

		case 3://[3]  Maintenance problem
		{
			subject = "Maintenance_problem";

			cout << subject << endl << "Describe your problem:" << endl;
			cin.ignore();
			getline(cin, description);
			update_database(id, subject, status, date, description);
			break;
		}

		case 4://[4]  Other
		{
			subject = "Other";

			cout << endl << subject << endl << "Describe your problem:" << endl;
			cin.ignore();
			getline(cin, description);
			update_database(id, subject, status, date, description);
			break;
		}
		case 5://[5]  Back
		{
			//user_menu(id);
			break;
		}
		case 6://[6]  Back To Main Menu
		{
			cout << "Back To Main Menu";
			break;
		}
		}

	}
}
void User_tickets_history(string id) //show user ticket's history 
{
	string subject, description, date, status;
	string line;
	string id1;

	ifstream tickets;
	tickets.open("ticket_database.txt");

	int choise = 0;
	cout << "Filter by:" << endl;
	while (choise < 1 || choise > 4)
	{
		cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
		cout << "[1]  Subject" << endl;
		cout << "[2]  Status" << endl;
		cout << "[3]  Date" << endl;
		cout << "[4]  Non filter" << endl;

		cin >> choise;
		cout << endl;

		switch (choise)
		{
		case 1://[1]  filter by subject
		{	
			int flag = 0;
			string subject1;
			int choise = 0;
			cout << "Choose Subject:" << endl;
			while (choise < 1 || choise > 4)
			{
				cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
				cout << "[1]  Courses" << endl;
				cout << "[2]  Grades" << endl;
				cout << "[3]  Maintenance problem" << endl;
				cout << "[4]  Other" << endl;

				cin >> choise;
				cout << endl;
			}
			if (choise == 1) { subject1 = "Courses"; }
			else if (choise == 2) { subject1 = "Grades"; }
			else if (choise == 3) { subject1 = "Maintenance_problem"; }
			else if (choise == 4) { subject1 = "Other"; }

			while (getline(tickets, line))
			{
				getline(tickets, line);
				id1 = line.substr(line.find(':') + 1, line.length());
				if (id1 == id) //Checks if the user is already existing in the program
				{
					getline(tickets, line);
					subject = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					status = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					date = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					description = line.substr(line.find(':') + 1, line.length());

					if (subject1 == subject)
					{
						cout << "ID: " << id << "\t\tSubject: " << subject << "\t\tstatus: " << status << "\t\tDate: " << date << "\t\tdescription: " << description << endl;
						flag++;
					}

				}
				
			}
			if (flag == 0)
			{
				cout << "Your user does not have a ticket in subject: " << subject1 << endl;
			}
			break;

		}

		case 2://[2]  filter by status
		{
			int flag = 0;
			string status1;
			int choise = 0;
			cout << "Choose Status:" << endl;
			while (choise < 1 || choise > 3)
			{
				cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
				cout << "[1]  New" << endl;
				cout << "[2]  In progress" << endl;
				cout << "[3]  Closed" << endl;

				cin >> choise;
				cout << endl;
			}
			if (choise == 1) { status1 = "new"; }
			else if (choise == 2) { status1 = "in_progress"; }
			else if (choise == 3) { status1 = "closed"; }

			while (getline(tickets, line))
			{
				getline(tickets, line);
				id1 = line.substr(line.find(':') + 1, line.length());
				if (id1 == id) //Checks if the user is already existing in the program
				{
					getline(tickets, line);
					subject = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					status = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					date = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					description = line.substr(line.find(':') + 1, line.length());

					if (status1 == status)
					{
						cout << "ID: " << id << "\tSubject: " << subject << "\tstatus: " << status << "\tDate: " << date << "\tdescription: " << description << endl;
						flag++;
					}

				}
			}
			if (flag == 0)
			{
				cout << "Your user does not have a ticket in status: " << status1 << endl;
			}
			break;
		}

		case 3://[3]  filter by date
		{
			int flag = 0;
			string date1;
			cout << "Enter Date [DD-MM-YYYY]" << endl;
			cin >> date1;
			date1 += " ";

			while (getline(tickets, line))
			{
				getline(tickets, line);
				id1 = line.substr(line.find(':') + 1, line.length());
				if (id1 == id) //Checks if the user is already existing in the program
				{
					getline(tickets, line);
					subject = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					status = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					date = line.substr(line.find(':') + 1, line.length() - 1);
					getline(tickets, line);
					description = line.substr(line.find(':') + 1, line.length());

					if (date1 == date)
					{
						cout << "ID: " << id << "\tSubject: " << subject << "\tstatus: " << status << "\tDate: " << date << "\tdescription: " << description << endl;
						flag++;
					}

				}
			}
			if (flag == 0)
			{
				cout << "Your user does not have a ticket by date: " << date1 << endl;
			}

			break;
		}

		case 4://[4]  non filter
		{
			while (getline(tickets, line))
			{
				getline(tickets, line);
				id1 = line.substr(line.find(':') + 1, line.length());
				if (id1 == id) //Checks if the user is already existing in the program
				{
					getline(tickets, line);
					subject = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					status = line.substr(line.find(':') + 1, line.length());
					getline(tickets, line);
					date = line.substr(line.find(':') + 1, line.length() - 1);
					getline(tickets, line);
					description = line.substr(line.find(':') + 1, line.length());

					cout << "ID: " << id << "\tSubject: " << subject << "\tstatus: " << status << "\tDate: " << date << "\tdescription: " << description << endl;


				}
			}
			break;
		}


		tickets.close();

		}
	}
}
void user_menu(string id)
{
	int choise = 0;

	while (choise < 1 || choise > 4)
	{
		cout << "ENTER NUMBER BETWEEN 1 - 4:" << endl;
		cout << "[1]  Create New Ticket" << endl;
		cout << "[2]  User Tickets History" << endl;
		cout << "[3]  Back" << endl;
		cout << "[4]  Back to Main Menu" << endl;

		cin >> choise;
		cout << endl;

		switch (choise)
		{
		case 1://[1]  Create New Ticket
		{
			create_new_ticket(id);
			break;
		}

		case 2://[2]  User Tickets History
		{
			User_tickets_history(id);
			break;
		}

		case 3://[3]  Back
		{
			cout << "Back";
			break;
		}

		case 4://[4]  Back to Main Menu
		{
			cout << "Back to Main Menu";
			break;
		}

		}
	}
}

bool CheckID(string New_U, string Excist_U)
{
	if (New_U == Excist_U)
	{
		return true;
	}
	return false;
}
bool Verify_Password(string CheckPass, string Pass)
{
	{
		if (CheckPass == Pass)
		{
			return true;
		}
		return false;
	}
}
bool Verify_ID_and_Password(string ID, string password)
{
	string line;
	string flag;
	ifstream myfile("New.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			flag = line.substr(line.find(':') + 1, line.length());
			if (CheckID(ID, flag) == true) //Checks if the user is already existing in the program
			{
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				getline(myfile, line);
				flag = line.substr(line.find(':') + 1, line.length());
				if (Verify_Password(flag, password) == true)
				{
					return true;
				}
			}
		}
		myfile.close();
	}
	return false;
}
string PhonePrefix()
{
	string prefix;
	cout << "Chose You prefix of your phone from the list" << endl;
	cout << "1.050-\n2.052-\n3.054-\n" << endl;
	cin >> prefix;
	while (prefix<"1" || prefix>"3")
	{
		cout << "You have entered a number out of range" << endl;
		cin >> prefix;
	}
	if (prefix == "1")
	{
		prefix = "050-";
	}
	if (prefix == "2")
	{
		prefix = "052-";
	}
	if (prefix == "3")
	{
		prefix = "054-";
	}
	return prefix;
}
bool CheckEmail(string email, string hold)
{
	if (email.length() < 10)
	{
		return true;
	}
	if ((email.find("@") == string::npos)) //checks if there is no '@' on the email string
	{
		return true;
	}
	if ((email.find(".com") == string::npos) && (email.find(".net") == string::npos) && (email.find(".org") == string::npos) && (email.find(".edu") == string::npos))
	{
		return true;
	}
	string s1 = hold;
	string s2 = email;
	if (strstr(s1.c_str(), s2.c_str())) // checks if there is already such a email
	{
		return true;//" S1 Contains S2";
	}
	return false;
}
string CheckPassword()
{
	string password;
	cin >> password;
	while (password.length() < 8)
	{
		cout << "Your password is too short,please try again" << endl;
		cin >> password;
	}
	while (password.length() > 8)
	{
		cout << "Your password is too long,please try again" << endl;
		cin >> password;
	}
	while (!(password.find("!") == string::npos) || !(password.find("@") == string::npos) || !(password.find("#") == string::npos) || !(password.find("$") == string::npos) || !(password.find("%") == string::npos) || !(password.find("^") == string::npos) || !(password.find("&") == string::npos) || !(password.find("*") == string::npos) || !(password.find("(") == string::npos) || !(password.find(")") == string::npos) || !(password.find("-") == string::npos) || !(password.find("+") == string::npos) || !(password.find("_") == string::npos) || !(password.find("=") == string::npos) || !(password.find(".") == string::npos) || !(password.find("[") == string::npos) || !(password.find("]") == string::npos))
	{
		cout << "You have selected a password that contains a bad character, please try again" << endl;
		cin >> password;
	}
	return password;
}
void Register(string New_User, string hold)
{
	int i = 0;
	string temp, temp1;
	string ID = "ID:", Name = "Full Name:", Email = "Email:", PhoneNum = "Phone Number:", Pass = "Password:";
	ofstream myfile("New.txt");
	if (myfile.is_open())
	{
		myfile << hold; //enter the content of the file that was open before into a new file
		myfile << "------------------------------------------\n";
		myfile << ID;
		myfile << New_User; // enter the new user
		myfile << "\n";
		myfile << Name; // enter his first name
		cout << "Enter Your First Name - " << endl;
		cin >> temp;
		cout << "Enter Your Last Name - " << endl;
		cin >> temp1;
		temp.append(" ");
		temp.append(temp1);
		myfile << temp;
		myfile << "\n";
		myfile << Email;
		cout << "Enter Your Email - " << endl; //enter the user email
		cin >> temp;
		while (CheckEmail(temp, hold) == true) //checks if the email is Under our conditions
		{
			cout << "Invalid email,try again" << endl;
			cin >> temp;
		}
		myfile << temp;
		myfile << "\n";
		myfile << PhoneNum;
		cout << "Enter Your Phone Number - " << endl;
		temp = PhonePrefix(); //chose the prefix of the user phone
		cout << temp;
		cin >> temp1;
		temp.append(temp1);
		myfile << temp;
		myfile << "\n";
		myfile << Pass;
		cout << "Enter Your Password - " << endl;
		temp = CheckPassword(); // check if the password that chose by the user is under our conditions
		myfile << temp;
		myfile << "\n";
		myfile.close();
	}
	else cout << "Unable to open file";
}
bool Create_User(string New_User)
{
	string line;
	string flag;
	string HOLD;//hold will hold all the text content as a string
	ifstream myfile("New.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			HOLD.append(line);
			HOLD.append("\n");
			flag = line.substr(line.find(':') + 1, line.length());
			if (CheckID(New_User, flag) == true) //Checks if the user is already existing in the program
			{
				cout << "The ID is already existing in the system" << endl;
				exit(1);
			}
		}
		Register(New_User, HOLD);//Register a new user
		myfile.close();
	}
	return true;
}
string GetName(string E_User)
{
	string line;
	string flag;
	ifstream myfile("New.txt");
	if (myfile.is_open())
	{
		while (getline(myfile, line)) //write line by line into the string "line"
		{
			flag = line.substr(line.find(':') + 1, line.length());
			if (CheckID(E_User, flag) == true) //Checks if the user is already existing in the program
			{
				getline(myfile, line);
				flag = line.substr(line.find(':') + 1, line.length());
				return flag;
			}
		}
		myfile.close();
	}
	return "Nothing";
}


int main()
{
	string N_U, choice, E_U, Pass;
	cout << "----------------------Academic support system---------------------" << endl;//Select Menu 
	cout << "--------------------------------Welcome!--------------------------" << endl;
	cout << "-----------Please choose your choice from the side bar:-----------\n";
	cout << "\n1.Login\n2.Technician\n" << endl;
	cin >> choice;
	while (choice < "1" || choice > "2")
	{
		cout << "You have enterd number out of range" << endl;
		cin >> choice;
	}
	if (choice == "1")
	{
		cout << "Are you already existing user OR New User?\n1.existing user\n2.New User" << endl;
		cin >> choice;
		while (choice < "1" || choice > "2")
		{
			cout << "You have enterd number out of range" << endl;
			cin >> choice;
		}
		if (choice == "1")
		{
			cout << "-----------Welcome to the Login window-----------\n";
			cout << "Enter your Id" << endl;
			cin >> E_U;
			cout << "Enter Your password" << endl;
			Pass = CheckPassword();
			if (Verify_ID_and_Password(E_U, Pass) == true)
			{
				cout << "Welcome " << GetName(E_U) << " What would you like to do?" << endl;
				user_menu(E_U);
			}
			else
			{
				cout << "The User or the password that youv'e entered is invalid\n";
			}
		}
		if (choice == "2")
		{
			cout << "-----------Welcome to the Register window-----------\n";
			cout << "Please Enter Your ID" << endl;
			cin >> N_U;
			//שם משתמש יכיל אותיות ומספרים - לא לפי ת.ז
			if (Create_User(N_U) == true)
			{
				cout << "Your data is saved by the program" << endl;
				user_menu(N_U);
			}
			//לאחר הפונקציה הזו בא אפשרות לחזור לתפריט הראשית שוב
		}
	}

	return 0;
}
