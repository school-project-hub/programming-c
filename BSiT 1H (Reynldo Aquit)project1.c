#include <stdio.h>
#define MAX_SIZE 100000

int main()

{
void searchelement();
void deletefunc();
void enternumber();
void menu();

char ren;

printf("\t\t\t\tmenu\n");
printf("A = Add\n");
printf("B = Search\n");
printf("C = Update\n");
printf("D = Delete\n");
printf("E = Sort ascending\n");
printf("F = display array\n");
printf("M = Menu\n");
printf("X = Exit\n");

printf("\n\n\tENTER YOUR CHOICE : ");
    do
    {
scanf("%c",&ren);

switch (ren)
{
 case 'A':
 case 'a':
     {
int en[MAX_SIZE];
int i,j; //loop
int c;//size of an array
int tmp;
int pos;
int position,element;

                    printf("enter size of an array...\n");
                    scanf("%d",&c);
                    enternumber(&en, c);
                    break;

 case 'B':
 case 'b':
                    printf("SEARCH\n");
                    searchelement(&en,c);
                    break;


 case 'C':
 case 'c':
                    printf("UPDATE\n");
    printf("enter element to be inserted : ");
    scanf("%d",&element);
    printf("enter position of array : ");
    scanf("%d",&position);
    i=c-1;

    while (position<=i)
    {
        en[i+1]=en[i];
        i--;
    }
    en[position]=element;
    c++;

    printf("array after insertion ...\n");
       for(i = 0 ; i < c ; i++)
            {
            printf("%5d",en[i]);
            }
                    break;

 case 'D':
 case 'd':
                     //c=c+1;
                for (i=0; i<c; i++)
                    {
                    printf("%5d",en[i]);
                    }
        printf("\nenter position to delete : ");
        scanf("%d",&pos);

if (pos>= c)
        {
        printf("\ndeletion not possible\n\n");
        }
    else
    {
            c=c-1;
        for (i=pos; i<c; i++)
            {
            en[i]=en[i+1];
            }
    }
    printf("resultant array:\n\n");
        for (i=0; i<c; i++)
        {
        printf("%5d",en[i]);
        }

                    break;
 case 'E':
 case 'e':
                    printf("\nSORT by ascending\n\n");
    //c=c+1;
for (i=0; i<c; i++)
{
    for (j=i+1; j<c; j++)
    {
        if (*(en+i)> *(en+j))
        {
        tmp= *(en+i);
        *(en+i) = *(en+j);
        *(en+j) = tmp;
        }
    }
}
    for (i=0; i<c; i++)
    {
    printf("%5d",*(en+i));
    }
                    break;

 case 'F':
 case 'f':
                    printf("\nDISPLAY ARRAY\n\n");
                //c=c+1;
           for (i=0; i<c; i++)
       {
        printf("element [%d] at index [%d]\n",en[i],i);
       }
                    break;

 case 'M':
 case 'm':
                    menu ();
                    break;

 case 'X':
 case 'x':
                    return(0);

 default:
   printf("\n\n\tENTER YOUR next CHOICE : ");
     }
}
}while (ren!='x');
return(0);

}
//case A
void enternumber(int *en, int c)
{
    int i;

        printf("ENTER NUMBER(s):\n");
    for (i=0; i<c; i++)
    {
    scanf("%d",en+i);
    }
                        printf("---DONE---\n");
                    for (i=0; i<c; i++)
                    {
                        printf("%5d",*(en+i));
                    }
}

//case B
void searchelement (int *arr,int n)
{
    int search,i,a=0;
    printf("\nenter element to be searched : ");
    scanf("%d",&search);

    for (i=0; i<n; i++)
    {
            if (search==arr[i])
        {
            printf("element %d found at index %d\n",search,i+0);
             a++;
        }
    }
        if  (a == 0)
        {
        printf("\nelement %d not found\n",search);
        }
                    printf("\nelement %d is present %d times in array\n",search,a);
}

//case M
void menu ()
{
printf("\t\t\t\tmenu\n");
printf("A = Add\n");
printf("B = Search\n");
printf("C = Update\n");
printf("D = Delete\n");
printf("E = Sort ascending\n");
printf("F = display array\n");
printf("M = Menu\n");
printf("X = Exit\n");
}
