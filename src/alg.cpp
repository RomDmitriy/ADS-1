// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
	int count = 0, min = 0, max = size - 1, mid = 0;
	while (min <= max) {
		mid = (min + max) / 2;
		if (arr[mid] == value) {
			count++;
			break;
		}
		value < arr[mid] ? max = mid - 1 : min = mid + 1;
	}
	int l = 1;
	std::pair <bool, bool> whyNotxD = { std::make_pair(true, true) };
	if (count) {
		while (whyNotxD.first || whyNotxD.second) {
			if (mid + l < size) arr[mid + l] == value ? count++ : whyNotxD.first = false;
			if (mid - l >= 0) arr[mid - l] == value ? count++ : whyNotxD.second = false;
			l++;
		}
	}
	return count;
}
