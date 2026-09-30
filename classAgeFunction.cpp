// wap in c to display class and age of 6 students in the screen where input will be provided through parameter

#include <iostream>
using namespace std;

void classAge(int clss, int age)
{
    printf("So the class is %d and age is %d\n", clss, age);
}

int main()
{
    classAge(10, 20);
    classAge(3, 5);
    classAge(9, 8);
    classAge(8, 10);
    classAge(5, 15);
    classAge(6, 18);
    return 0;
}