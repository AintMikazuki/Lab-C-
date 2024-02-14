#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int val[3] = {84, 76, 48};
    int ave = 0, sum = 0;
    int i = 0;

    cout<<"The Values are: "<<endl;


    while (i < 3)
    {
        cout<<val[i]<<endl;
        sum += val[i];
        i++;
    }


    ave = sum / 3;

    cout<<endl;
    cout<<"The Average Value is: "<<ave<<endl;

    return EXIT_SUCCESS;
}
