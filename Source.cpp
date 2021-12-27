#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<Windows.h>
using namespace std;




// if there new one will make the account here opeing new file and then 
// i take all the data that i need and but in files  
void creatacount() {
	string firstname, lastname, username, id;
	int telefonenumber, password;
	long long balance;
	cout << "Enter Your First Name Please :"; cin >> firstname;  Sleep(500); system("cls");
	cout << "Enter Your Last Name Please :";  cin >> lastname;   Sleep(500); system("cls");
	cout << "Enter The Password please :";    cin >> password;   Sleep(500); system("cls");
	cout << "Enter The ID please :";          cin >> id;         Sleep(500); system("cls");
	cout << "Enter Your Telephone Number Please :"; cin >> telefonenumber;   Sleep(500); system("cls");
	cout << "Enter The Balance that You Need To But In Bank: "; cin >> balance; Sleep(500); system("cls");
	if (balance < 1000) {
		for (int i = 0; ; i++) {
			cout << "To Create New Account You Must But At Least 1000$ :";
			cin >> balance;
			if (balance < 1000) {
				continue;
			}
			else break;
		}
	}
	username = firstname + lastname + id;
	fstream file(username + ".txt", ios::out);
	if (file.is_open()) {
		file << firstname << endl << lastname << endl << id << endl << password << endl << telefonenumber << endl << balance << endl;
	}
	Sleep(1000); system("cls");
	cout << "This is your data please keep it only to yourself only \n";
	cout << "Firts name : " << firstname << endl;
	cout << "Last name : " << lastname << endl;
	cout << "ID : " << id << endl;
	cout << "Password : " << password << endl;
	cout << "Telephone number : " << telefonenumber << endl;
	cout << "Balance : " << balance << endl;
	file.close();
	int EXIT;
	cout << "Press any key to Exit : ";
	cin >> EXIT;
	Sleep(1000); system("cls");

}



// first menue that display in program 
void menu1() {
	cout << "1)-> To Create New Acount" << endl;
	cout << "2)-> To Login " << endl;;
}



// the main menu that has all servies in account
void menu2()
{
	system("cls");
	cout << "********** MENU ***********" << endl;
	cout << "1)-> To Get information about your account" << endl;
	cout << "2)-> To Inquire about the balance" << endl;
	cout << "3)-> To Deposit" << endl;
	cout << "4)-> To Withdraw" << endl;
	cout << "5)-> To EXIT" << endl;
	cout << "***************************" << endl;
}


// the menu that used in functoin (info and balnce) to make a recursoin
void menuerecursoin() {
	cout << "********** MENU ***********" << endl;
	cout << "1)-> To Deposit" << endl;
	cout << "2)-> To Withdraw" << endl;
	cout << "3)-> To EXIT" << endl;
	cout << "***************************" << endl;
}



