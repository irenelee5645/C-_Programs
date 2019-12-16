#include <iostream>
#include <set>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()
using namespace std;
int main()
{
    set <int> A;
 
    srand(time(0));  // Initialize random number generator.
    
    while(A.size()!=6)
    {
        int r = (rand() % 45) + 1;
        A.insert(r);
    }
    set<int> ::iterator it=A.begin();
    for(it;it!=A.end();it++)
        cout<<*it<<" ";
    cout<<endl;
}
