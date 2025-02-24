// Дополните свою библиотеку функцией
// реализациями нижеследующих функций:
// int StringToNumber(char *str); - функция
// конвертирует строку в число и возвращает 
// это число.


#include <iostream>

int StringToNumber(char *str)
{
    int i{ 0 };
    int res{ 0 };
    while (str[i] != '\0')
    {
       res = int(str[i]) + res;
       i++;
    }
    return res;
}


int main()
{
    setlocale(LC_ALL, "");
    int result;
    char str[] = "Hello World";
    
    result = StringToNumber(str);
    std::cout << "\nСтрока \"Hello World\" после конвертации в число = " << result << std::endl;
    return 0;
}

