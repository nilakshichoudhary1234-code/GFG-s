class Solution {
  public:
  
  
  
    void  rotateclockwise(string &s){
        char c= s[s.size()-1];
        int index = s.size()-2;
        
        while(index>=0){
            s[index+1]=s[index];
            index--;
        };
        s[0]=c;
        
        
    }
    void rotateanticlockwise(string &s){
         char c= s[0];
        int index = 1;
        
        while(index<s.size()){
            s[index-1]=s[index];
            index++;
        };
        s[s.size()-1]=c;
        
        
    }
    bool isRotated(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size()){
            return false;
        }
        
        string clockwise , anticlockwise;
        
        clockwise=s1;
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        
        if(clockwise==s2){
            return true;
        }
        
        anticlockwise=s1;
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        
        if(anticlockwise==s2){
            return true;
        }
        
          return false;
        
    }
      
};
