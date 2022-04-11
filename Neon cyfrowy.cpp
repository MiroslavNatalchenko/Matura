#include <bits/stdc++.h>

using namespace std;

void robim(string S,string&res,long long&biggest_length,int mas[])
{
    if (S[0]=='D')
    {
        res.append(1,S[7]);
        biggest_length++;
        mas[S[7]-65]++;
    }
    if (S[0]=='U')
        res=res.substr(0,res.size()-1);
    if (S[0]=='Z')
        res.replace(res.size()-1,1,1,S[6]);
    if (S[0]=='P')
    {
        char need=S[8];
        int place=res.find(need);
        if (res[place]=='Z')
            res.replace(place,1,1,'A');
        else
            res.replace(place,1,1,char(need+1));
    }
}
int main()
{
    freopen("test.txt", "r", stdin);
    int ind[100]={0};
    string S,res;
    long long biggest_length=0;
    int N=0;
    while (getline(cin,S))
    {
       robim(S,res,biggest_length,ind);
    }

    int etalon=0,cnt=0;
    for (int i=0;i<100;i++)
        if (ind[i]>ind[etalon])
           etalon=i;

    cout << res <<'\n';
    cout << "Biggest length: " << biggest_length << '\n';
    cout << "Popularna litera: " << char(65+etalon) << ' ' << ind[etalon] << '\n';
    cout << res.size();
}
