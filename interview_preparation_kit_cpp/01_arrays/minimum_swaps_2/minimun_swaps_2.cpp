/*
 * HackerRank Link: https://www.hackerrank.com/challenges/minimum-swaps-2/problem
 * Algorithm Analysis: 
 * 
 * 
 * 
 *
 * 
 * */


int minimumSwaps(vector<int> arr) {

vector<int> aux = arr;
sort(arr.begin(), arr.end());
    
//check the mininum swapps needed
int number_of_swaps = 0;
for(int x = 0; x < arr.size(); x++)
{
    if(arr[x] != aux[x])
    {
        std::vector<int>::iterator current_element = aux.begin() + x;
        std::vector<int>::iterator target_element = find(aux.begin() + x, aux.end(), arr[x]);
        
        swap(*current_element, *target_element);
        number_of_swaps++;
        
    }
 
}
return number_of_swaps;
}
