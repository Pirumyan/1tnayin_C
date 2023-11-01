#include <stdio.h>
#include<stdlib.h>

struct book
{
    char name[25];
    char after_name[25];
    char after_azg[25];
    int year;
    int uniq_id;
};

int uni()
{
    static int  tiv = 0;
    return ++tiv;
}

struct book * norptr(struct book *arr,int capa)

{  
    arr =realloc(arr,capa * sizeof(struct book));
    return arr;
}

void newbook(struct book *arr, int size )
{   arr[size].uniq_id = uni();
    printf(" Your  id for book %d \n", arr[size].uniq_id);
    printf("Enter name of the book\n");
    scanf(" %s", arr[size].name);
    printf("Write after first name last name\n");
    scanf(" %s %s", arr[size].after_name, arr[size].after_azg);
    printf("Enter year the book\n");
    scanf(" %d", &arr[size].year);
    

}
int gtnel(struct book *arr, int size , int target)
{
    for(int i = 0; i < size; ++i)
    {
        if(arr[i].uniq_id ==  target)
        {
            return i;
        }
    }
    return -1;
}
void tpich( struct book *arr, int index)
{
    printf("The book number : %d\n",arr[index].uniq_id);
    printf(" the name of book\n'%s'\n",arr[index].name);
    printf("author of the book \n %s %s\n",arr[index].after_name,arr[index].after_azg);
    printf(" Year  - %d\n", arr[index].year);
}


int main ()
{   int out = 1;
    int capa = 2;
    int size = 1;

    struct book *ptr =(struct book*)malloc(sizeof(struct book) * capa);
    while(out != 0)
        
        {   
            printf("0 for go out \n");
            printf("1 - for the new book \n");
            printf("2 - for see the book\n");
            scanf(" %d", &out);
            switch (out)
            {
                case 0:
                {   free(ptr);
                    break;
                }
                case 1:
                    ++size;
                    if (size == capa)
                        {
                            capa *= 2;
                           ptr= norptr(ptr,capa);
                        }
                    newbook(ptr,size  - 1);
                    break;
                case 2:
                    {
                        int serch;
                        printf(" Please enter the id which book you want to see\n");
                        scanf(" %d", &serch);
                        serch = gtnel(ptr,size,serch);
                        if(serch == -1)
                        {
                            printf("We don`t have that id book\n");
                            break;
                        }
                        tpich(ptr,serch);
                        break;
                    }
                    
            }
        }
}













