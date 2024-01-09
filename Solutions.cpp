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


//Number of Good Pairs
class Array2 {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        for (int i=0; i<nums.size(); i++) {
            for(int j=1; j<nums.size(); j++) {
                if (nums[i]==nums[j] && i<j){
                   ans++;
                }
            }
        }
        return ans;
    }
};


//Final Value of Variable After Performing Operations
class Array3 {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        int n=operations.size();
        for(int i=0; i<n; i++){
        if(operations[i]=="--X" || operations[i]=="X--"){
            x--;
        } else{
            x++;
        }
        }
      return x;
    }
};


//Concatenation of Array
class Array4 {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        int m = 2*n;
        vector<int> ans(m, 0);

        int j = 0;
        for(int i=0; i<m; i++){
            if(j >= n){
                j = 0;
            }
            ans[i] = nums[j++];
        }

        return ans;
    }
};

// Maximum Number of Words Found in Sentences
class Array 5 {
public:
    int mostWordsFound(vector<string>& fjalia) {
        
    int m=fjalia.size();
    int maksimumi =0;

    for(int i=0;i<m;i++) {
        int n=fjalia[i].size();
        int word=1;   

        for(int j=0;j<n;j++){
            if(fjalia[i][j]==' ')
              word++;
        }
        maksimumi=max(word,maksimumi);
    }
    return maksimumi;

    }
};


//Jewels and Stones
class String1 {
public:
    int numJewelsInStones(string jewels, string stones) {
        int numeruesi = 0;
        for (int i = 0; i < jewels.length(); i++) {
            for (int j = 0; j < stones.length(); j++) {
                if (jewels[i] == stones[j]) {
                 numeruesi++;
                }
            }
        }
        return numeruesi;
    }
};


//Check If Two String Arrays are Equivalent
class String2 {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1;
        string s2;
        for (int i = 0; i < word1.size(); i++) {
            s1 += word1[i];
        }
        for (int i = 0; i < word2.size(); i++) {
            s2 += word2[i];
        }
        if (s1 == s2) {
            return true;
        } else {
            return false;
        }
    }
};


// Goal Parser Interpretation
class String3 {
public:
    string interpret(string s) {
        string pergjigja = "";
        
        for(int i=0; i<s.size(); i++){
            if(s[i]=='G')  {
                pergjigja+=s[i];
            }
            if(s[i]=='(' && s[i+1]==')') {
                pergjigja+='o';
            }
            if(s[i]=='(' && s[i+1]=='a') {
                if (s[i+2]=='l' && s[i+3]==')'){
                pergjigja+="al"; 
                }
            }
        }
        return pergjigja;
    }
};


//Split a String in Balanced Strings
class String4 {
public:
    int balancedStringSplit(string s) {

    int numeroR=0;
    int numeroL=0;
    int numruesi=0;

    for(int i=0;i<s.size();i++) {
        if(s[i]=='R') {
            numeroR++;
        } else if (s[i]=='L'){
            numeroL++;
        }
        if(numeroR==numeroL) {
            numruesi++;
        }
        
    }
    return numruesi;


    }
};


//Defanging an IP address
class String5 {
public:
    string defangIPaddr(string address) {
        string ans="";
        for (int i=0; i<address.size(); i++) {
            if (address[i]=='.') {
                ans += "[.]"; 
            } else  {
                ans += address[i];
            }
        }
        return ans;
    }
};



//Convert the Temperature
class Math1 {
public:
    vector<double> convertTemperature(double celsius) {
    return {(celsius + 273.15),(celsius * 1.80 + 32.00)};
    }
};


//Divisible and Non- divisible Sums Difference
class Math2 {
public:
    int differenceOfSums(int n, int m) {
        int shuma1=0;
        int shuma2=0;
        for (int i=1; i<=n; i++) {
            if(i%m==0) {
                shuma1+=i;
            } else {
                shuma2+=i;
            }
        }
      return shuma2-shuma1;
    }
};


//Smallest Even Multiple
class Math3 {
public:
    int smallestEvenMultiple(int numri) {
        if (numri%2==0) {
            return numri;
        } else {
            return numri*2;
        }
    }
};


//Add two Integeres
class Math4 {
public:
    int sum(int numri1, int numri2) {
        return numri1+numri2;
    }
};


//Sum Multiples
class Math5 {
public:
    int sumOfMultiples(int numri) {
        int shuma=0;

        for (int i=3; i<=numri; i++) {
            if (i%3==0 || i%5==0 || i%7==0) {
                shuma+=i;
            }
        }
        return shuma;
    }
};


//Matrix Diagonal Sum
class Matrix1 {
public:
    int diagonalSum(vector<vector<int>>& matrica) {
        int m = matrica.size();
        int n = matrica[0].size();
        int sum = 0;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i == j || i+j == m-1){
                    sum += matrica[i][j];
                }
            }
        }
        return sum;
    }
};


//Count Negative Numbers in a Sorted Matrix
class Matrix2 {
public:
    int countNegatives(vector<vector<int>>& matrica) {
        int m=matrica.size();
        int n=matrica[0].size();
        int numeruesi=0;

        for (int i=0; i<m; i++) {
            for (int j=0; j<n; j++) {
                if (matrica[i][j]<0) {
                    numeruesi++;
                }
            }
        }
        return numeruesi;
    }
};


//Row with Maximum Ones
class Matrix3 {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rezultati=0;
        int maksimumi=0;

        for (int i=0; i<mat.size(); i++) {
                int numero1=0;
            for (int j=0; j<mat[0].size(); j++) {
               if(mat[i][j]==1) {
                   numero1++;
               }
            }
            if (numero1>maksimumi) {
                maksimumi= numero1;
                rezultati=i;
            }
        }
        return {rezultati, maksimumi};
    }
};


//Richest customer wealth
class Matrix4 {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        int sum = 0;
        for (int i = 0; i < accounts.size(); i++ ){
            for (int j = 0; j < accounts[i].size(); j++){
                sum += accounts[i][j]; 
            }
            if (sum>maxWealth){
            maxWealth = sum;
            }
            sum = 0;
        }

        return maxWealth;
    }
};


//Lucky number in matrix
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int min;
        int max;
        int minimumi;
        int maksimumi;

        vector<int> ans;
        for(int i=0 ; i<matrix.size() ; i++) {
            min = 1000000;
            max = -1;
            for(int j=0 ; j<matrix[i].size() ; j++) {
                if(matrix[i][j]<min) {
                    min = matrix[i][j];
                    minimumi = j;
                }
            }
            for(int j=0 ; j<matrix.size() ; j++) {
                if(matrix[j][minimumi]>max) {
                    max = matrix[j][minimumi];
                }
            }
            if(max==min) {
                ans.push_back(min);
            }
        }
        return ans;
    }
};