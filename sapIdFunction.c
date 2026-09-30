// wap in c using function and parameters to display sapid of seven students

#include <stdio.h>

void studentInfo(int sapId[])
{
    for (int i = 0; i < 7; i++)
        printf("Student %d : %d\n", i + 1, sapId[i]);
}

int main()
{
    int studentSapId[] = {
        100000309,
        100003423,
        100005633,
        100002346,
        100002633,
        100000976,
        100005645,
    };
    studentInfo(studentSapId);
    return 0;
}