#include <stdio.h>


void selection_sort(int arr[],int n)

{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\n\n\nThe sorted array is:");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);
    }
}
int main()
{
    int i, n;

    printf("Enter the number of element:- ");
    scanf("%d", &n);

    int arr[n], l, h, mid, check = 0, num;

    
    for (i = 0; i < n; i++)
    {
        printf("Enter the number:- ");
        scanf("%d", &arr[i]);
    }

    printf("\n\n\nThe unsorted array is:");

    for (i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }

    selection_sort(arr,n);
    printf("\nEnter the number of search:- \n");
    scanf("%d", &num);
    l = 0;
    h = n-1;
    mid = (l + h) / 2;

    while (l <= h)
    {
        
        if (arr[mid] == num)
        {
            check = 1;
            break;
        }
        else if (arr[mid] < num)
        {
            l = mid + 1;
        }
        else if (arr[mid] > num)
        {                                                     
            h = mid - 1;
        }
         mid = (l + h) / 2;
    }

    if (check == 1)
    {
        printf("this element position:- %d", mid + 1);
    }
    else
    {
        printf("this is not element in array");
    }
}
