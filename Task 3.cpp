// ��������� ���� ���������� ��������
// ������������ ������������� �������:
// char *NumberToString(int number); - 
// ������� ������������ ����� � ������ 
// � ���������� ��������� �� ��� ������ 

#include <iostream>

char *NumberToString(int number)
{
    char tmp{ };
    tmp = number;
    char *temp = new char;
    *temp = tmp;
    
    return temp;
}


int main()
{
    setlocale(LC_ALL, "");
    char *ch;
    std::cout << "������� ����� � ��������� �� 65 �� 122 ������� ��������� �������������� � ������: ";
    int _number;
    std::cin >> _number;
    ch = NumberToString(_number);
    std::cout << "����� " << _number << " ������������� ������ " << *ch << std::endl;
    return 0;
}