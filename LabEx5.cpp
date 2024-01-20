#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
    int row;
    
    
    row =1;
    do 
    {
        int col;
        
        col =1;
        do
        {
            cout<<"*";

            col++;
        } while (col <=row);

        cout<<endl;

        row++;
    } while (row <=5);

    return EXIT_SUCCESS;
}