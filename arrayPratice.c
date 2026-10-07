#include <stdio.h>

// array is the collection of similar data types ==> int, char, float;
// accessing array 1) indexing 2) pointer
// array cant store multi data types

// indexing
// ==> if we define for 5
// ==> 0 1 2 3 4
// ==>

// hidden pointer jo point karta hai values ko

// num[1]
/*
    vaibhav
    263130 ==> haldwani
    7

    num =>>0
    97823478923
    75
    num ==> 1
    97823478927
    75
    num ==>2
    97823478931
    75
    num ==>3
    97823478935
    75
    num ==> 4
    97823478939
    75


*/

int main()
{
    int num[] = {1, 2, 3, 4, 5}; // length of the array must be known for using in loops
    float numx[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char numc[] = "ranjit";
    // == > string '\0' int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", num[i]);
    }
    i = 0;
    while (num[i] != '\0')
    {
        printf("%d\n", num[i]);
        i++;
    }
    return 0;
}

/// for finding the length of the array of int type sizeof(num)/sizeof(num[0]) ==> length of the array

/// ascii ==> american standard code for information interchange
// ==>> binary ==> hexa ==> position ==> value

// 01010101=> position ==> value
//           ==> 65 ==> A

// 65 == > 100001