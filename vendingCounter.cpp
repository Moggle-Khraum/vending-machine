using namespace std;

#include <iostream>

#include "counter.h"



int main(){

int ordernum, quantity;

char choice;

string order;

int money=0,pay,change;

system("cls");

{

	dta:
		MaVEND vendy;

		vendy.orderMenu();

		MaVEND ven;

		do{

		cout << "\nPayment first before Order: P";

		cin  >> pay; 

		cout << "\nSelect your choice: ";

		cin  >> ordernum;

		cout << "\nEnter the Quantity : ";

		cin  >> quantity;

		

		switch(ordernum)

		{

		case 1:

			order = " Apple Juice ";

			money = quantity * 10;

			break;

			

		case 2:

			order = " Orange Juice ";

			money = quantity * 12;

			break;

			

		case 3:

			order = " Mango Lassi ";

			money = quantity * 15;

			break;

			

		case 4:

			order = " Fruit Punch ";

			money = quantity * 15;

			break;

			

		case 5:

			order = " Leave ";

			ven.out();

			break;

				

			default:

			ven.error();

			goto dta;

			break;

		}

		

	if (pay < money ){

		cout << " \nSorry, Insufficient money... ";

		cout << "\nRefunded Money:" <<pay <<" pesos";

		goto dta;

	}

	else

	{

	cout << "\n\n Your order: ";

	cout << quantity << "Qty:" << order <<endl;

	cout << " Total amount: " << money << "pesos\n"; 

	change = pay - money;

	cout << " Change: " <<change;

	}

	

	cout<<"\n"<< "Order again?[N]/[Y]: ";

	cin>>choice;	

		}

		while(choice == 'Y'|| choice != 'y' || choice != 'Y' || choice == 'y');

		cout <<" Out of Order.....\n";

		return 0;

	

		}		

	}


