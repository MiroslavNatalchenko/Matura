#include <bits/stdc++.h>

using namespace std;

const int Nmax=100000;
struct file_6_1
{
    string kod_grupy;
    string nazwa;
    string kraina;
};

file_6_1 mas1[1000];
int main()
{
    string S;
    int pos;
    getline(cin,S);
    pos=S.rfind(' ');
    mas1[0].kod_grupy=S.substr(0,3);
    mas1[0].nazwa=S.substr(4,pos-4);
    mas1[0].kraina=S.substr(pos+1,S.size()-pos-1);
    cout << mas1[0].kod_grupy << ".\n" << mas1[0].nazwa << ".\n" << mas1[0].kraina << ".\n";
}
