// ��������� ���� ���������� ��������
// ������������ ������������� �������:
// char *Uppercase(char *strl); - 
// ������� ����������� ������ � ������� 
// ������� 

#include <iostream>

char *Uppercase(char *strl)
{
    int count{0};
    for (int i = 0; i < strlen(strl); i++)
    {
        strl[i];
        count++;
    }
    int *arr = new int[count];
    for (int i = 0; i < strlen(strl); i++)
    {
        arr[i] = strl[i];
        if (arr[i] > 90)
        {
            arr[i] -= 32;
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
    
    std::cout  << Uppercase(ch) << std::endl;
    return 0;
}