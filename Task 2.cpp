// ��������� ���� ���������� ��������
// ������������ ������������� �������:
// int StringToNumber(char *str); - �������
// ������������ ������ � ����� � ���������� 
// ��� �����.


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
    std::cout << "\n������ \"Hello World\" ����� ����������� � ����� = " << result << std::endl;
    return 0;
}

