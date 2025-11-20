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
        stack<char> myStack;
        int deltaRuleUsed;
        int rRuleUsed;

        //we create some sort of while loop to call update variables, print out the values, and then increment step.
        
        
        return 0;        
    }

    void updateValues(string &state, string &unreadInput, stack<char> &myStack, int &rule) //update variables for each loop. might need to add a rule parameter
    {
        char input = unreadInput.substr(0,1);
        char stack = myStack.top;
        rule = findRule(state, input, stack);
        if (rule == 1)
        {
            state = "q";
            myStack.push('S');
            return;
        }
        if (rule == 2 || rule == 4)
        {
            state = state + input;
            unreadInput = unreadInput.substr(1, unreadInput.length()-1);
            return;
        }
        if (rule == 3 || rule == 5)
        {
            state = "q";
            myStack.pop();
            return;
        }
        if (rule == 6)
        {
            state = "q$";
            myStack.pop();
            return;
        }
        if (rule == 7)
        {
            myStack.pop();
            myStack.push('b');
            myStack.push('S');
            myStack.push('a');
            return;
        }
        if (rule == 8)
        {
            myStack.pop();
            return;
        }
        return;    
    } 

    int findRule(string State, char Input, char Stack) //finds the rule to use, returns the rule number
    {
        //we use the paramaters to check which rule it applies to
        if (State == "p")
        {
            return 1;
        }
        if (State == "q" && Input == 'a')
        {
            return 2;
        }
        if (State == "qa" && Stack == 'a')
        {
            return 3;
        }
        if (State == "q" && Input == 'b')
        {
            return 4;
        }
        if (State == "qb" && Stack == 'b')
        {
            return 5;
        }
        if (State == "q" && Input =='$')
        {
            return 6;
        }
        if (State == "qa" && Stack == 'S')
        {
            return 7;
        }
        if (State == "qb" && Stack == 'S')
        {
            return 8;
        }
        return 0;
    }


}
