// Дополните свою библиотеку функцией
// реализациями нижеследующих функций:
// char *Lowercase(char *strl); - 
// функция преобразует строку в нижний 
// регистр 

#include <iostream>

char *Lowercase(char *strl)
{
    int count{ 0 };
    for (int i = 0; i < strlen(strl); i++)
    {
        strl[i];
        count++;
    }
    int *arr = new int[count];
    for (int i = 0; i < strlen(strl); i++)
    {
        arr[i] = strl[i];
        if (arr[i] < 90 && arr[i] > 40)
        {
            arr[i] += 32;
        }
    }
    for (int i = 0; i < strlen(strl); i++)
    {
        strl[i] = arr[i];
    }
    return strl;
}


int main()
{
    setlocale(LC_ALL, "");
    char ch[] = "Hello world";

    std::cout << Lowercase(ch) << std::endl;
    return 0;
}