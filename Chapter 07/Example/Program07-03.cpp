/*
Page 180
program OVERLOADING OPERATORS USING FRIENDS
*/
#include<iostream>
#include<cstdio>
using namespace std;
const size_t size = 3;
class vector
{
    int v[size];
public:
    vector(); // constructor null vector
    vector(int *x); // constructor vector from array;
    friend vector operator*(int a, vector b); // friend 1
    friend vector operator*(vector b, int a); // friend 2
    friend istream & operator >> (istream&, vector  //this function has return type ...which is not used in this program .
    friend ostream & operator <<(ostream &, vector &);//can be make both this program return type void ,and will get appropiate result

};
vector :: vector ()
{
    for(int i = 0; i < size; i++)
    {
        v[i] = 0;
    }
}
vector :: vector(int *x)
{
    for(int i = 0; i < size; i++)
    {
        v[i] = x[i];
    }
}
vector operator*(int a, vector b)
{
    vector c;
    int i;
    for(i = 0; i < size; i++)
    {
        c.v[i] = a*b.v[i];
    }
    return c;
}
vector operator*(vector b, int a)
{
    vector c;
    int i;
    for(i = 0; i < size; i++)
    {
        c.v[i] = a*b.v[i];
    }
    return c;
}
istream & operator >> (istream &din, vector &b) //it should return istream pointer
{
    for(int i = 0; i < size; i++)
    {
        din >> b.v[i];
    }
    return(din);
}

ostream & operator << (ostream &dout, vector &b)
{
    dout << "(" << b.v[0];
    for(int i = 1; i < size; i++)
    {
        dout << ", " << b.v[i];
    }
    dout << ")";
    return(dout);
}
int x[size] = {2,4,6};
//main begin
int main()
{
    vector m; // invokes constructor 1
    vector n = x; // invokes constructor 2;  or // n = vector(&x[0]); or n = vector(x) or n(x);

    cout << "Enter element of vector m " << "\n";
   // operator>>(cin,m);are you gatting this ???
    cin >> m; //invokes operator>>() function

    cout << "\n";
    cout << "m = " << m << "\n"; // invokes operator <<()

    vector p, q;

    p = 2 * m; // invokes friend 1
    q = n * 2; // invokes friend 2

    cout << "\n";
    cout << "p = " << p << "\n"; // invokes operators<<();
    cout << "q = " << q << "\n";


    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter element of vector m
10 5 20

m = (10, 5, 20)

p = (20, 10, 40)
q = (4, 8, 12)

Process returned 0 (0x0)   execution time : 4.906 s
Press any key to continue.

*/

