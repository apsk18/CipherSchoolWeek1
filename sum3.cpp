#include<bits/stdc++.h>
using namespace std;

 vector<vector<int>> threeSum(vector<int>& nums) {        
        vector<vector<int>> ans;        
        if(nums.size() < 3) return ans;       
        sort(nums.begin(), nums.end());        
        for(int i = 0; i < nums.size()-2; i++){             
            if(i == 0 || nums[i-1] != nums[i]){                
                int low = i+1, high = nums.size()-1, sum = -nums[i];                
                while(low < high){
                    if(nums[low] + nums[high] == sum){                        
                        ans.push_back({nums[i], nums[low], nums[high]});                        
                        while(low < high && nums[low] == nums[low+1])
                         low++;                                               
                          while(low < high && nums[high] == nums[high-1])  
                         high--;
                          low++;
                          high--;
                      }                      
                      else if(nums[low] + nums[high] < sum){
                          low++;
                      }
                      else{
                          high--;
                      }
                  }                
              }
          }
          return ans;
      }

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        nums.push_back(x);
    }
    vector<vector<int>> ans=threeSum(nums);
   for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[0].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
    return 0;
}