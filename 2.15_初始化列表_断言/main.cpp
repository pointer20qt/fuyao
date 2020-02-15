#include<iostream>
#include<vector>
#include<initializer_list>
//#define NDEBUG 断言失效
#include<assert.h>

using namespace std;
static_assert(sizeof(int) != 32, "不合适的int大小");
class vec 
{
	int* obj;
	std::vector<int>a;
public:
	vec(std::initializer_list<int>arr) :a(arr)
	{
		obj = new int[arr.size()];
		for (int i = 0; i < arr.size(); i++)
		{
			obj[i] = *(arr.begin() + i);
		}

	}
	~vec()
	{
		delete[]obj;
	}
	int &operator [](unsigned int index)
	{
		assert(index >= 0 && index < a.size());
		return obj[index];
	}
};

int main()
{
	vec v({ 1, 2, 3, 4 });
	cout << v[2] << endl;
	v[2] = 5;
	cout << v[2] << endl;
	cout << v[-2] << endl;
}