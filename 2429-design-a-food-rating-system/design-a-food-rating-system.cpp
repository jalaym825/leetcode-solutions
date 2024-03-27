class FoodRatings
{
private:
    unordered_map<string, pair<string, int>> mp;
    unordered_map<string, set<pair<int, string>>> mp2; // for highest rating
public:
    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings)
    {
        int n = foods.size();
        for (int i = 0; i < n; i++)
        {
            mp[foods[i]] = {cuisines[i], ratings[i]};
            mp2[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }

    void changeRating(string food, int newRating)
    {
        auto it = mp[food];
        string cuisine = it.first;
        int oldRating = it.second;
        mp2[cuisine].erase(mp2[cuisine].find({-oldRating, food}));
        mp[food].second = newRating;
        mp2[cuisine].insert({-newRating, food});
    }

    string highestRated(string cuisine)
    {
        return mp2[cuisine].begin()->second;
    }
};
