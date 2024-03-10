#include<iostream>
using namespace std;
#define R 3
#define C 6
void sprialPrint(int m, int n, int array[R][C])
{
    /*  k - starting row index 
        m - ending row index 
        l - starting column index 
        n - ending column index 
        i - iterator 
        
        [1,1] [1,2] [1,3] [1,4] [1,5] [1,6]
        [2,1] [2,2] [2,3] [2,4] [2,5] [2,6]
        [3,1] [3,2] [3,3] [3,4] [3,5] [3,6]
    */
    int i, k=0, l=0;
    while (k<m && l<n)
    {
        for ( i = l; i < n; i++)
        {
            cout << array[k][i] << " ";
        }
        k++;

        for ( i = k; i < m; i++)
        {
            cout << array[i][n-1] << " ";
        }
        n--;

        if (k<m)
        {
            for ( i = n-1; i >= 1; i--)
            {
                cout << array[m-1][i] << " ";
            }
            m--;
        }

        if (l<n)
        {
            for ( i = m-1; i >= k; i--)
            {
                cout <<  array[i][l] << " ";
            }
            l++;
        }
    }
}

int main()
{
    int array[R][C] = { 
    { 1,2,3,4,5,6},
    {7,8,9,10,11,12},
    {13,14,15,16,17,18}
    };
    sprialPrint(R,C,array);
    return 0;
}