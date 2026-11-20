class Solution {
  public:
    int weight(char ch){
        if(ch == '+' || ch == '-') return 0 ;
        else if(ch == '*' || ch == '/') return 1 ; 
        else if(ch == '^') return 2 ;
        else return -1 ;
    }
    
    string infixToPostfix(string& str) {
        // code here
        stack <char> s ;
        string postfix = "" ;
        
        for(char ch : str){
            if(ch == '(') s.push(ch) ;
            else if(ch == ')'){
                while(!s.empty() && s.top() != '('){
                    postfix += s.top() ;
                    s.pop() ;
                }
                if(!s.empty()) s.pop() ;
            }else if(weight(ch) == -1) postfix += ch ;
            else{
                while(!s.empty() && s.top() != '(' && ((weight(ch) < weight(s.top())) || ((weight(ch) == weight(s.top()) && ch != '^')) )){
                    postfix += s.top() ;
                    s.pop() ;
                }
                s.push(ch) ;
            }
        }
        
        while(!s.empty()){
            postfix += s.top() ;
            s.pop() ;
        }
        
        return postfix ;
    }
};
