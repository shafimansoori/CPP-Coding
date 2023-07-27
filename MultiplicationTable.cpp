/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    
    int n,m;
    cout<<"\t\t\t Mutliplication Table From 1 to 10\n\n";
    
    for(n=1;n<=10;n++){
        cout<<"\t"<<n;
    }
    
    cout<<"\n-----------------------------------------------------------------------------------";
    for(m=1;m<=10;m++){
        cout<<" \n"<<m<<"  |";
        
    for(n=1;n<=10;n++){
        cout<<"\t"<<n*m;
    }
    }

    return 0;
}