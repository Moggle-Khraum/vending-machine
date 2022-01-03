#ifndef counter_h

#define counter_h

#include <iostream>

using namespace std;





class MaVEND {

	public:
		void orderMenu();

		void error();

		void out();

};



void MaVEND::orderMenu(){

	cout << "\n\n";

	cout << "\n#####################################";

	cout << "\n# Beverage Vending Machine #  Price #";

	cout << "\n#####################################";

	cout << "\n# 1. Apple Juice           #  10$   #";

	cout << "\n# 2. Orange Juice          #  12$   #";

	cout << "\n# 3. Mango Lassi           #  15$   #";

	cout << "\n# 4. Fruit Punch           #  18$   #";

	cout << "\n# 5. Leave                 #        #";

	cout << "\n#####################################\n";

	

}



void MaVEND::out()

{

	cout<< "\nType [Y] to exit "<< endl;

	

}



void MaVEND::error()

{

	cout << "\nSelection Error!!" <<endl;

	

}









#endif
