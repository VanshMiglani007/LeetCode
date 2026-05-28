class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string>arr;
        int i = 0;
        while(i<words.size()){
            int count = words[i].length();
            int j=i+1;

            while(j<words.size()&& count+words[j].length()+(j-i)<=maxWidth){
                count += words[j].length();
                j++;
            }
            int gaps = j-i-1;
            
            string s = "";
            if(j==words.size()||gaps==0){
                for(int k =i;k<j;k++){
                    s+=words[k];
                    if(k!=j-1){
                        s+=" ";
                    }
                }

                while(s.length()<maxWidth){
                    s += " ";
                }
            }
            else{
                int space = maxWidth - count;
                int eachspace = space/gaps;
                int extraspace = space%gaps;

                for(int w=i;w<j;w++){
                    s += words[w];

                    if(w!=j-1){
                        int total = eachspace;

                        if(extraspace>0){
                            total++;
                            extraspace--;
                        }

                        s+=string(total,' ');
                    }
                }
            }
            arr.push_back(s);

            i=j;
        }
        return arr;
    }
};