#include<stdio.h>

int binarySearch(int arr[], int l, int h, int check) 
{
    if (h >= l)
    {
        int mid = (l+h)/2;
    

       
        if (arr[mid] == check)
        {
            return mid;
        }
        
       else if (arr[mid] > check)
        {
            return binarySearch(arr, l, mid - 1, check);
        }
        else
        {
            return binarySearch(arr, mid + 1, h,check);
        }
    }

}  


int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int check = 10;
    int result = binarySearch(arr, 0, n - 1,check);
    if (result == -1)
    {
        printf("Element is not present in array\n");
    }
    else
    {
        printf("Element is present at index %d\n", result);
    }
    return 0;
}

   