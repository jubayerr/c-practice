#include <stdio.h>

int main()
{

    typedef struct person
    {
        char name[50];
        int age;
        int weight;
        int height;
    } Person;

    Person demoPerson;

    printf("Your name : ");
    scanf("%s", demoPerson.name);

    printf("Your age : ");
    scanf("%d", &demoPerson.age);

    printf("Your weight : ");
    scanf("%d", &demoPerson.weight);

    printf("Your height : ");
    scanf("%d", &demoPerson.height);

    printf("Your name is: %s\nYou are %d years old\nYour weight is %dcm and height %dkg\n", demoPerson.name, demoPerson.age, demoPerson.weight, demoPerson.height);

    return 0;
}