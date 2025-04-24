#include <iostream>
#include <cassert>
#include <fstream>

//3.1
int tredje_første()
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};

    std::ofstream write_output("tredje_første.txt");
    assert(write_output.is_open());

    for (int i = 0; i < 4; i++) {
        write_output << x[i] << " ";
    }
    write_output << "\n";
    for (int i = 0; i < 4; i++) {
        write_output << y[i] << " ";
    }
    write_output << "\n";

    write_output.close();

    return(0);

}


//3.2
int tredje_anden()
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};

    std::ofstream write_output("tredje_anden.txt");
    assert(write_output.is_open());

    for (int i = 0; i < 4; i++) {
        write_output << x[i] << " ";
    }
    write_output << "\n";
    write_output.flush();

    for (int i = 0; i < 4; i++) {
        write_output << y[i] << " ";
    }
    write_output << "\n";
    write_output.flush();

    write_output.close();

    return(0);

}


//3.3
/*setting precision to 10 significant figures, 
the output is in scientific notation,
and plus signs are shown for positive numbers*/
int tredje_tredje()
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};

    std::ofstream write_output("tredje_tredje.txt");
    write_output.setf(std::ios::scientific);
    write_output.precision(10);
    write_output.setf(std::ios::showpos);

    assert(write_output.is_open());

    for (int i = 0; i < 4; i++) {
        write_output << x[i] << " ";
    }
    write_output << "\n";
    write_output.flush();

    for (int i = 0; i < 4; i++) {
        write_output << y[i] << " ";
    }
    write_output << "\n";
    write_output.flush();

    write_output.close();

    return(0);

}

//3.4
int tredje_fjerde()  //Har ikke lavet den endnu
{
    double x[4] = {0.0, 1.0, 1.0, 0.0};
    double y[4] = {0.0, 0.0, 1.0, 1.0};

    std::ofstream write_output("tredje_fjerde.dat");
    write_output.setf(std::ios::scientific);
    write_output.precision(10);
    write_output.setf(std::ios::showpos);

    assert(write_output.is_open());

    for (int i = 0; i < 4; i++) {
        write_output << x[i] << " ";
    }
    write_output << "\n";
    write_output.flush();

    for (int i = 0; i < 4; i++) {
        write_output << y[i] << " ";
    }
    write_output << "\n";
    write_output.flush();

    write_output.close();

    return(0);

}


int main()
{
    //tredje_første();
    //tredje_anden();
    //tredje_tredje();
    tredje_fjerde();
    return(0);
}
