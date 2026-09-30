// wap in c for 4 employee info
#include <stdio.h>

void employeeInfo(char name[], int age, int id)
{
    printf("%s \t %d \t %d\n", name, age, id);
}

int main()
{
    employeeInfo("Amit", 23, 10001);
    employeeInfo("Ritu", 26, 10002);
    employeeInfo("Raman", 35, 10003);
    employeeInfo("Riku", 36, 10004);
    return 0;
}