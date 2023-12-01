// Bubble sort
void bubbleSort(std::vector<std::string>& arr) { // setting bubble sort in vector
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) { // if your inital is less than next, don't swap
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) { // if your next is less than your initial, keep going
            if (arr[j] > arr[j + 1]) { // if next is greater than next plus 1, swap
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) { // if it doesn't swap anymore, break
            break;
        }
    }
}