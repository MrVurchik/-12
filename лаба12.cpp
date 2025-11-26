#include<iostream>;
using namespace std;
int factorial(int n) {
	if (n <= 1)
		return 1;
	return n * factorial(n - 1);
};
int  fibonacci(int n) {
	if (n <= 1)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int GreatestCommonDivisor(int n,int b){
	if (b == 0) return n;
	return GreatestCommonDivisor(b, n % b);
}
int power(int a, int b) {
	if (b == 0) return 1;
	return a * power(a, b - 1);
}
int suma(int n,int blocksize) {
	if (n == 0) return 0;
	int size = power(10, blocksize);
	return  (n % size) + suma(n / size, blocksize);
}
int binarySearch(int arr[], int left, int right, int target) {
	if (left > right) return -1; 

	int mid = left + (right - left) / 2; 

	if (arr[mid] == target) return mid; 
	else if (arr[mid] > target)
		return binarySearch(arr, left, mid - 1, target); 
	else
		return binarySearch(arr, mid + 1, right, target); 
}
int sumArray(int arr[], int n) {
	if (n == 0) return 0;              
	return arr[n - 1] + sumArray(arr, n - 1);
	
}
int findMin(int arr[], int n) {
	if (n == 1) return arr[0]; 
	return min(arr[n - 1], findMin(arr, n - 1));
}
int findMax(int arr[], int n) {
	if (n == 1) return arr[0]; 
	return max(arr[n - 1], findMax(arr, n - 1));
}
	
int main() {
	int num;
	cout << "factorial and fibonacci" << endl;
	cout << "Enter a number:";
	cin >> num;
	cout << endl;
	cout << "factorial = " <<  factorial(num) << endl;
    cout << "fibonacci  = " << fibonacci(num) << endl;
	cout << "GreatestCommonDivisor" << endl;
	int n, b;
		cout << "Enter a number one:"; cin >> n;
		cout << "Enter a number two:"; cin >> b; cout << endl;
		cout << "GreatestCommonDivisor:" << GreatestCommonDivisor(n, b);  cout << endl;
		cout << "Power" << endl;
		int a, w;
		cout << "Enter a number:"; cin >> a;
		cout << "Enter a power:"; cin >> w; cout << endl;
		cout << "Result:" << power(a, w) << endl;
		cout << "Suma number" << endl;
		int num2,size;
		cout << "Enter a number:"; cin >> num2;
		cout << "Enter a size:"; cin >> size; cout << endl;
		cout << "Result:" << suma(num2, size); cout << endl;
		cout << "binarySearch" << endl;
		int arr[] = { 1, 3, 5, 7, 9, 11, 13 };
		int j = sizeof(arr) / sizeof(arr[0]);
		int target;
		cout << "enter element mas:";
		cin >> target; cout << endl;
		int result = binarySearch(arr, 0, j - 1, target);

		if (result != -1)
			cout << "Åelement " << target << " find on position " << result << endl;
		else
			cout << "element " << target << " dont find " << endl;
		cout << "Suma mas" << endl;
		int arr2[] = { 1, 2, 3, 4, 5 };
		int k = sizeof(arr2) / sizeof(arr2[0]); 
        cout << "Suma elements mas: " << sumArray(arr2, k) << endl;
		cout << "Min and max value" << endl;
		int arr3[] = { 12, 5, 7, 25, 3, 18 };
		int q = sizeof(arr3) / sizeof(arr3[0]);

		cout << "Min element: " << findMin(arr3, q) << endl;
		cout << "Max element: " << findMax(arr3, q) << endl;
  return 0;
}