class Solution {
  public:
    int closestNumber(int n, int m) {
        int n1 = m*(n/m);
        int n2 = (n*m>0)?(n1+m):(n1-m);
        
        if(abs(n-n1)<abs(n-n2)){
            return n1;
            
        }
        if(abs(n-n2)<abs(n-n1)){
            return n2;
        }
        
        return (abs(n1)>abs(n2)) ? n1:n2;
        
    }
};