#include <iostream>
#include <chrono>

using namespace std;


// Function to reverse an array in place
// Parameters are:
// arr[]:=the integers that need to be reversed
// size: the number of elements in the array


void reverseArray (int arr[], int size){
    int start=0; // initalizes start of the array to the first element
    int end = size-1; // initalizes end of the last element 
    
    // loops the function until  the start and the end meet
    while (start < end){
        int temp = arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
}

// Function to test runtime for an array of given size
void testRuntime(int size) {
    // Dynamically allocate an array of 'size' integers
    int* arr = new int[size];

    // Initialize array with values 0 to size-1
    for (int i = 0; i < size; ++i) {
        arr[i] = i;
    }

    // Start timer
    auto start = chrono::high_resolution_clock::now();

    // Call reverseArray function
    reverseArray(arr, size);

    // Stop timer
    auto stop = chrono::high_resolution_clock::now();

    // Calculate duration in microseconds
    auto duration = chrono::duration_cast<chrono::microseconds>(stop - start);

    // Print runtime result
    cout << "Runtime for n = " << size << ": " << duration.count() << " microseconds\n";

    // Free dynamically allocated memory
    delete[] arr;
}

int main(){
    testRuntime(500);
    testRuntime(600);
    testRuntime(700);
    testRuntime(900);
    testRuntime(1500);
    testRuntime(2000);
    testRuntime(5000);

    return 0;
}