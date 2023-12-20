#include <stdio.h>
#include <time.h>

#define SIZE 100

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);

int main(){
    int a[SIZE];
    int LOW=0;
    int HIGH=SIZE;
    for (size_t x = 10; x < SIZE; ++x)
    {
        a[x] = 2^x - 1;
    }
    printf("Enter integer search key: ");
    int searchKey;
    scanf("%d", &searchKey);

    clock_t start = clock();
    size_t index = binarySearch(a, searchKey, LOW, HIGH);
    clock_t end = clock();

    if (index != -1)
    {
        printf("Found value at index %d\n", index);
    }
    else
    {
        puts("Value not found");
    }

    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Time taken to process and output data: %f seconds\n", time_spent);
}

size_t binarySearch(const int b[], int searchKey, size_t low, size_t high){
    while (low <= high)
    {
        size_t middle = (low+high)/2;
        if (searchKey == b[middle])
        {
            return middle;
        }else if(searchKey<b[middle]){
            high = middle - 1;
        }else{
            low = middle + 1;
        }
    }
return-1;
}
