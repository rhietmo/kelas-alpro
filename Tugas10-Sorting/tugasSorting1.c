#include <stdio.h>
#include <time.h>

#define SIZE 100

size_t linearSearch(const int array[], int key, size_t size);

int main(){
    int a[SIZE];
    for (size_t x = 0; x < SIZE; ++x)
    {
        a[x] = 2^x - 1;
    }
    printf("Enter integer search key: ");
    int searchKey;
    scanf("%d", &searchKey);

    clock_t start = clock();
    size_t index = linearSearch(a, searchKey, SIZE);
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

size_t linearSearch(const int array[], int key, size_t size){
    for (size_t n = 0; n < SIZE; ++n)
    {
        if (array[n] == key)
        {
            return n;
        }
    }
    return-1;
}