void Deposit(long long balance) {
	Sleep(2000);
	system("cls");
	int depos;
	double deposit;
	Sleep(1000);
	cout << "Choise value to deposit \n";
	cout << "1)-> 100 $" << endl << "2)-> 200 $" << endl << "3)-> 500 $" << endl << "4)-> 1000 $" << endl << "5)-> Anther value " << endl;
	for (int i = 0;; i++) {
		try {
			cin >> depos;
			if (depos == 1 or depos == 2 or depos == 3 or depos == 4 or depos == 5)  break;
			else throw depos;
		}
		catch (int x) {
			Sleep(1000);
			system("cls");
			cout << x << " is invaled choice please try again :";
		}
	}
	if (depos == 1) {
		Sleep(1000);
		system("cls");
		cout << "Success " << endl;
		cout << "Your current balance become : " << 100 + balance << " $" << endl;
		Sleep(5000);
		cout << "Please pull your card \n";
	}
	else if (depos == 2) {
		Sleep(1000);
		system("cls");
		cout << "Success " << endl;
		cout << "Your current balance become : " << 200 + balance << " $" << endl;
		Sleep(5000);
		cout << "Please pull your card \n";
	}
	else if (depos == 3) {
		Sleep(1000);
		system("cls");
		cout << "Success " << endl;
		cout << "Your current balance become : " << 500 + balance << " $" << endl;
		Sleep(5000);
		cout << "Please pull your card \n";
	}
	else if (depos == 4) {
		Sleep(1000);
		system("cls");
		cout << "Success " << endl;
		cout << "Your current balance become : " << 1000 + balance << " $" << endl;
		Sleep(5000);
		cout << "Please pull your card \n";
	}
	else if (depos == 5) {
		Sleep(1000);
		system("cls");
		cout << "Enter The Amount Of Money That You Need To Deposit : ";
		cin >> deposit;
		Sleep(2000);
		system("cls");
		cout << "Success " << endl;
		cout << "Your current balance become : " << deposit + balance << " $" << endl;
		Sleep(5000);
		cout << "Please pull your card \n";
	}

}
void Withdraw(long long balance) {
	Sleep(2000);
	system("cls");
	long long withd;
	long double withdraw;
	cout << "chose value to withdraw \n";
	cout << "1)-> 100 $" << endl << "2)-> 200 $" << endl << "3)-> 500 $" << endl << "4)-> 1000 $" << endl << "5)-> Anther value " << endl;
	for (int i = 0;; i++) {
		try {
			cin >> withd;
			if (withd == 1 or withd == 2 or withd == 3 or withd == 4 or withd == 5)  break;
			else throw withd;
		}
		catch (int x) {
			Sleep(1000);
			system("cls");
			cout << x << " is invaled choice please try again :";
		}
	}
	if (withd == 1 && balance >= 100) {
		Sleep(1000);
		system("cls");
		cout << "Success " << endl;
		cout << "Your current balance :" << balance - 100 << " $" << endl;
		Sleep(5000);
		cout << "Please pull your card \n";
	}
	else if (withd == 2 && balance >= 200) {
		Sleep(1000);
		system("cls");
		cout << "Success " << endl;
		cout << "Your current balance :" << balance - 200 << " $" << endl;
		Sleep(5000);
		cout << "Please pull your card \n";
	}
	else if (withd == 3 && balance >= 500) {
		Sleep(1000);
		system("cls");
		cout << "Success " << endl;
		cout << "Your current balance :" << balance - 500 << " $" << endl;
		Sleep(5000);
		cout << "Please pull your card \n";
	}
	else if (withd == 4 && balance >= 1000) {
		Sleep(1000);
		system("cls");
		cout << "Success " << endl;
		cout << "Your current balance :" << balance - 1000 << " $" << endl;
		Sleep(5000);
		cout << "Please pull your card \n";
	}
	else if (withd == 5) {
		Sleep(1000);
		system("cls");
		cout << "enter the number that you need to withdraw \n";
		for (int i = 0;; i++) {
			try {
				cin >> withdraw;
				if (withdraw > 0)break;
				else throw withdraw;
			}
			catch (int z) {
				Sleep(1000);
				system("cls");
				cout << z << " is invaled number please try again \n";
			}
		}
		if (withdraw <= balance) {
			Sleep(1000);
			system("cls");
			cout << "Success " << endl;
			cout << "Your current balance : " << balance - withdraw << " $" << endl;
			Sleep(5000);
			cout << "Please pull your card \n";
		}
		else {
			Sleep(1000);
			system("cls");
			cout << "sorry Your current balance is not enough" << endl;
			Sleep(5000);
			cout << "Please pull your card \n";
		}
	}
}




// the info function that take all info on parameters and after show the data about account
// and after show the data about account there is recursoin but for Deposit and Withdraw and Exit   
void info(string first, string last, string id, string pass, string telefon, long long usedbala) {


	// the data but with out the id 
	Sleep(2000);
	system("cls");
	cout << "This is your data please keep it only to yourself only \n";
	cout << "Firts name : " << first << endl;
	cout << "Last name : " << last << endl;
	//	cout << "ID : " << id << endl;
	cout << "Password : " << pass << endl;
	cout << "Telephone number : " << telefon << endl;
	cout << "Balance : " << usedbala << endl;
	Sleep(3000);
	cout << endl << endl;




	// Recoursion 
	Sleep(5000);
	int choice3;

	cout << "1)-> to get menu again \n2)-> To EXIT " << endl;
	for (int i = 0;; i++) {
		try {
			cin >> choice3;
			if (choice3 == 1 or choice3 == 2)break;
			else throw choice3;
		}
		catch (int x) {
			Sleep(1000); system("cls");
			cout << x << "is invaled number please try again \n";
		}
	}


	if (choice3 == 2) { // if 2 -> ( exit ) program finshed 
		cout << "Please pull your card please \n";
		Sleep(100);
	}


	else { // if --> 1
		Sleep(1000); system("cls");


		menuerecursoin();// calling  for menuerecursoin that have the choices 



		int choice5;
		for (int i = 0;; i++) {
			try {
				cin >> choice5;
				if (choice5 == 1 or choice5 == 2 or choice5 == 3)break;
				else throw choice5;
			}
			catch (int x) {
				Sleep(1000); system("cls");
				cout << x << "is invaled number please try again \n";
			}
		}


		// switch for point to choice that has entered and i am  already have taked balance in parameter so that i will send it to function  (Deposit and Withdraw)
		switch (choice5)
		{
		case 1:
			Deposit(usedbala);
			break;
		case 2:
			Withdraw(usedbala);

			break;
		case 3:
			Sleep(2000);
			system("cls");
			cout << "Please pull your card \n";
			Sleep(2000);
			break;
		}
	}

}


