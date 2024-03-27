class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int ans1 = 0;
        int ans2 = 0;
        for(int i = 0; i < player1.size(); i++)
        {
            ans1 += player1[i];
            if((i - 1 >= 0 && player1[i - 1] == 10) || (i - 2 >= 0 && player1[i - 2] == 10))
                ans1 += player1[i];


            ans2 += player2[i];
            if((i - 1 >= 0 && player2[i - 1] == 10) || (i - 2 >= 0 && player2[i - 2] == 10))
                ans2 += player2[i];
        }
        cout<<ans1<<" "<<ans2;
        if(ans1 > ans2)
            return 1;
        else if(ans1 < ans2)
            return 2;
        else
            return 0;
    }
};