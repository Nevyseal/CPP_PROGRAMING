#include<iostream>
using namespace std;

int recusive_sum(int m, int n) //m = 2, n= 4 //
{
    if(m == n)
        return m;

    return m + recusive_sum(m + 1,n); // 2 +(3+(4))

}


int main()
{
    int m = 2, n = 4;

  cout<<"sum = "<<recusive_sum(m,n);


}
