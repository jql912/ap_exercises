#include <iostream>
#include <cassert>

//2.2
//Modification of original code:


int originale()
{
    double p, q, x, y;
    int j;

    return(0);
}


int anden_første()
{
    double p, q, x, y;
    int j;

    if (p >= q || j != 10){
        x = 5;
        std::cout << "x = " << x << "\n";
    }

    return(0);
}


int anden_anden()
{
    double p, q, x, y;
    int j;

    if (p >= q && j == 10){
        x = 5;
        std::cout << "x = " << x << "\n";
    } else {
        x = p;
    }

    return(0);
}

int anden_tredje()
{
    double p, q, x, y;
    int j;

    if (p > q){
        x = 0;
        std::cout << "x = " << x << "\n";
    } else if (p <= q && j == 10) {
        x = 1;
        std::cout << "x = " << x << "\n";
    } else {
        x = 2;
        std::cout << "x = " << x << "\n";   
    }

    return(0);
} 


//2.3

int tredje_første(int x) {
    int j;
    int i = 0;
    std::cout << "You will enter " << x << "positive integers in total.\n";
    
    for (int count=0; count < x; count++) {
        std::cout << "Enter a positive integer\n";
        std::cin >> j;
        assert (j >= 0);
        i = i+j;
    }

    std::cout << "The sum of the integers is: " << i << "\n";
    return(0);
}

int tredje_anden(int x) {
    int j;
    int i = 0;
    std::cout << "You will enter " << x << "positive integers in total.\n";
    
    for (int count=0; count < x; count++) {
        std::cout << "Enter a positive integer\n";
        std::cin >> j;
        assert (j >= 0);
        i = i+j;
        assert (i <= 100);
    }

    std::cout << "The sum of the integers is: " << i << "\n";
    return(0);
}

int tredje_tredje(int x) {
    int input;
    int sum = 0;
    std::cout << "You will enter " << x << "positive integers in total.\n";
    
    for (int count=0; count < x; count++) {
        std::cout << "Enter a positive integer\n";
        std::cin >> input;

        if (input < 0) {
            int choice;
            std::cout << "Negative integer entered.\n";
            std::cout << "Type -2 if you want to restart.\n";  
            std::cout << "Else, the program terminates.\n";
            std::cin >> choice;
            if (choice == -2) {
                std::cout << "Restarting the program.\n";
                count = -1; 
                sum = 0;
            } else {
                std::cout << "Program terminated.\n";
                break;
            }
        } else {
            sum = sum+input;
        }
    }

    std::cout << "The sum of the integers is: " << sum << "\n";
    return(0);
}

//2.4

int fjerde() {
    double u[3] = {1.0, 2.0, 3.0};
    double v[3] = {6.0, 5.0, 4.0};
    double A[3][3] = {{1.0, 5.0, 0.0},
                    {7.0, 1.0, 2.0},
                    {0.0, 0.0, 1.0}};
    double B[3][3] = {{-2.0, 0.0, 1.0},
                    {1.0, 0.0, 0.0},
                    {4.0, 1.0, 0.0}};

    double w[3];
    for (int i=0; i<3; i++)
    {
        w[i] = u[i] - 3.0*v[i];
    }

    //calculating x
    double x[3];
    for (int i=0; i<3; i++)
    {
        x[i] = u[i] - v[i];
    }
    std::cout << "x = ";
    std::cout << x[0] << " " << x[1] << " " << x[2] << "\n";

    //calculating y
    double y[3];
    for (int i=0; i<3; i++)
    {
        y[i] = 0;
        for (int j=0; j<3; j++) {
            y[i] = y[i] + A[i][j]*u[j];
        }
    }
    std::cout << "y = ";
    std::cout << y[0] << " " << y[1] << " " << y[2] << "\n";

    //calculating z
    double z[3];
    for (int i=0; i<3; i++)
    {
        z[i] = y[i] - v[i];
    }
    std::cout << "z = ";
    std::cout << z[0] << " " << z[1] << " " << z[2] << "\n";

    //Calculating C
    double C[3][3];
    for (int i=0; i<3; i++){
        int times1 = 4;
        for (int j=0; j<3; j++) {
            C[i][j] = A[i][j]*times1;
        }
    }
    for (int i=0; i<3; i++){
        int times2 = 3;
        for (int j=0; j<3; j++) {
            C[i][j] = C[i][j]-(B[i][j]*times2);
        }
    }
    std::cout << "C = ";
    std::cout << C[0][0] << " " << C[0][1] << " " << C[0][2] << "\n";
    std::cout << C[1][0] << " " << C[1][1] << " " << C[1][2] << "\n";
    std::cout << C[2][0] << " " << C[2][1] << " " << C[2][2] << "\n";

    //Calculating D
    double D[3][3];
    for (int i = 0; i < 3; i++) {         // loop over rows of A
        for (int j = 0; j < 3; j++) {     // loop over columns of B
            D[i][j] = 0;
            for (int k = 0; k < 3; k++) { // shared dimension
                D[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    std::cout << "D = ";
    std::cout << D[0][0] << " " << D[0][1] << " " << D[0][2] << "\n";
    std::cout << D[1][0] << " " << D[1][1] << " " << D[1][2] << "\n";
    std::cout << D[2][0] << " " << D[2][1] << " " << D[2][2] << "\n";

    return(0);
}



int main()
{
    //anden_første();
    //anden_anden();
    //anden_tredje();
    //tredje_første(3);
    //tredje_anden(3);
    //tredje_tredje(3);
    fjerde();
    return(0);
}