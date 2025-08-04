class Solution {
public:
    string removeOccurrences(string s, string part) {
        int partsize = part.length();
        while(s.find(part) != string::npos){
            int index = s.find(part);
                s.replace(index,partsize,"");
        }
        return s;
    }
};

// if string  is include in header then no need to use string::npos use only npos