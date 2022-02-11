//Diagonal matrix C++
#include <iostream>
using namespace std;

class Diagonal
{
private:
    int *a;
    int n; // this is the dimension
public:
    Diagonal();
    Diagonal(int);
    ~Diagonal();

    //set --> set the element in our array a;
    void set(int, int, int);

    //get --> get the element form the array a;
    int get(int, int);

    int get_diagonal() { return n; }
    void display();
};

Diagonal::Diagonal()
{
    //create a 1D array to store all the non-zero elements
    //it will be of dimension only
    this->n = 2;
    a = new int[n];
}

Diagonal::Diagonal(int n)
{
    //create a 1D array to store all the non-zero elements
    //it will be of dimension only
    this->n = n;
    a = new int[n];
}

Diagonal::~Diagonal()
{
    cout << "\nDeleting the array form heap..." << endl;
    delete[] a;
}

void Diagonal::set(int i, int j, int ele)
{
    /*
    i == row
    j = col.
    ele = element to insert in a[]
    */

    //i - 1 :: because index start from 0 and matrix's index start form 1 (mathematically)
    if (i == j)
        a[i - 1] = ele;
}

//this is method will return the diagonal element form the array a;
int Diagonal::get(int i, int j)
{
    if (i == j)
        return a[i - 1];
    else
        return 0;
}

void Diagonal::display()
{
    //here n == dimension
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            if (i == j)
                cout << a[i] << " ";
            else
                cout << "0 ";
        cout << endl;
    }
}

int main()
{
    Diagonal d(4);

    d.set(1, 1, 5);
    d.set(2, 2, 8);
    d.set(3, 3, 6);
    d.set(4, 4, 9);

    d.display();

    return 0;
}