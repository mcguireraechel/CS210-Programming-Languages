#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
//Declare variables to store input
double initial_investment, monthly_deposit, annual_interest, months, years;
//Declare variables to store year end total amount, interest, and year end interest
double total_amount, interest_amount, year_total_interest;


//Display form to user
cout << "********************************\n";
cout << "********** Data Input **********\n";
cout << "Initial Investment Amount: \n";
cout << "Monthly Deposit: \n";
cout << "Annual Interest: \n";
cout << "Number of years: \n";



//Get data from user
cout << "********************************\n";
cout << "********** Data Input **********\n";
cout << "Initial Investment Amount: $";
cin >> initial_investment;
cout << "Monthly Deposit: $";
cin >> monthly_deposit;
cout << "Annual Interest: %";
cin >> annual_interest;
cout << "Number of years: ";
cin >> years;
months = years * 12;



//Set total amount to initial investment to be updated
total_amount = initial_investment;

//Display year data without monthly deposits
cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
cout << "==============================================================\n";
cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
cout << "--------------------------------------------------------------\n";


for (int i = 0; i < years; i++) {

//Calculate yearly interest
interest_amount = (total_amount) * ((annual_interest / 100));

//Calculate year end total
 total_amount= total_amount + interest_amount;

//Print results to table show only two decimal points
cout << (i + 1) << "        " << fixed << setprecision(2) << total_amount << "                    " << interest_amount << "\n";

}

//Set total amount to initial investment to be updated
 total_amount= initial_investment;

//Display year data with monthly deposits
cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
cout << "==============================================================\n";
cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
cout << "--------------------------------------------------------------\n";

for (int i = 0; i < years; i++) {

//Set yearly interest to zero at the start of the year
year_total_interest= 0;

for (int j = 0; j < 12; j++) {

//Calculate monthly interest
interest_amount = (total_amount+ monthly_deposit) * (( annual_interest/ 100) / 12);

//Calculate month end interest
year_total_interest = year_total_interest+ interest_amount;

//Calculate month end total
 total_amount=  total_amount+ monthly_deposit+ interest_amount;

}

//Print results to table showcasing only two decimal points
cout << (i + 1) << "        " << fixed << setprecision(2) << total_amount << "                     " << year_total_interest << "\n";


}

return 0;
}
