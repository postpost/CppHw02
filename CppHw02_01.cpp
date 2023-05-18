#include <iostream>

enum class Months {
	JAN = 1,
	FEB,
	MAR,
	APR,
	MAY,
	JUN,
	JUL,
	AUG,
	SEP,
	OCT,
	NOV,
	DEC
};

int main()
{
	setlocale(LC_ALL, "Russian");
	int month_num = 0;

	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> month_num;
		
		switch (static_cast<Months>(month_num)) {
		case Months:: JAN: 
			std::cout << "Январь" << std:: endl;
			break;
		case Months::FEB:
			std::cout << "Февраль" << std::endl;
			break;
		case Months::MAR:
			std::cout << "Март" << std::endl;
			break;
		case Months::APR:
			std::cout << "Апрель" << std::endl;
			break;
		case Months::MAY:
			std::cout << "Май" << std::endl;
			break;
		case Months::JUN:
			std::cout << "Июнь" << std::endl;
			break;
		case Months::JUL:
			std::cout << "Июль" << std::endl;
			break;
		case Months::AUG:
			std::cout << "Август" << std::endl;
			break;
		case Months::SEP:
			std::cout << "Сентябрь" << std::endl;
			break;
		case Months::OCT:
			std::cout << "Октябрь" << std::endl;
			break;
		case Months::NOV:
			std::cout << "Ноябрь" << std::endl;
			break;
		case Months::DEC:
			std::cout << "Декабрь" << std::endl;
			break;
		case static_cast<Months>(0):
			std::cout << "До свидания" << std::endl; \
				break;
		default: std::cout << "Неправильный номер!" << std::endl;
			break;
		}
	} while (month_num != 0);
	
}
