#include <iostream>
#include <vector>
using namespace std;
int man_of_the_match(vector<pair<int, int>> &score)
{
    int maxPoints = 0;
    int mom = 0;
    for (int i = 0; i < score.size(); i++)
    {
        int runs = score[i].first;
        int wicktes = score[i].second;
        int points = runs + (20 * wicktes);
        if (points > maxPoints)
        {
            maxPoints = points;
            mom = i + 1;
        }
    }
    return mom;
}
int main()
{
    vector<pair<int, int>> score;
    for (int i = 0; i < 22; i++)
    {
        int runs, wickets;
        cin >> runs >> wickets;
        score.push_back({runs, wickets});
    }
    cout << man_of_the_match(score);
    return 0;
}