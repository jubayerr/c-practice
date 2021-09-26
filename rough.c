#include <stdio.h>

typedef struct person
{
    char name[50];
    int age;
    int weight;
    int height;
} Person;

void fileIOTest()
{
    FILE *inputFile = fopen("inpfile.txt", "r");

    if (inputFile != NULL)
    {
        FILE *outFile = fopen("outFile.txt", "w");

        if (outFile != NULL)
        {
            // data read and write

            Person demoPerson;

            fscanf(inputFile, "%s", demoPerson.name);
            fscanf(inputFile, "%d", &demoPerson.age);
            fscanf(inputFile, "%d", &demoPerson.weight);
            fscanf(inputFile, "%d", &demoPerson.height);

            fprintf(outFile, "Name: %s\nAge: %d\nWeight : %d\nHeight: %d\n", demoPerson.name, demoPerson.age, demoPerson.weight, demoPerson.height);

            fclose(outFile);
        }
        else
        {
            printf("file not found!");
        }
        fclose(inputFile);
    }
}

int main()
{

    fileIOTest();

    printf("hello");

    return 0;
}