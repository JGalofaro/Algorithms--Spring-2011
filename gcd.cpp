/**
 * Greatest Common Divisor
 *
 * Author: Josh Galofaro
 * Date: 26/01/2011
 *
 * Design and Analysis of Algorithms, Spring 2011
 * Section 1.1 of "Introduction to The Design & Analysis of Algorithms"
 *
 * Determine the greatest common divisor between two integers.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

int gcd( int m, int n );

int main( int argc, char * argv[] )
{
    if( argc == 3 )
    {
        int m, n;
        m = atoi(argv[1]);      //Convert the arguments to integers
        n = atoi(argv[2]);
        cout << gcd(m, n) << endl;
    }
    else 
    {
        cout << "Error, Command is: ./gcd <num 1> <num 2>\n";
    }
}

int gcd( int m, int n )
{
    if( n == 0 )
    {
        return m;
    }
    else 
    {
        int r = m / n;
        m = n;
        n = r;
    }
    
    return gcd(m, n);
}
