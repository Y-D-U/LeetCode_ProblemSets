/*
Decode The Message

You are given the strings key and message, which represent a cipher key and a secret message, respectively. The steps to decode message are as follows:

Use the first appearance of all 26 lowercase English letters in key as the order of the substitution table.
Align the substitution table with the regular English alphabet.
Each letter in message is then substituted using the table.
Spaces ' ' are transformed to themselves.
For example, given key = "happy boy" (actual key would have at least one instance of each letter in the alphabet), we have the partial substitution table of
('h' -> 'a', 'a' -> 'b', 'p' -> 'c', 'y' -> 'd', 'b' -> 'e', 'o' -> 'f').
Return the decoded message.
*/

/*Example 1:


Input: key = "the quick brown fox jumps over the lazy dog", message = "vkbs bs t suepuv"
Output: "this is a secret"
*/
class Solution {
public:
    string decodeMessage(string key, string message) {
        string al="abcdefghijklmnopqrstuvwxyz";
        unordered_map<char,char> mp;
        int i=0,j=0;
        while(i<key.size()){
            if (mp.find(key[i])==mp.end()){
                if (key[i]==' ') mp[key[i++]]=' ';
                else{
                    mp[key[i]]=al[j];
                    i++;
                    j++;}
            }
            else{
                i++;
            }
            
        }
        string s;
        for(char c:message){
            s.push_back(mp[c]);
        }
        return s;
        
    }
};
