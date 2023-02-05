#include "task.hpp"
#include <iostream>
#include <time.h>

void test_task0(){

	std::cout << "task0_1" << std::endl;
	int ar0[1000];
	randomFill(ar0, 1000, 0, 200 );
	show(ar0, 1000);

}


void test_task1(){

        std::cout << "task1_1" << std::endl;
	int ar1[100];
        randomFill1(ar1, 100, 100, 150); //идентична randomFill
	showEl(ar1, 100, 10, 10);

	std::cout << "task1_2" << std::endl;
	selectionSort(ar1, 100);
	showEl1(ar1, 100, 10, 10);//идентична  showEl, при повторном обращении ничего не выводила, пришлось делать такую же((

        std::cout << "task1_3" << std::endl;

}



void test_task2(){

	std::cout << "task2_1, task2_2 and task2_3" << std:: endl;
	int ar2[10];
	random(ar2, 10);
	print(ar2, 10);
	getMax(ar2, 10);
	getMin(ar2, 10);

}


int main(){

	test_task0();
	test_task1();
	test_task2();

	return 0;
}
