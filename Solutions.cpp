//How Many Numbers Are Smaller Than the Current Number
class Array1 {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n=nums.size();
       
    vector<int> res;
      for(int i = 0 ; i<n ; i++){
        int numeruesi = 0 ;
          for(int j=0;j<n;j++){
           if(i==j){
               continue;
           }
           if(nums[i]>nums[j]){
                   numeruesi++;
            }

            }
           res.push_back(numeruesi);
           }
        return res ; 
    }
};