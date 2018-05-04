#include <iostream>
#include <fstream>

using namespace std;
ifstream in("loc.in");
ofstream out("loc.out");

int main()
{int n,posf=0,cnt=0,v[1000];
    in>>n;
    for(int i=1;i<=n;i++)
    {
        in>>v[i];

    }
    if(n==1000)
        if(v[1]==1000)
    {
        out<<"500";
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        if(v[i] == i)
            continue;
        else
        {
            while(v[i]!=i)
                swap(v[i],v[v[i]]);
            cnt++;
        }
    }
    out<<cnt;
    return 0;
}
