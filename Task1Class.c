#include <stdio.h>
#include <stdlib.h>

/*Завдання 1

написати невеликий консольний ддаток котрий дозволяє створити 
невелику колекцію студентів та потім переглянути

How many students are in your group -> 
<Your input>

Enter name -> 
Enter surname -> 
Enter age -> 
</>
</>

Press </> and you will be able to check all students*/

typedef struct Student
{
    char name[20];
    char surname[20];
    int age;
} student;

int main()
{
    int num;
    char ch;
    printf("How many students are in your group ->");
    scanf("%d", &num);
    student *students = (student *)malloc(num * sizeof(student));
    for (int i = 0; i < num; i++)
    {
        printf("Enter name -> ");
        scanf("%s", students[i].name);
        printf("Enter surname -> ");
        scanf("%s", students[i].surname);
        printf("Enter age -> ");
        scanf("%d", &(students[i].age));
    }
    printf("Press </> and you will be able to check all students\n");
    while (1)
    {
        if (getc(stdin) == (int)'/')
        {
            for (int i = 0; i < num; i++)
            {
                printStudent(students[i]);
            }
            break;
        }
    }
    printf("Finished");
}

void printStudent(student st)
{
    printf("%s %s (%d)\n", st.name, st.surname, st.age);
}