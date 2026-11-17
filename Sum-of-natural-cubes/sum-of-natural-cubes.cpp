class Solution {
  public:
    int sumOfSeries(int n) {
        // code here
        int sum = 0 ;
        return cubes_sum(n, 1, sum) ;
    }
    
    int cubes_sum(int n ,int i ,int &sum){
        if(i > n) return sum ;
        
        sum += i * i * i ;
        cubes_sum(n, i+1, sum) ;
    }
};
