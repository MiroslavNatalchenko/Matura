#include <bits/stdc++.h>

using namespace std;

void inp_mas(int mas[],int N)
{
    for (int i=0;i<N;i++)
        cin >> mas[i];
}

void out_mas(int mas[],int N)
{
    for (int i=0;i<N;i++)
    {
       cout << mas[i] << ' ';
    }
    cout <<'\n';
}

void quicksort(int m[],int left,int right,int N)
{
    int etalon=m[(left+right)/2],j=right,i=left;
    while (i<j)
    {
      while (m[i]<etalon) ++i;
      while (m[j]>etalon) --j;
      if (i<=j)
      {
         if (m[i]!=m[j])
         {
             cout << "Co zrobili? Zmienione pozycje numerow " << m[i] << " oraz " << m[j] << ".\n";
             swap(m[i],m[j]);
             out_mas(m,N);
         }
         ++i;
         --j;
      }
    }
    if(left<j) quicksort(m,left,j,N);
    if(i<right) quicksort(m,i,right,N);
}
//10
//7 4 3 1 2 0 9 8 5 6
int main()
{
    int mas[1000]={0};
    cout << "Wpisz illosc elemtow tablicy:\n";
    int N;
    cin >> N;
    cout << "Wpisz "<< N << " elementow tablicy:\n";
    inp_mas(mas,N);
    quicksort(mas,0,N-1,N);
    return 0;
}
