std::vector<int> findTwoInitialNumbers(int n, std::vector<int> listOfDivisors)
{
    int max = *max_element(listOfDivisors.begin(), listOfDivisors.end()), maxnew;
    for(int i = 1; i <= max; i++)
        if(max % i == 0) listOfDivisors.erase(find(listOfDivisors.begin(), listOfDivisors.end(), i));
    maxnew = *max_element(listOfDivisors.begin(), listOfDivisors.end());
    return {max, maxnew};
}
