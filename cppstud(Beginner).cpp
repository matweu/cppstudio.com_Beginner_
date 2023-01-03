// cppstud(Beginner).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <string>
#pragma hdrstop
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    //
    //Уровень Begginer

    //Решение 1 задачи с сайта sppstudio.com(Вывод:Компилятор выписывает в cout первую цифру после запятой в остатке)
    /*int num;
    cout << "Please setup the number:";
    cin >> num;

    if (num <= 0 && 99999 >= num)
    {
        cout << " Numer, whick you introduced not five-digit";
    }
    else
    {

        cout << " THe number 1:" << (num / 10000) << endl;
        cout << " THe number 2:" << (num / 1000) % 10 << endl;
        cout << " THe number 3:" << (num / 100) % 10 << endl;
        cout << " THe number 4:" << (num / 10) % 10 << endl;
        cout << " THe number 5:" << (num % 10) << endl;

    }
    */
    //Решение 2 задачи с cppstudio.com
    /*int a, b, f;
    cout << "Enter a: "; cin >> a;
    cout << "Enter b: "; cin >> b;
    cout << "Enter f: "; cin >> f;
    cout << "a= "<< a << '\n';
    cout << "b= "<< b << '\n';
    cout << "f= "<< f << '\n';
    cout << "Calculate by the formul: x=" << (a + b - (f / a)) + f * a * a - (a + b) << endl;
    cout << "x = " << (a + b - (f / a)) + f * a * a - (a + b);
      */
      //Решение 3 задачи с cppstudio.com(Вывод: Между Верхним и нижним регистром растояние в 32 символа)
      /*char str;
      cout << "Enter the char: "; cin >> str;
      cout << str << endl;
      cout << "Transform to he High registor: ";
      cout << char(str - 32);
      */
      //Рещение 4 задачи с cppstudio.com
      /*double mt;
       cout << "Enter the meters: "; cin >> mt;
       cout << "You ride: " << mt / 1000 << " kilometers";
       */
       //Решение 5 задачи с cppstudio.com (Вывод: В Плюсах я неплохо рисую XD)
      /* int arr[2][9] = {{201,203,203,203,203,203,203,203,187}, {200,202,202,202,202,202,202,202,188}};
       for (int i = 0; i < 2 ; i++)
       {
           for (int j = 0; j < 9 ; j++)
           {
               cout << char(arr[i][j]);
           }
           cout << endl;
       }
       return 0;
       */
       //Решение задчи 6 с cppstudio.com(Вывод: Не надо выдумать, здесь можно сделать все намного легче)
    /*
           cout << "t   House:nn" << endl;
           cout << "t     / "<<char(92)<<"\n";
           cout << "t    /   " << char(92) << "\n";
           cout << "t   /     " << char(92) << "\n";
           cout << "t  /-------" << char(92) << "\n";
           cout << "t / |    |  " << char(92) << "\n";
           cout << "t   |    | \n";
           cout << "t   |    | \n";
           cout << "t   |____| \n";
    */
    //Решение задачи 7 с cppstudio.com(Вывод: опять все усложнил,можно сделать было легче, через cout)
   /* int i, g;
    int huges = 24;
    const int param = huges + 1;
    for (i = 0; i < param ;i++)
    {
        g = huges - i;
        while (g !=huges)
        {
            cout << "*";
            g++;
            if (g == huges)
            {
                cout << endl;
            }
        }

    }
    */

    // Решение задачи 8 с cppstudio.com
    /*string firstname, secondname, middlename, group, number;
    int a,b,c;
    int min = 30;
    cout << "Введите Фамилию студента:"; cin >> secondname;
    cout << "Введите Имя студента:"; cin >> firstname;
    cout << "Введите Отчество студента:"; cin >> middlename;
    cout << "Введите Группу студента:"; cin >> group;
    cout << "Введите Номер Лабораторной работы:"; cin >> number;
    cout << endl;
    a = firstname.length() + secondname.length() + middlename.length() + 4;
    b = group.length() + 23;
    c = number.length() + 23;
    if (a > min)
    {
        min = a;
    }
    if (b > min)
    {
        min = b;
    }
    if (c > min)
    {
        min = c;
    }
    min = min + 2;
    cout << "\t" << "\t" << "\t";
    for (int i = 0; i < min; i++)
    {
        cout << "*";
    }
    cout << endl;
    cout << "\t" << "\t" << "\t" << "* " << "Лабораторная работа №" << number;
    for (int i = 0; i < (min-23-number.length()-1); i++)
    {
        cout <<" ";
    }
    cout << "*";
    cout << endl;
    cout << "\t" << "\t" << "\t" << "* " <<"Выполнил(а): ст. гр. " << group;
    for (int i = 0; i < (min-23-group.length()-1); i++)
    {
        cout << " ";
    }
    cout << "*";
    cout << endl;
    cout << "\t" << "\t" << "\t" << "* " << secondname << " " << firstname << " " << middlename;
    for (int i = 0; i < (min - firstname.length() - secondname.length() - middlename.length() - 4 - 1); i++)
    {
        cout << " ";
    }
    cout << "*";
    cout << endl;
    cout << "\t" << "\t" << "\t";
    for (int i = 0; i < min; i++)
    {
        cout << "*";
    }
    */
    //Решение задачи 9 с cppstudoi.com
    /*double a, b;
    cout << " Enter Number(1): "; cin >> a;
    cout << " Enter Number(2): "; cin >> b;
    if (a > b)
        {
        cout << "Number(1) " << a << " more " << "Number(2) " << b;
        }
    else
    {
        if (a < b)
        {
            cout << "Number(1) " << a << " less  " << "Number(2) " << b;
        }
    }
    if (a == b)
    {
        cout << "Number(1) " << a << " equally  " << "Number(2) " << b;

    }

    */
    // Решение 10 задачи с cppstudio.com
    int a;
    bool flag = false;
    cout << "Введите количество чисел: "; cin >> a;
    int* arr = new int[a];
    for (int i = 0; i < a; i++)
    {
        cout << "Enter Arr[" << i << "]= "; cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "\n";
        for (int k = 0; k < a; k++)
        {
            arr[k] = arr[k] + 5;
            cout << "Modifided Arr[" << k << "]= " << arr[k] << endl;
        }
    }
    else
    {
        cout << "Одинаковых чисел не введено, массив остался без изменений:" << endl;

        for (int i = 0; i < a; i++)
        {
            cout << "Arr[" << i << "] = " << arr[i] << endl;
        }
    }
    delete[] arr;



    return(0);
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
