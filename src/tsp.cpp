#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<vector<int> > graph = {
        {0,10,15,20},
        {10,0,35,25},
        {15,35,0,30},
        {20,25,30,0}
    };

    int n = graph.size();

    vector<int> cities;

    for(int i = 1; i < n; i++)
        cities.push_back(i);

    int min_path = 1000000;

    do
    {
        int current_cost = 0;

        int k = 0;

        for(int i = 0; i < cities.size(); i++)
        {
            current_cost += graph[k][cities[i]];
            k = cities[i];
        }

        current_cost += graph[k][0];

        min_path = min(min_path, current_cost);

    } while(next_permutation(cities.begin(), cities.end()));

    cout << "Minimum traveling cost: " << min_path << endl;

    return 0;
}
