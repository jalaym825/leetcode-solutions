class Solution {
public:

    bool winnerOfGame(string colors) {
        int n=colors.size(),alice=0,bob=0;
        for(int i=0;i<n-2;i++){
            if(colors[i]==colors[i+1] && colors[i+1] == colors[i+2] && colors[i]=='A') alice++;
            if(colors[i]==colors[i+1] && colors[i+1] == colors[i+2] && colors[i]=='B') bob++;
        }
        if(bob>=alice) return false;
        return true;
    }
};