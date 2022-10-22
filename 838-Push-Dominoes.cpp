class Solution {
public:
    string pushDominoes(string dominoes) {
        int n = dominoes.size();
        vector<int> left(n,0),right(n,0);
        char prev ='.';
        int count = 1;
        for(int i=0;i<n;i++) {
            if(dominoes[i]=='R'){
                prev = 'R';
                count = 1;
                continue;
            }
            else if(dominoes[i]== 'L'){
                prev='L';
            }
            if(prev == 'R' && dominoes[i]== '.') {
                right[i] = count;
                count++;
            }
        }

        prev = '.';
        count = 1;
        for(int i=n-1;i>=0;i--) {
            if(dominoes[i]== 'L') {
                prev ='L';
                count =1;
                continue;
            }
            else if(dominoes[i]== 'R') {
                prev = 'R';
            }
            if(prev == 'L' && dominoes[i]== '.') {
                left[i] = count;
                count++;
            }
        }
        string finalans="";
        for(int i=0;i<n;i++) {
            if(left[i]== 0 && right[i]== 0) {
                finalans +=dominoes[i];
            }
            else if(left[i]==0) {
                finalans += 'R';
            }
            else if(right[i]==0) {
                finalans += 'L';
            }
            else if(left[i]==right[i]) {
                finalans += '.';
            }
            else if(left[i]>right[i]) {
                finalans += 'R';
            }
            else {
                finalans += "L";
            }
        }
        return finalans;
    }
};
