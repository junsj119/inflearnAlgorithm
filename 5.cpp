//5. ���̰��
//�ִ��� ���� ���� �غ����� �ߴ�. split �ϴ¹��� substr �Լ� ����ϴ� ��.
#include<iostream>
#include<vector>
#include<sstream>
#pragma warning(disable:4996) 

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> vec;

	int sum = 0;
	string str;
	cin >> str;

	istringstream ss(str);
	string stringBuffer;
	while (getline(ss, stringBuffer, '-'))
		vec.push_back(stringBuffer);


	//���� ���
	int age = stoi(vec[0].substr(0, 2));

	while (age != 20)
	{
		age++;
		sum++;
		if (age == 100)
			age = 0;
	}
	cout << sum;

	//���� ���
	string sex = vec[1].substr(0, 1);	//2 ��° �Ķ���Ͱ� ���� �� ���ڿ��� ������.
	if (sex == "1" || sex == "3")
		cout << " M";
	else
		cout << " W";


	return 0;
}

/*
#include<iostream>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "rt", stdin);
	char a[20];

	int year, age;
	scanf("%s", &a);
	if (a[7] == '1' || a[7] == '2')	year = 1900 + ((a[0] - 48) * 10 + (a[1] - '0'));
	else year = 2000 + ((a[0] - 48) * 10 + (a[1] - '0'));

	age = 2019 - year + 1;
	printf("%d ", age);

	if (a[7] == '1' || a[7] == '3') printf("M");
	else							printf("W");
	return 0;
}
*/