
#include <iostream>
#include <string>
#include <ctime>
#include <fstream>  
#include <Windows.h>
#include <typeinfo>
#include <vector>
using namespace std;

class Car
{
public:
	virtual void SearchDistance() = 0;
};

class F1Car : public Car
{
private:
	int distance;
	int speed;
	int time;

public:

	F1Car()
	{
		distance = speed = time = 0;
	}

	F1Car(int speed , int time)
	{
		this->distance = speed*time ;
		this->speed = speed;
		this->time = time;
	}

	void SearchDistance() override
	{
		cout << " Скорость Боллида = " << speed << "\n" "Время = " << time << endl;
		cout << " Дистанция которую проходит Болид " << distance << endl;
	}
};

class F1SecondCar : public Car
{
private:
	int distance;
	int speed;
	int time;

public:

	F1SecondCar()
	{
		distance = speed = time = 0;
	}

	F1SecondCar(int distance , int speed)
	{
		this->distance = distance;
		this->speed = speed;
		this->time = distance / speed;
	}

	void SearchDistance() override
	{
		cout << " Скорость Боллида = " << speed << "\n" "Растояние = " << distance << endl;
		cout << " Время за которое проходит Болид " << time << endl;
	}
};

class F1ThirdCar : public Car
{
private:
	int distance;
	int speed;
	int time;

public:

	F1ThirdCar()
	{
		distance = speed = time = 0;
	}

	F1ThirdCar(int distance, int time)
	{
		this->distance = distance;
		this->speed = distance / time;
		this->time = time;
	}

	void SearchDistance() override
	{
		cout << " Время болида = " << time << "\n" " Растояние = " << distance << endl;
		cout << " Скорость Боллида " << speed << endl;
	}
};




int main()
{
	setlocale(LC_ALL, "ru");
	F1Car car(150,15);
	car.SearchDistance();
	cout << endl;

	F1SecondCar secondcar(2000, 200);
	secondcar.SearchDistance();
	cout << endl;

	F1ThirdCar thirdcar(3000, 30);
	thirdcar.SearchDistance();
	cout << endl;

	return 0;
}