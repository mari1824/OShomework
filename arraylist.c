#include <stdio.h>
#include <stdlib.h>
/*Task 3*/

/*Створіть аналог масиву - списку (ArrayList) мови Java. Реалізуйте наступний функціонал:


Додавання елемента в кінець списку - метод add(item);
Вставка елемента в середину списку - метод insert(index, item);
Кількість елементів у масиві - метод size();
Видалення елементів за індексом - метод remove(index);
Зміна значення існуючого елемента - метод set(index, item);
Отримання значення заданого елемента - метод get(index);*/

int main()
{
    int * array;
    int length = 0;
}

int * add (int * arr, int * length, int newNum)
{
    (*length) ++;
    arr = (int *) realloc (arr, (*length) * sizeof(int));
    arr[(*length) - 1] = newNum;
    return arr;
}
int * insert (int *arr, int * length, int newNum, int newPos)
{
    (*length) ++;
    arr = (int *) realloc (arr, (*length) * sizeof(int));
    for(int i = (*length) -1; i >= newPos; i++)
    {
        arr[i] = arr[i - 1];
    }
    arr[newPos] = newNum;
    return arr;
}
int size (int *arr, int *length)
{
    return *length;
}

int * remove (int *arr, int *length, int index)
{
    for(int i = index; i < (*length) - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*length)--;
    arr = (int *) realloc (arr, (*length) *sizeof(int));
    return arr;
}

int * set (int *arr, int *length, int index, int item)
{
    if(index >= (*length))
    {
        return NULL;
    }
    arr[index] = item;
    return arr;
}

int get (int *arr, int *length, int index)
{
    if(index < (*length))
    {
        return NULL;
    }
    return arr[index];
}

