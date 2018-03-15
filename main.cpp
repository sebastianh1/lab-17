# lab-17
/******************************************************************************
* AUTHORS    : Chris Burrell & Sebastian Hooshmand
* STUDENT ID : 1047448
* LAB #17    : Flo's Party Planner
* CLASS      : CS1A
* SECTION    : MW: 8am
* DUE DATE   : 3/26/18
*******************************************************************************/

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

/******************************************************************************
 * Party Planner
 *-----------------------------------------------------------------------------
 *	This program will output which snack and beverage will be served to their
 *		friend
 *-----------------------------------------------------------------------------
 * INPUT:
 *    name : Guest's name
 *    age  : Guest's age
 *    choc : If they like chocolate
 *    nuts : If they like nuts
 *
 * OUTPUT:
 * 	  Guest's name, snack and drink
 *****************************************************************************/
int main()
{
	/**************************************************************************
	 * CONSTANTS
	 * ------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * ------------------------------------------------------------------------
	 * PROGRAMMERS : Programmer's name
	 * CLASS      : Student's Course
	 * SECTION    : Class Days and Times
	 * LAB_NUM    : Lab Number (specific to this lab)
	 * LAB_NAME   : Title of the Lab
	 *************************************************************************/
	const char PROGRAMMERS [] = "Chris Burrell & Sebastian Hooshmand";
	const char CLASS[]        = "CS1A";
	const char SECTION []     = "MW: 8am-11:50am";
	const int  LAB_NUM        = 17;
	const char LAB_NAME[]     = "Flo's Party Planner";
	const int  OUT_WIDTH      = 30;
	const int  MAX_NAME       = 25;


	// variable declarations
	char name[MAX_NAME];
    int  age;
    char choc;
    char nuts;
    int  guestCount;
    int  skittleCount   = 0;
    int  mmCount        = 0;
	int  peanutMmCount  = 0;
	int  juiceCount     = 0;
    int  sodaCount      = 0;
	int  wineCount      = 0;
	char snack[20];
	char drink[20];
	char skittles;




	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMERS << endl;
	cout << "*  "      << setw(14) << "CLASS"     << ": " << CLASS    << endl;
	cout << "*  "      << setw(14) << "SECTION"   << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM     << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/**************************************************************************
	 * INPUT - read's in the name and age of the user, and if they like
	 * chocolate and nuts
	 *************************************************************************/
	cout << left;

	cout << " Welcome Florence! Please input your guest's names, ages, and "
			"preferences!";


	for(guestCount = 1; guestCount < 13; guestCount = guestCount +1)
	{

		cout << endl;
		cout << endl;
		cout << "Guest " << '#' << guestCount << ':' << endl;
		cout << setw(OUT_WIDTH) << "What is your friend\'s name?";
		cin.getline(name, MAX_NAME);

		cout << setw(OUT_WIDTH) << "How old is your friend?";
		cin  >> age;

		cin.ignore(1000,'\n');

		cout << setw(OUT_WIDTH) << "Do they like chocolate (Y/N)?";
		cin.get(choc);


		cin.ignore(1000,'\n');


		if(choc == 'Y')
		{
			cout << setw(OUT_WIDTH) << "Do they like nuts (Y/N)? ";
			cin.get(nuts);
			cin.ignore(1000,'\n');
		}

		cout << endl;




		/**********************************************************************
		 * PROCESSING - <none>
		 *********************************************************************/



		/**********************************************************************
		* OUTPUT - User's snack and drink
		**********************************************************************/

		if(age >= 21)
	   {
		  if(choc == 'Y')
		  {
			  if(nuts == 'Y')
			  {
				  strncpy(snack, "Peanut M & M's", 20);
				  strncpy(drink, "wine", 20);
				  cout << "You should serve ";
				  cout << name << snack <<  "and " << drink << '.';

			  }
			  else
			  {
				  strncpy(snack, "M & M's", 20);
				  strncpy(drink, "wine", 20);
				  cout << "You should serve ";
				  cout << name << snack << "and " << drink << '.';

			  }
		   }
		   else
		   {
			   strncpy(snack, "Skittles", 20);
			   strncpy(drink, "wine", 20);
			   cout << "You should serve ";
			   cout <<name << snack << "and " << drink << '.';
		   }
	   }
	   else if(age>5)
	   {

		   if(choc == 'Y')
		   {
			   if(nuts == 'Y')
			   {
				   strncpy(snack, "Peanut M & M's", 20);
				   strncpy(drink, "soda", 20);
 				   cout << "You should serve ";
 				   cout << name << snack << "and " << drink << '.';
			   }
			   else
			   {
				   strncpy(snack, "M & M's", 20);
				   strncpy(drink, "soda", 20);
				   cout << "You should serve ";
				   cout << name << snack << "and " << drink << '.';
			   }
			}
			else
			{

				strncpy(snack, "Skittles", 20);
				strncpy(drink, "soda", 20);
				cout << "You should serve ";
				cout << name << snack << "and " << drink << '.';
			}


	   }
	   else
	   {

			if(choc == 'Y')
			{
				if(nuts == 'Y')
				{
				  strncpy(snack, "Peanut M & M's", 20);
				  strncpy(drink, "juice", 20);
				  cout << "You should serve " << name;
				  cout << snack << "and " << drink << '.';
				}
				else
				{
					strncpy(snack, "M & M's", 20);
					strncpy(drink, "juice", 20);
					cout << "You should serve ";
					cout << name << snack << "and " << drink << '.';
				}
			}
			else
			{
				strncpy(snack, "Skittles", 20);
				strncpy(drink, "juice", 20);
				cout << "You should serve " <<
				cout << name << snack << "and " << drink << '.';
			}

		}



			if (strncmp(snack,skittles)==0)
			{
				skittleCount = skittleCount + 1;
			}
				else if (snack == "M & M's")
		    {
				mmCount = mmCount + 1;
		    }
		    else (snack == "Peanut M & M's")
			{
				 peanutMmCount = peanutMmCount + 1;
}

   }// end FOR


	cout << left;
	cout << endl;
	cout << endl << "There are:" << endl;
	cout << skittleCount << " servings of Skittles" << endl;
	cout << mmCount << " servings of M & M's" << endl;
	cout << peanutMmCount << " servings of Peanut M & M's";
	cout << endl;
	cout << sodaCount << " servings of soda" << endl;
	cout << juiceCount << " servings of juice" << endl;
	cout << wineCount << " servings of wine";
	cout << endl << endl;
	cout << "Florence needs to purchase:" << endl;
	cout << right;
	cout << "BAGS" << setw(10) << "SNACK" << endl;
	cout << "----" << setw(10) << "-----" << endl;















   return 0;
}
