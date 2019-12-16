// nth_element example
#include <iostream>     // std::cout
#include <algorithm>    // std::nth_element, std::random_shuffle
#include <vector>
#include <string>
#include <functional>
// std::vector
using namespace std;

bool kfun(int n)
{
    return 5<=n&&n<10;
}

int main()
{
    vector<int>vec;
    for(int i=0;i<8;i++)
        vec.push_back(i);
    cout<<"5이상 : "<<count_if(vec.begin(),vec.end(),kfun)<<endl;
    cout<<"5이하 : "<<count_if(vec.begin(),vec.end(),not1(ptr_fun(kfun)))<<endl;

}
