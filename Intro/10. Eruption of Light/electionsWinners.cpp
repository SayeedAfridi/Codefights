int electionsWinners(std::vector<int> votes, int k) {
    sort(votes.begin(), votes.end());
    int l = votes.size();
    for(int i = 0; i < l; i++){
        if(votes[i] + k > votes[l - 1]){
            return l-i;
        }
    }
    if(votes[l-1] > votes[l-2]){
        return 1;
    }
    return 0;
}
