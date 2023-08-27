#include <stdio.h>


int binarySearch(int arr[], int l, int h, int key, int n) {

    int mid = (l + h )/ 2;

    if (arr[mid] == key)
    {
        return mid;
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[mid] > key)
        {
            for (int i = l; i < mid-1; i++)
            {
                mid = (l + (mid-1)) / 2;

                if (arr[mid] == key)
                {
                    return mid;
                }
                
            }
            
        }

        for (int i = mid+1; i < h; i++)
        {
            mid = ((mid+1) + h) / 2;

            if (arr[mid] == key)
            {
                return mid;
            }
        }
        
        
    }
    
    
}


int main() {

    int arr[] = {3, 5, 11, 12, 17};
    int n = 5;
    int l = 1;
    int h = 5;

    int key;
    printf("Enter number to search: ");
    scanf("%d", &key);

    printf("Key found: %d at position: %d", key, binarySearch(arr, l, h, key, n));

    return 0;
}