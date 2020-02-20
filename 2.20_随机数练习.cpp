#include <iostream>
#include <math.h>
#include <time.h>
/*��ôͨ��rand()����[0,b)����  rand()%b
��ôͨ��rand()����[a,b)����    rand()%(b-a)+a
��ôͨ��rand()����0~1����      ((double)rand())/RAND_MAX
��ôͨ��rand()����0~100����     rand()%100  
*/
//����0~100����
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
//����0~1С��
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
			std::cout << "����" << std::endl;
		}
		else{
			p++;
			std::cout << "������" << std::endl;
		}
	}
	std::cout << t << "  " << p << std::endl;
}
