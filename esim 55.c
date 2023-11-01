#include <stdio.h>
#include <stdlib.h>

struct data
{
    int or;
    int amis;
    int yars;
};

struct person
{
    int uniq;
    char name[20];
    char azg[25];
    struct data day;
};

int uniq_id()
{
    static int id = 0;
    return ++id;
}

struct person *newptr(struct person *arr, int size)
{
    arr = realloc(arr, sizeof(struct person) * (size + 1));
    return arr;
}

void input(struct person *ptr, int size)
{
    ptr[size].uniq = uniq_id();
    printf("This is your -->%d<-- personal id\n", ptr[size].uniq);
    printf("Please Enter your first and last names\n");
    scanf("%s %s", ptr[size].name, ptr[size].azg);
    printf("Write day of your birthday\n");
    scanf("%d", &ptr[size].day.or);
    printf("Write month (1-12) of your birthday\n");
    scanf("%d", &ptr[size].day.amis);
    printf("Write your year of your birthday\n");
    scanf("%d", &ptr[size].day.yars);
}

void bubble_sort(struct person *ptr, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (ptr[j].day.yars < ptr[j + 1].day.yars)
            {
                struct person temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}

void bubble_sort_old(struct person *ptr, int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (ptr[j].day.yars > ptr[j + 1].day.yars)
            {
                struct person temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}

int hima_tariq(struct person *arr, int index)
{
    int this_or = 21;
    int this_amis = 10;
    int this_year = 2023;
    int last_year = 2022;
    if(this_amis < arr[index].day.amis)
    {
        return last_year - arr[index].day.yars;
    }
    else if(this_amis == arr[index].day.amis)
    {
        if(this_or < arr[index].day.or)
        {
            return last_year - arr[index].day.yars;
        }
        return this_year - arr[index].day.yars;
    }
    return this_year - arr[index].day.yars;
}



void show_sort(struct person *arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        
        printf("Unique ID:-->  %d\n", arr[i].uniq);
        printf("Name: %s %s\n", arr[i].name, arr[i].azg);
        printf("Birthday: %d/%d/%d(now  %d years old)\n", arr[i].day.or, arr[i].day.amis,
        arr[i].day.yars,hima_tariq(arr,i));
        printf("\n");
    }
}

int gtnel(struct person *arr, int size, int target)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i].uniq == target)
        {
            return i;
        }
    }
    return -1; // Return -1 if target is not found
}
void mi_hogi(struct person *arr, int size)
{
        printf("Unique ID:-->  %d\n", arr[size].uniq);
        printf("Name: %s %s\n", arr[size].name, arr[size].azg);
        printf("Birthday: %d/%d/%d(now  %d years old)\n", arr[size].day.or, arr[size].day.amis,
        arr[size].day.yars,hima_tariq(arr,size));
        printf("\n");
}

void show_sort_whitoutbidza(struct person *arr, int size)
{   int bidza_year = 63;
    for (int i = 0; i < size; ++i)
    {
        if(hima_tariq(arr,i) >= bidza_year)
        {
            continue;
        }
        printf("Unique ID:-->  %d\n", arr[i].uniq);
        printf("Name: %s %s\n", arr[i].name, arr[i].azg);
        printf("Birthday: %d/%d/%d(now  %d years old)\n", arr[i].day.or, arr[i].day.amis,
        arr[i].day.yars,hima_tariq(arr,i));
        printf("\n");
    }
}
int main()
{
    int capa = 1;
    int out = 1;
    int first = 0;
    struct person *ptr = (struct person *)malloc(capa * sizeof(struct person));

    while (out != 0)
    {
        ++first;
        printf("1 - for add a new person\n");
        printf("2 - for see people sorted by birth year\n");
        printf("3 - for show the oldest person\n");
        printf("4 - for see one person data\n");
        printf("5 -  to see guys without bidza < 63\n");
        printf("0 - for exit\n");
        scanf("%d", &out);

        switch (out)
        {
        case 1:
            if (first == 1)
            {
                input(ptr, capa - 1);
                break;
            }
            else
            {
                ++capa;
                ptr = newptr(ptr, capa);
                input(ptr, capa - 1);
                break;
            }

        case 2:
            bubble_sort(ptr, capa);
            show_sort(ptr, capa);
            break;

        case 3:
            bubble_sort_old(ptr, capa);
            show_sort(ptr, 1); 
            break;

        case 4:
        {
            int man;
            printf("Write person id\n");
            scanf(" %d", &man);
            man = gtnel(ptr,capa,man);
            if(man == -1)
                        {
                            printf("We don`t have that id contact\n");
                            break;
                        }
            mi_hogi(ptr,man);
            break;
        }
        case 5:
        {
            printf("This is the Guys  < 63 years old \n");
            show_sort_whitoutbidza(ptr,capa);
        }    

        case 0:
            break;

        default:
            printf("Invalid option. Please choose a valid option.\n");
        }
    }

    free(ptr);
    return 0;
}
