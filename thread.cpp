#include <bits/stdc++.h>
#include<thread>
using namespace std;
void run()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("error.txt", "w", stderr);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void taskA()
{
    for(int i=1;i<=10;i++)
    {
        cout<<" A ";
        cout<<i<<endl;
    }
}
void taskB()
{
    for(int j=1;j<=10;j++)
    {
        cout<<" B ";
        cout<<j<<endl;
    }
}

int main()
{
    run();
    thread t1(taskA);
    thread t2(taskB);

    t1.join();
    t2.join();
   

    return 0;
}
