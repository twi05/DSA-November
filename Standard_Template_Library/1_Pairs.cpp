#include <iostream>
using namespace std;
int main()
{

    // pair<int,string> p;

    // p = {123, "asdf"};

    // // cout<<p.second;

    // pair <int, string> &p1 = p;
    // p.first = 3;
    //  cout<< p.first;
    //  cout<< p1.second;

    int arr[] ={1,2,3};
    int arrb[] = {2,3,4};

    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1]= {2,3};
    p_array[2] = {3,4};


    //Now if we will swap , Pair will maintain it self
    swap(p_array[0], p_array[1]);


// we can also take input from users
// cin>>p.first;



    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<< p_array[i].second<<endl;
    }

    return 0;
}