#include<iostream>;
using namespace std;
int main() {
	cout << "Enter the amount of money: ";
	int money;
	int remain;
	cin >> money;
	int count100 = money / 100;
	cout << "100: " << count100 << endl;
	remain = money % 100;
	int count50 = remain / 50;
	cout << "50: " << count50 << endl;
	remain = remain % 50;
	int count20 = remain / 20;
	cout << "20: " << count20 << endl;
	remain = remain % 20;
	int count10 = remain / 10;
	cout << "10: " << count10 << endl;
	remain = remain % 10;
	int count5 = remain / 5;
	cout << "5: " << count5 << endl;
	remain = remain % 5;
	int count1 = remain / 1;
	cout << "1: " << count1 << endl;
	return 0;
}