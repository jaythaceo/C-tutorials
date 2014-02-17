/*****************
* sales.cpp
* By: Jason Brooks
* jaythceo@gmail.com
* Feb 17, 2014
*
******************/



#include <iostream>
#include <iomanip>
#include "salesp.h"
using namespace std;


SalesPerson::SalesPerson()
{
	for (int i = 0; i < 12; ++i)
		sales[i] = 0.0;
}

//Function to get 12 sales figures from the user
//at the keyboard
void SalesPerson::getSalesFromUser()
{
	double salesFigure;

	for (int i = 1; i <= 12; ++i)
	{
		cout << "Enter sales amount for the month " << i << ": ";
		cin >> salesFigure;
		setSales(i, salesFigure);
	}
}

//Function to set one of the 12 monthly sales figures.
//Note that the month value must be from 0 to 11.
void SalesPerson::setSales(int month, double amount)
{
	if (month >= 1 & month <= 12 && amount > 0)
		sales[month - 1] = amount;
	else
		cout << "Invalid month or sales figure" << endl;
	
}

//Print the total annual sales
void SalesPerson::printAnnualSales()
{
	cout << setprecision(2)
		 << setiosflags(ios::fixed | ios::showpoint)
		 << "\nThe total annual sales are: "
		 << totalAnnualSales() << endl;
}

//Private utility function to total annual sales
double SalesPerson::totalAnnualSales()
{
	double total = 0.0;

	for (int i = 0; i < 12; ++i)
		total += sales[i];
	
	return total;
}


int main(int argc, char const *argv[])
{
	SalesPerson s;

	s.getSalesFromUser();
	s.printAnnualSales();

	return 0;
}