// the balnce function that take balance on parameters and after show the balance about account
// and after show the balance about account there is recursoin but for Deposit and Withdraw and Exit   
void balnce(long long balance) {


	Sleep(2000);
	system("cls");
	cout << "The current balance in your account : " << balance << " $" << endl;
	Sleep(5000);





	Sleep(5000);
	int choice3;
	cout << "1)-> to get menu again \n2)-> To EXIT " << endl;
	for (int i = 0;; i++) {
		try {
			cin >> choice3;
			if (choice3 == 1 or choice3 == 2)break;
			else throw choice3;
		}
		catch (int x) {
			Sleep(1000); system("cls");
			cout << x << "is invaled number please try again \n";
		}
	}

	if (choice3 == 2) { // if 2 -> ( exit ) program finshed 
		cout << "Please pull your card please \n";
		Sleep(100);
	}
	else { // if --> 1
		Sleep(1000); system("cls");


		menuerecursoin();// calling  for menuerecursoin that have the choices 



		int choice5;
		for (int i = 0;; i++) {
			try {
				cin >> choice5;
				if (choice5 == 1 or choice5 == 2 or choice5 == 3)break;
				else throw choice5;
			}
			catch (int x) {
				Sleep(1000); system("cls");
				cout << x << "is invaled number please try again \n";
			}
		}


		// switch for point to choice that has entered and i am  already have taked balance in parameter so that i will send it to function  (Deposit and Withdraw)
		switch (choice5)
		{
		case 1:
			Deposit(balance);
			break;
		case 2:
			Withdraw(balance);

			break;
		case 3:
			Sleep(2000);
			system("cls");
			cout << "Please pull your card \n";
			Sleep(2000);
			break;
		}
	}

}




int main() {
	// valriabels of main that usen in program  

	int choise1, choise2;
	//-------------------------------------------------------- for user
	string firstname, lastname, username, ID;
	//-------------------------------------------------------- for ger info from file
	string first, last, id, pass, user, telefon, bala;
	long long usedbala;//to convert 
	//--------------------------------------------------------





	menu1();// to show sign in or login



	for (int i = 0;; i++) {
		try {
			cin >> choise1;
			if (choise1 == 1)break;
			if (choise1 == 2)break;
			else throw choise1;
		}
		catch (int z) {
			Sleep(1000);
			system("cls");
			cout << z << " is invaled number please try again \n";
		}
	}
	Sleep(1000);
	system("cls");




	if (choise1 == 1) {// creat then open new file for acconte
		creatacount(); // calling to function in it i will open new file and finish program after complete th sign in
		Sleep(1000);
		system("cls");
		cout << "Successful account creation" << endl;
		cout << "Thanks for using our bank" << endl;
		system("pause");
		return 0;
	}




	if (choise1 == 2) {
		// take the data to complete login if true take all data from file to ues it
		// else make him try again
		for (int i = 0;; i++) {


			// take the data that i need the file by it and but all of them in  the one variabel 
			cout << "Enter Your First Name Please :"; cin >> firstname;  Sleep(500); system("cls");
			cout << "Enter Your Last Name Please :";  cin >> lastname;   Sleep(500); system("cls");
			cout << "Enter The ID please :";          cin >> ID;         Sleep(500); system("cls");
			username = firstname + lastname + ID;

			// then open the file by this data and get what i need   
			fstream read(username + ".txt", ios::in);
			if (read.is_open()) {

				getline(read, first);
				getline(read, last);
				getline(read, id);
				getline(read, pass);
				getline(read, telefon);
				getline(read, bala);
				user = first + last + id;
			}
			read.close();


			// then check if the file the creatd before or this is wrong data 
			if (username != user) {
				cout << "Data  that you entered is incorrect please try again " << endl;
				Sleep(10000); system("cls");
				string key;
				cout << "press 1 to enter again and any key to exit : "; cin >> key;
				if (key == "1") {
					Sleep(500); system("cls");
					continue;
				}
				else {
					system("pause");
					return 0;
				}
			}
			else break;
		}
	}
	//  if the data is true then continue his proccess    
	/*
	  after finshing loginand take the data from file
	  then caling for main menu
	  and complete the proccess
	 */
	usedbala = stoi(bala);// to cinvet string to numbers

	menu2();


	for (int i = 0;; i++) {
		try {
			cin >> choise2;
			if (choise2 == 1 or choise2 == 2 or choise2 == 3 or choise2 == 4 or choise2 == 5)break;
			else throw choise2;
		}
		catch (int x) {
			Sleep(1000); system("cls");
			cout << x << "is invaled number please try again \n";
		}
	}



	switch (choise2)
	{
	case 1:
		// info that i take form file
		// in the functio there is recoursion   

		info(first, last, id, pass, telefon, usedbala);
		Sleep(1000);
		break;
	case 2:
		//balance  that i take form file and but in bala and convert it to usedbala
		// in the functio there is recoursion   

		balnce(usedbala);
		break;
	case 3:
		// to make him Deposit money to his account 
		// after finshing this proccess the progame finshed 

		Deposit(usedbala);
		break;
	case 4:
		// to make him Withdraw money to his account 
		// after finshing this proccess the progame finshed 

		Withdraw(usedbala);

		break;
	case 5:
		Sleep(2000);
		system("cls");
		cout << "Please pull your card \n";
		Sleep(2000);
		break;
	}
}