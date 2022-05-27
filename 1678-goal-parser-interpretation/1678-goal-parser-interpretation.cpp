class Solution {
public:
    string interpret(string command) {
        
        string a;
        for(int i=0; i<command.size(); i++){
            if (command[i]== '(' && command[i+1]== ')'){
                a+='o';
                i++;
            }
            else if(command[i] == '(' && command[i+1] =='a'){
                a+="al";
                i+=3;
            }
            else {
                a+='G';
            }
        }return a; 
    }
};