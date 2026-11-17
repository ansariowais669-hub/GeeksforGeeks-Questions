class Solution {
  public:
    void printTillN(int n) {
        // code here
        print(n , 1) ;
    }
    
    void print(int n, int i){
        if(i == n){
            cout << n << " " ;
            return ;
        }else{
            cout << i << " " ;
            return print(n, i+1) ;
        }
    }
};
