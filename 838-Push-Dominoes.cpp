class Solution {
public:
    string pushDominoes(string dominoes) {
        vector<pair<char,int >> arr;
        arr.push_back({'L',-1});
        
        for(int i=0;i<dominoes.size();i++){
            if(dominoes[i]=='L' || dominoes[i]=='R'){
                arr.push_back({dominoes[i],i});
            }
        }
        string res = dominoes;
        arr.push_back({'R',dominoes.size()});
        for(int i =0;i<arr.size()-1;i++){
            if(arr[i].first==arr[i+1].first){
                for(int k=arr[i].second+1;k<arr[i+1].second;k++){
                    res[k]= arr[i].first;
                }
            }
             else{
                    if(arr[i].first>arr[i+1].first){
                        int temp= arr[i].second + arr[i+1].second;
                        if(temp%2==0){
                            // cout<<temp<<endl;
                            temp /=2;
                            for(int k = arr[i].second;k<temp;k++){
                                res[k]='R';
                            }
                            res[temp] = '.';
                 for(int k = temp+1;k<=arr[i+1].second;k++){
                                res[k]='L';
                            }
                        }
                        else{
                            temp/=2;
                         for(int k = arr[i].second;k<=temp;k++){
                                res[k]='R';
                            }
                            // res[temp] = '.';
                         for(int k = temp+1;k<=arr[i+1].second;k++){
                                res[k]='L';
                            }
                        }
                    }
                }
        }
        return res;
//      
    }
};
