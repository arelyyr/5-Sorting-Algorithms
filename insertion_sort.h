// Insertion sort
void insertionSort(std::vector<std::string>& arr) { // setting insertion into a vector
    int n = arr.size();
    for (int i = 1; i < n; i++) { 
        std::string key = arr[i]; 
        int j = i - 1; // setting starting variable to start at second item
        while (j >= 0 && arr[j] > key) { // if j is greater than i, decrease
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
