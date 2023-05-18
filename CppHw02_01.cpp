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
		std::cout << "������� ����� ������: ";
		std::cin >> month_num;
		
		switch (static_cast<Months>(month_num)) {
		case Months:: JAN: 
			std::cout << "������" << std:: endl;
			break;
		case Months::FEB:
			std::cout << "�������" << std::endl;
			break;
		case Months::MAR:
			std::cout << "����" << std::endl;
			break;
		case Months::APR:
			std::cout << "������" << std::endl;
			break;
		case Months::MAY:
			std::cout << "���" << std::endl;
			break;
		case Months::JUN:
			std::cout << "����" << std::endl;
			break;
		case Months::JUL:
			std::cout << "����" << std::endl;
			break;
		case Months::AUG:
			std::cout << "������" << std::endl;
			break;
		case Months::SEP:
			std::cout << "��������" << std::endl;
			break;
		case Months::OCT:
			std::cout << "�������" << std::endl;
			break;
		case Months::NOV:
			std::cout << "������" << std::endl;
			break;
		case Months::DEC:
			std::cout << "�������" << std::endl;
			break;
		case static_cast<Months>(0):
			std::cout << "�� ��������" << std::endl; \
				break;
		default: std::cout << "������������ �����!" << std::endl;
			break;
		}
	} while (month_num != 0);
	
}
