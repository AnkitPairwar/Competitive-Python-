class Solution {
public:
    bool backspaceCompare(string S, string T) {
    string tmp =S ,smp=T; int ct = 0;	
	for(char x:tmp){
	    if (x == '#' && ct==0){
	        S = S.erase(ct,1);
	        continue;
	    }
	    else if (x == '#'){
	        S = S.erase(ct-1,2);
	        ct--;
	        continue;
        }
	   ct++;
	}
	ct=0;
	for(char x:smp){
	    if (x == '#' && ct==0){
	        T = T.erase(ct,1);
	        continue;       
	    }
	    else if (x == '#'){
	        T = T.erase(ct-1,2);
	        ct--;
	        continue;
	    }
	   ct++;
	}
    if(S!=T){
        return false;
    }
        return true;
}
};