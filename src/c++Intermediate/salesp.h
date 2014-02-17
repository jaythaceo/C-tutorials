/*****************
* salesp.h
* By: Jason Brooks
* jaythceo@gmail.com
* Feb 17, 2014
*
******************/

#ifndef SALESP_H
#define SALESP_H


class SalesPerson
{
public:
	SalesPerson();
	void getSalesFromUser();
	void setSales(int, double);

	void printAnnualSales();

private:
	double totalAnnualSales();
	double sales[ 12 ];

};





#endif