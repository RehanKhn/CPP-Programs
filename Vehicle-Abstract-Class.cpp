#include<iostream>
#include<string>
using namespace std;


class Vehicle {
protected:
	string vehicleName;
	string vehicleModel;
	string vehicleType;
	

public:
	Vehicle() {

	}
	void setVehicleName(string vehicleName) {
		this->vehicleName = vehicleName;
	}
	void setVehicleModel(string vehicleModel) {
		this->vehicleModel = vehicleModel;
	}
	void setVehicleType(string vehicleType) {
		this->vehicleType = vehicleType;
	}
	string getVechileName() {
		return this->vehicleName;
	}
	string getVechileModel() {
		return this->vehicleModel;
	}
	string getVechileType() {
		return this->vehicleType;
	}
	virtual void drive()=0;
	virtual void fuelAmount()=0;
	virtual void applyBreaks()=0;
	~Vehicle() {

	}

};

class Car : public Vehicle {
private:
	int carEngine;
	int carDoors ;
	int carWheels ;
	int fuel;
	
	void setCarEngine(){
		this->carEngine = 1;
	}
	void setCarWheels(){
		this->carWheels = 4;
	}
	void setCarDoors(){
		this->carDoors = 4;
	}
public:
	Car() {

	}
	void setFuel(int fuel){
	    this->fuel = fuel;
	}
	
	int getFuel(){
	    return this->fuel;
	}
	void drive() {
		cout << "Car is started driving."<<endl;
	}

	void fuelAmount() {
		cout << "Car fuel ammount is "<<this->fuel <<"liters. " << endl;
	}

	void applyBreaks() {
		cout << "Car breaks applied." << endl;
	}
	~Car() {

	}
};



class Motorcycle : public Vehicle {
private:

	int motorcycleEngine ;
	int motorcycleWheels ;
	int fuel;
	void setMotorcycleEngine(){
		this->motorcycleEngine = 1;
	}
	void setMotorcycleWheels(){
		this->motorcycleWheels = 2;
	}
public:
	Motorcycle() {

	}
	void setFuel(int fuel){
	    this->fuel = fuel;
	}
	int getFuel(){
	    return this->fuel;
	}
	void drive() {
		cout << "Motorcycle is started driving." << endl;
	}

	void fuelAmount() {
		cout << "Motorcycle fuel ammount is "<<this->fuel <<"liters. "<< endl;
	}

	void applyBreaks() {
		cout << "Motorcycle breaks applied." << endl;
	}
	~Motorcycle() {

	}
};



int main() {
	Car car;
	Motorcycle bike;
	Vehicle* v;
	v = &car;
	v->drive();
	v = &bike;
	v->drive();
	v->applyBreaks();
	v->setVehicleName("Honda");
	cout<<v->getVechileName();
	return 0;
}
