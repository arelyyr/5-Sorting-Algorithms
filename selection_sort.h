// Selection sort
void selectionSort(std::vector<std::string>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int min_pos = i; // finding smallest value
        for (int j = i + 1; j < n; j++) { 
            if (arr[j] < arr[min_pos]) { // if another value becomes smaller than inital, swap
                min_pos = j;
            }
        }
        if (min_pos != i) {
            std::swap(arr[i], arr[min_pos]);
        }
    }
}