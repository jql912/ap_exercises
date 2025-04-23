#include <iostream>
#include <string>
#include <cmath>

//1.1
  //done already in the file helloworld.cpp


//1.2
/*Program that takes in two integers and then returns the product*/

int første() 
{
    int product;
    int a;
    int b;
    std::cout << "Enter your first integer\n";
    std::cin >> a;
    std::cout << "Enter your second integer\n";
    std::cin >> b;
    product = a * b;
    std::cout << "The product of " << a << " and " << b << " is " << product << "\n";
    return 0;
}

//1.3
/*The scalar product and Euclidean norm of two given vectors are found and declared*/

int tredje()
{
    double array1[3] = {1.0, 2.0, 3.0};
    double array2[3] = {4.0, 5.0, 6.0};
    double scalarproduct;
    scalarproduct = array1[0]*array2[0] + array1[1]*array2[1] + array1[2]*array2[2];
    std::cout << "The scalar product of the two arrays is: " << scalarproduct << "\n" << std::flush;
    double array1euclidean = sqrt(array1[0]*array1[0] + array1[1]*array1[1] + array1[2]*array1[2]);
    double array2euclidean = sqrt(array2[0]*array2[0] + array2[1]*array2[1] + array2[2]*array2[2]);
    std::cout << "The euclidean norm of the first array is: " << array1euclidean << "\n" << std::flush;
    std::cout << "The euclidean norm of the second array is: " << array2euclidean << "\n" << std::flush;
    return(0);
}

//1.4

/*Two given matrices are added and multiplied to declare two new matrices*/

double fjerde()
{
    double A[2][2] = {{1.0, 1.0}, {2.0, 2.0}};
    double B[2][2] = {{1.0, 1.0}, {2.0, 2.0}};
    double C[2][2];
    double D[2][2];

    //matrix addition
    C[0][0] = A[0][0]+B[0][0];
    C[0][1] = A[0][1]+B[0][1];
    C[1][0] = A[1][0]+B[1][0];
    C[1][1] = A[1][1]+B[1][1];
    std::cout << "Matrix C = A + B:\n"<< std::flush;
    std::cout << C[0][0] << " " << C[0][1] << "\n"<< std::flush;
    std::cout << C[1][0] << " " << C[1][1] << "\n"<< std::flush;

    //matrix multiplikation
    D[0][0] = A[0][0]*B[0][0]+A[0][1]*B[1][0];
    D[0][1] = A[0][0]*B[0][1]+A[0][1]*B[1][1];
    D[1][0] = A[1][0]*B[0][0]+A[1][1]*B[1][0];
    D[1][1] = A[1][0]*B[0][1]+A[1][1]*B[1][1];
    std::cout << "Matrix D = A * B:\n"<< std::flush;
    std::cout << D[0][0] << " " << D[0][1] << "\n"<< std::flush;
    std::cout << D[1][0] << " " << D[1][1] << "\n"<< std::flush;

    return(0);
}

//1.5
/*Takes in surname and lastname and outputs full name*/

int femte()
{
    std::string surname;
    std::string lastname;
    std::cout << "Enter your surname\n";
    std::cin >> surname;
    std::cout << "Enter your lastname\n";
    std::cin >> lastname;
    std::cout << "Your full name is: " << surname << " " << lastname << "\n";
    return(0);
}


//1.6

double sjette()
{
    int array[5];
    std::cout << "Enter first observation\n";
    std::cin >> array[0];
    std::cout << "Enter second observation\n";
    std::cin >> array[1];
    std::cout << "Enter third observation\n";
    std::cin >> array[2];
    std::cout << "Enter fourth observation\n";
    std::cin >> array[3];
    std::cout << "Enter fifth observation\n";
    std::cin >> array[4];
    double average = (((double) array[0]) + ((double) array[1]) + ((double) array[2]) + ((double) array[3]) + ((double) array[4])) / 5.0;
    std::cout << "The average speed is: " << average << "\n";
    return(0);
}


//1.7

int main()
{
    //første();
    //tredje();
    //fjerde();
    //femte();
    sjette();
    return(0);
}