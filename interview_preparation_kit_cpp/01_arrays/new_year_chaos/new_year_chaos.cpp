/*
 * HackerRank Link: https://www.hackerrank.com/challenges/new-year-chaos/problem
 * Algorithm Analysis: 
 * 
 * 
 * The execution time is given by the first loop as the inner loop always looks at a maximun of 2 
 * numbers ahead of the current index therefore the the excution time can be taken as O(n) 
 * 
 * */


vector<string> split_string(string);

// Complete the minimumBribes function below.
void minimumBribes(vector<int> q) {
    int counter = 0;

    for(int i = q.size() - 1; i >= 0; i--)
    {
        //if q[i] is two more that two position ahead then it is too chaotic
        //minus values mean that it was been bribed so they are fine
        if(q[i] - (i + 1) > 2){
             cout << "Too chaotic" << endl;
             return;
        }
        
        //everyone who bribed q[i] can only be ahead one position 
        //we count the number of numbers higher that p[i] staring from
        //that position
        for(int j = max(0, q[i] - 2); j < i; j++){
            if(q[j] > q[i])
                counter++;
        }
    }

    cout << counter << endl;
}
