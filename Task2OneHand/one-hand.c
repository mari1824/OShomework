#include <stdio.h>
#include <stdlib.h>
/*Task 2

Проект "Однорукий бандит"

Правила є досить вільними, наприклад, в ньому є 
послідовність випадково згенерованих цифр заданої довжини. 
Якщо принаймні одна цифра - сімка, гравцеві повертається його ставка. 
Якщо всі цифри однакові, гравець виграє і його ставка подвоюється, але 
якщо всі цифри - сімки, то ставка потроюється. 
Якщо принаймні одна третина цифр однакові, гравець виграє його ставку.*/
int main()
{
    int length = 10;
    int sequence [length];
    int max = 0;
    int count [10];
    for(int i = 0; i < 10; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < length; i++)
    {
        int num = rand() % 10;
        sequence[i] = num;
        count[num]++;
        if(count[num] > max)
        {
            max = count[num];
        }
    }
    printSequence(sequence, length);
    if(max == length)
    {
        if(count[7] == max)
        {
            printf("Now the player have x3 money\n");    
        }
        else
        {
            printf("Now the player have x2 money\n"); 
        }
    }
    else if (max >= length/3 || count[7] >= 1)
    {
        printf("Now the player have the same amount of money\n"); 
    }
}

void printSequence (int * seq, int lngth)
{
    printf("Sequence: ");
    for(int i = 0; i < lngth; i++)
    {
        printf("%d ", seq[i]);
    }
    printf("\n");
}