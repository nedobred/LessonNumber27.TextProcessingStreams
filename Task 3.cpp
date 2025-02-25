// Дополните свою библиотеку функцией
// реализациями нижеследующих функций:
// char *NumberToString(int number); - 
// функция конвертирует число в строку 
// и возвращает указатель на эту строку 

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
    std::cout << "Введите число в диапазоне от 65 до 122 которое требуется конвертировать в строку: ";
    int _number;
    std::cin >> _number;
    ch = NumberToString(_number);
    std::cout << "Числу " << _number << " соответствует строка " << *ch << std::endl;
    return 0;
}