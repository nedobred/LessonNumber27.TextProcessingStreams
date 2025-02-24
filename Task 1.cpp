// Дополните свою библиотеку функцией
// реализациями нижеследующих функций:
// int mystrcmp (const char* strl1, const char* str2); 
// функция сравнивает две строки и если строки равны
// возвращает 0, если первая строка больше второй,
// то возвращает 1, иначе - 1.

#include <iostream>

int mystrcmp(const char *strl1, const char *strl2)
{
    if (strlen(strl1) == strlen(strl2))
    {
        return 0;
    }
    
    else if (strlen(strl1) > strlen(strl2))
    {
        return 1;
    }
    else if (strlen(strl1) < strlen(strl2))
    {
        return -1;
    }
}


int main()
{
    
    setlocale(LC_ALL, "");
    int state{ 0 };
    std::cout << "Добро пожаловать в программу сравнения двух строк" << std::endl;
    std::cout << "Введите первую строку" << std::endl;
    char string1[100];
    fgets(string1, sizeof(string1), stdin); // считываем строку в массив string1
    

    std::cout << "Введите вторую строку" << std::endl;
    
    char string2[100];
    fgets(string2, sizeof(string2), stdin); // считываем строку в массив string2
    
    
    state = mystrcmp(string1, string2);

    if (state == 0)
    {
        std::cout << "Функция вернула значение: " << state << " следовательно строки равны!" << std::endl;
    }
    else if (state == 1)
    {
        std::cout << "Функция вернула значение: " << state << " следовательно первая строка больше второй!" << std::endl;
    }
    else if (state == -1)
    {
        std::cout << "Функция вернула значение: " << state << " следовательно вторая строка больше первой!" << std::endl;
    }
    return 0;
}

