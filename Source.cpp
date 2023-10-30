/*#include<iostream>
#include"Elevator.h"
#include"Elevator_Test.h"

using namespace std;


int main()
{
	//унифицированная инициализация объектов
	//коснструктор для класса
	//делегирование конструкторов
	// птуи обращения
	//  
	//статические члены класса переменные и фунции Static Pi(3.14)
	//статическая функция

	Elevator elev{0,100};
	Elevator_Test elev_test{elev};

	elev_test.startAllTest();

	elev.setCurentFloor(10);
	cout << elev.getCurentFloor();

} */


#include<iostream>

using namespace std;

class NewDemo {
	int b;
	int a;
public:
	NewDemo& setB(int b)
	{
		this->b = b;
		return *this; //вызываем обратно. объект возвращается сам себя
	}
	NewDemo& setA(int a)
	{
		this->a = a;
		return *this; //вызываем обратно. объект возвращается сам себя
	}
};


class Demo {

	int e;
	int c;
	int k;

public:
	static int some;
	static void print() {
		cout << "some from fuction    "<<some << endl;
	}
	Demo& setK(int k)
	{
		this->k = k;
		return *this; //вызываем обратно. объект возвращается сам себя
	}
	Demo& setE(int e)
	{
		this->e = e;
		return *this;
	}
	Demo& setC(int c)
	{
		this->c = c;
		return *this;
	}
	
	void showSum()
	{
		cout << c + e + k;
	}

};

int Demo::some = 10;



int main()
{
	

	Demo d1{};
	NewDemo d2{};


	//..Some logic


	d1.setK (123).setC(323).setE(220).showSum();
	d2.setA(111).setB(222);
	
	



	/*cout << "d1.k= " << d1.k << "\td1.some=" << d1.some << endl;
	cout << "d2.k= " << d2.k << endl;
	Demo::print();


	d1.some = 999;
	
	cout << "d1.k= " << d1.k << "\td1.some=" << d1.some << endl;
	cout << "d2.k= " << d2.k << endl;
	Demo::print();


	d2.some = 666;

	cout << "d1.k= " << d1.k << "\td1.some=" << d1.some << endl;
	cout << "d2.k= " << d2.k << endl;
	Demo::print();

	Demo::some = 888;

	cout << "d1.k= " << d1.k << "\td1.some=" << d1.some << endl;
	cout << "d2.k= " << d2.k << endl;
	Demo::print();
	*/


	return 0;
}