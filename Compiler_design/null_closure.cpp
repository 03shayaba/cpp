#include <iostream>
#include <vector>
#include <set>
#include <stack>

using namespace std;

// Function to perform DFS and find ε-closure
void findEpsilonClosure(int state, vector<vector<int>> &epsilonTransitions, set<int> &closure) {
    stack<int> s;
    s.push(state);
    
    while (!s.empty()) {
        int current = s.top();
        s.pop();
        
        if (closure.find(current) == closure.end()) {
            closure.insert(current);
            
            // Push all ε-transitions of the current state
            for (int next : epsilonTransitions[current]) {
                if (closure.find(next) == closure.end()) {
                    s.push(next);
                }
            }
        }
    }
}

// Function to compute ε-closure for all states
void computeEpsilonClosures(int numStates, vector<vector<int>> &epsilonTransitions) {
    for (int state = 0; state < numStates; state++) {
        set<int> closure;
        findEpsilonClosure(state, epsilonTransitions, closure);

        // Print the ε-closure of the current state
        cout << "ε-closure of state " << state << ": { ";
        for (int s : closure) {
            cout << s << " ";
        }
        cout << "}" << endl;
    }
}

int main() {
    int numStates;
    cout << "Enter the number of states: ";
    cin >> numStates;

    vector<vector<int>> epsilonTransitions(numStates);

    int numTransitions;
    cout << "Enter the number of ε-transitions: ";
    cin >> numTransitions;

    cout << "Enter the ε-transitions (state_from state_to):" << endl;
    for (int i = 0; i < numTransitions; i++) {
        int from, to;
        cin >> from >> to;
        epsilonTransitions[from].push_back(to);
    }

    cout << "\nComputing ε-closures...\n";
    computeEpsilonClosures(numStates, epsilonTransitions);

    return 0;
}
