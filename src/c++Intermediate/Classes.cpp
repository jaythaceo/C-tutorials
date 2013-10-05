#include <iostream>
#include <string>
using namespace std;


/* starting class vehicle */
class vehicle
{
public:
	//constructor
	vehicle(){cout << "\n\tBuilding a vehicle";}
	~vehicle(){cout << "\n\tDestroying the vehicle\n";}

	//Member methods
	void Rampage (){cout << "\n\tVehicle is Rampaging thru the city";}

	void displayStats()
	{
		cout <<"\n\t---------vehicle Stats---------";
		cout <<"\n\tName: " << vehicleName;
		cout <<"\n\tLife: " << life;
		cout <<"\n\tSize: " << size;
		cout <<"\n\tWeight: " << weight;
		cout <<"\n\t-------------------------------";


	}
	//Accessor methods
	int getLife(){return life;}
	void setLife(int x){life =x;}
	double getSize(){return size;}
	void setSize(double x){size =x;}
	double getWeight(){return weight;}
	void setWeight(double x){weight =x;}
	string getvehicleName(){return vehicleName;}
	void setvehicleName(string x){vehicleName =x;}

		// protected data // 
private:
	int life;
	double size;
	double weight;
	string vehicleName;
};

		// next class on travel 
class travel
{
public:
	travel(){cout << "\n\tWhere we travel daily";}
	~travel(){cout << "\n\tEnding the daily travel\n";}

	void driving(){cout << "\n\tOur vehicle is traveling thru the city";}

	void displayTravel()
	{
		cout <<"\n\t---------Travel Stats---------";
		cout <<"\n\tDays: " << days;
		cout <<"\n\tMiles: "<< miles;
		cout <<"\n\tHours: "<< hours;
		cout <<"\n\tPLaces: "<<places;
		cout <<"\n\t------------------------------";

	}

		//Accessor methods
	int getDays(){return days;}
	void setDays(int x){days = x;}
	double getMiles(){return miles;}
	void setMiles(double x){miles = x;}
	double getHours(){return hours;}
	void setHours(double x){hours = x;}
	int getPlaces(){return places;}
	void setPLaces(int x){places = x;}

	private:
		int days;
		double miles;
		double hours;
		int places;
};

int main(int argc, char const *argv[])
{
		// object vehicle is now car
	vehicle car;
	car.setLife(5);
	car.setSize(14.5);
	car.setWeight(2.8);
	car.setvehicleName("Kit");

	
	car.displayStats();

		// object travel is my day
	travel myDay;
	myDay.setDays(7);
	myDay.setMiles(33.4);
	myDay.setHours(3.8);
	myDay.setPLaces(5);
	myDay.displayTravel();







	return 0;
}










