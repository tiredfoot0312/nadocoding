#include <stdio.h>
int main(void)
{
    //integer variable example
    /*int age = 12;
    printf("%d\n", age);
    age = 13;
    printf("%d\n", age);*/

    //real number variable example
    /*float f = 46.5f;
    printf("%.4f\n", f);
    double d = 4.438;
    printf("%.2lf\n", d);*/

    //constant
    /*const int year = 2002;
    printf("Year of birth : %d\n", year);*/

    //printf
    //calculation
    /*int add = 3 + 7;
    printf("3 + 7 = %d\n", add);
    printf("%d + %d = %d\n", 3, 7, 3+7);*/

    //scanf
    //Input form keyboard and save it
    /*int input;
    printf("Input value: ");
    scanf_s("%d", &input);
    printf("Input value: %d\n", input);*/

    /*int one, two, three;
    printf("Input 3 integer: ");
    scanf_s("%d %d %d", &one, &two, &three);
    printf("first value: %d\n", one);
    printf("second value: %d\n", two);
    printf("third value: %d\n", three);*/

    //character(one text), string(texts more than one)
    /*char c = 'A';
    printf("%c\n", c);
    
    char str[256];
    scanf_s("%s", str, sizeof(str));
    printf("%s\n", str);*/

    //project 1
    //police gets informations of criminal
    //name, age, weight, height, crime name
    /*char name[256];
    printf("What's your name?");
    scanf_s("%s", name, sizeof(name));

    int age;
    printf("How old are you?");
    scanf_s("%d", &age);

    float weight;
    printf("What's your weight?");
    scanf_s("%f", &weight);

    double height;
    printf("How tall are you?");
    scanf_s("%lf", &height);

    char crime_name[256];
    printf("What's your crime name?");
    scanf_s("%s", crime_name, sizeof(crime_name));

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Weight: %.2fkg\n", weight);
    printf("Height: %.1lfcm\n", height);
    printf("Crime name: %s\n", crime_name);*/
    return 0;
}