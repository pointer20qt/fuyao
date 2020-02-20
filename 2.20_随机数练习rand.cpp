#include <iostream>
#include <math.h>
#include <time.h>
/*怎么通过rand()生成[0,b)的数  rand()%b
怎么通过rand()生成[a,b)的数    rand()%(b-a)+a
怎么通过rand()生成0~1的数      ((double)rand())/RAND_MAX
怎么通过rand()生成0~100的数     rand()%100  
*/
//传入0~100整数
bool probability(int n){
	int b = rand() % 100;
	if (b < n)
	{
		return true;
	}
	else{
		return false;
	}
}
//传入0~1小数
bool probability1(double n){
	double b = ((double)rand()) / RAND_MAX;
	if (b < n)
	{
		return true;
	}
	else{
		return false;
	}
}

int main(){
	srand(time(0));
	int t = 0, p = 0;
	for (int i = 0; i < 100; i++){
		if (probability1(0.5)){
			t++;
			std::cout << "暴击" << std::endl;
		}
		else{
			p++;
			std::cout << "不暴击" << std::endl;
		}
	}
	std::cout << t << "  " << p << std::endl;
}
