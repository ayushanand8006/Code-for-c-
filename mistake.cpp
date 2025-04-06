#include <stdio.h>
#include<conio.h>
void main()
{
    int arr[100]; 
    int size;  
    int i, j, k;      
clrscr();
   
    printf("Enter size of the array : ");
    scanf("%d", &size);
    for(i=0; i<size; i++)
    {
    printf("Enter %d elements in array : ",i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
               
                for(k=j; k < size - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }            
                size--;
               j--;
            }
        }
    }
    printf("\n Array elements after deleting duplicates : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }

    getch();
}
 