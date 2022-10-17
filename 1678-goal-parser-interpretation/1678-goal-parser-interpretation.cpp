class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i =0; i<command.length(); i++)
        {
            if(command[i] == '(')
            {
                if(command[i+1] == ')')
                    ans += 'o';
                else if(command[i+1] = 'a')
                    ans += "al";
            }
            else if(command[i] == 'G')
                ans += 'G';
        }
        return ans;
    }
};