#include <iostream> 
#include <stack>  
#include <vector> 
using namespace std;

class DPA{ 

    public: 

    int main(){
        //define variables
        string input; 
        int step = 0;  
        string unreadInput;
        string state = "p"; 
        stack<string> myStack;
        int deltaRuleUsed;
        int rRuleUsed;

        //we create some sort of while loop to call update variables, print out the values, and then increment step.
        
        

        return 0;        
    }

    void updateValues(string &state, string &unreadInput, stack<string> &myStack) //update variables for each loop. might need to add a rule parameter
    {
        char input = unreadInput.substr(0,1);
        char stack = myStack.top;
        int rule = findRule(state, input, stack);
        
        //we might need a function for each rule idk, or we just do if statements and update accordingly.
        
    } 

    int findRule(string State, char Input, char Stack) //finds the rule to use, returns the rule number
    {
        //we use the paramaters to check which rule it applies to
    
    }


}
