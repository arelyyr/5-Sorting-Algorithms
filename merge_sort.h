
// Merge sort
void merge(std::vector<std::string>& arr, int f, int m, int t) {
    int n1 = m - f + 1; // left side of array being mid-from+1
    int n2 = t - m; // right side being to-mid

    std::vector<std::string> L(n1), R(n2); 

    for (int i = 0; i < n1; i++) {
        L[i] = arr[f + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = f;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(std::vector<std::string>& arr, int f, int t) {
    if (f >= t) {
        return;
    }

    int m = f + (t - f) / 2;
    mergeSort(arr, f, m);
    mergeSort(arr, m + 1, t);
    merge(arr, f, m, t);
}