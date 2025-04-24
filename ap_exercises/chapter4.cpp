#include <iostream>
#include <cassert>
#include <fstream>


//4.1
int fjerde_første() {
    int i = 5;          // Declare an integer and set it to 5
    int* p_j;           // Declare a pointer to an int
    p_j = &i;           // Store the address of i in the pointer

    *p_j = (*p_j)*5;

    int* p_k;
    p_k = new int;    //allocated but empty memory space that p_k points at
    
    *p_k = *p_j;        //The value pointed at by p_j is now i

    *p_j = 0;          //Changing the value p_j is pointing at to 0

    std::cout << "Value of i:" << i << "\n";

    std::cout << "Value pointed at by p_k:" << *p_k << "\n";
    std::cout << "Value pointed at by p_j:" << *p_j << "\n";

    return 0;
}

//4.2

int fjerde_anden() {
    int i = 5;          // Declare an integer and set it to 5
    int k = 10;         //Declare another integer and set it to 10

    int* p_i;           // Declare a pointer to an int
    p_i = &i;           // Store the address of i in the pointer

    int* p_k;           // Declare a pointer to an int
    p_k = &k;           // Store the address of i in the pointer

    int* p_storage;     //Declare an empty memory space which p_storage points at
    p_storage = new int;

    *p_storage = *p_i;  //The value pointed at by p_storage is now i
    *p_i = *p_k;        //The value pointed at by p_i is now k
    *p_k = *p_storage;   //he value pointed at by p_k is now p_storage, which is the same as i

    delete p_storage;

    std::cout << "Value of i was 5 before, but is now:" << i << "\n";
    std::cout << "Value of k was 10 before, but is now:" << k << "\n";

    return 0;
}


int main()
{
    //fjerde_første();
    fjerde_anden();

    return(0);
}