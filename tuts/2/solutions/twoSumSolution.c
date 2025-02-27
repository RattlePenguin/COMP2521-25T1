bool hasTwoSum(int a[], int n, int v) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] + a[j] == v) {
				return true;
			}
		}
	}
	return false;
}