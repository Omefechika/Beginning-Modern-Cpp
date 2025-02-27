// constPointer.cpp : Testing the four ways of passing a pointer
// to a function
// 1. Nonconstant pointer to nonconstant data.
// 2. Nonconstant pointer to constant data.
// 3. Constant pointer to nonconstant data.
// 4. Constant pointer to constant data.
#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void nonConstPointerNonConstData(int *);
void nonConstPointerConstData(const int *, size_t _size);
void ConstPointerConstData(const int *, int arraySize);
void printArray(const int *, size_t _size);

int main()
{
    // -------------------------------------------------
    // nonconstant pointer to nonconstant data
    int num2{10};      // modifiable data
    int *Ptr{nullptr}; // nonconstant pointer
    Ptr = &num2;
    cout << "Original data is: " << num2 << endl;
    nonConstPointerNonConstData(Ptr);
    cout << "Modified data is: " << num2 << endl;

    // -------------------------------------------------
    // nonConstPointerConstData
    // produces an error
    /* size_t arraySize1{4}; // general size of array
    const int list1[arraySize1] = {1, 2, 3, 4}; // constant array data
    printArray(list1, arraySize1);
    nonConstPointerConstData(&list1, arraySize1);
    printArray(&list1, arraySize1) */

    // -------------------------------------------------
    // ConstPointerNonConstData
    char name[6] = {'l', 'e', 'l', 'l', 'y', '\0'}; // array of char
    char *const namePtr{name};
    // display the value at namePtr
    cout << "\nOriginl name: ";
    for (size_t ii{0}; ii < 6; ++ii)
    {
        cout << namePtr[ii] << "";
    }
    cout << "\nModified name: ";
    name[0] = 'K';
    for (size_t ii{0}; ii < 6; ++ii)
    {
        cout << namePtr[ii] << "";
    }
    cout << endl
         << endl;
    /* defining a new char array
    char name1[6] = {'l', 'e', 'l', 'l', 'y', '\0'};
    namePtr = name1; // this would produce an error */

    // -------------------------------------------------
    // Constant Pointer to Constant Data
    const int numList[6] = {1, 2, 3, 4, 5, 6};
    const int *const numListPtr{numList};
    for (size_t ii{0}; ii < 6; ii++)
    {
        cout << numListPtr[ii] << " ";
    }
    cout << endl;

    // doing this would produce an error
    /* int number{90};
    numListPtr = &number; */
    // or
    /* const int numList2[6] = {1, 2, 3, 4,5, 6};
    numListPtr = numList2; */
}

void printArray(const int array[], size_t _size)
{
    for (size_t ii{0}; ii < _size; ii++)
    {
        cout << array[ii] << " ";
    }
}

void nonConstPointerNonConstData(int *number)
{
    // modify data
    *number = 100;
}

/*  void nonconstPointerConstData(const int *arrayPtr, size_t _size){
    for (size_t ii{0}; ii < _size; ii++)
    {
        // trying to modify the array
        *arrayPtr[ii] *= 10 // multiple element value by 10
    }

} */