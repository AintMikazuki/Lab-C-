#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int val[3] = {84, 76, 48};
    int i, ave = 0, sum = 0;

    cout<<"The Values are: ";

    i = 0;
    while (i < 3)
    {
        cout<<val[i]<<" ";
        sum += val[i];
        i++;
    }

    ave = sum / 3;

    cout<<endl;
    cout<<"The Average Value is: "<<ave<<endl<<endl;

    return EXIT_SUCCESS;
}
