#include <stdio.h>


int main()
{


	// const
	const int cint = 100;
	// main이라는 스택안에 상수로서 존재 
	// 그러나 문법적으로 막아 놓은 것, 절대 안바뀌는 것은 아니다.

	// 상수화
	// r-value : 상수
	// l-value : 변수
	// 상수 : 변하지 않음

	// 10 = 100; // 말이 안됨

	// cint = 1000; // 이것도 말이 안됨

	printf("%d/n", cint);
	// 이러면 100이 나옴

	int* pInt = nullptr;


	pInt = (int*)&cint;
	*pInt = 300;
	printf("%d/n", cint);

	// 컴파일러 집장에서는 cint를 상수로 보는 것, main스택 안에 존재하는 cint 포인터로 강제로 접근하여
	// 값을 바꾸고 출력하면 300이 나올 것이라고 생각했지만 100이 나온다.
	// cpu가 중간 연산 결과 저장으로 빠르게 끌어다 쓰는 레지스터메모리가 있다.
	// 원래 강제로 캐스팅한 300이 나와야 하지만 cint에 있는 값인 100을 레지스터 메모리가 기억하고 문법상 상수이니 바꿀수 없다고 판단하여 100이 출력된 것

	// volatile const int cint = 100; 으로 쓰면 300이 나온다.
	// volatile은 휘발성이라는 뜻인데 레지스터를 이용하는 방식을 쓰지 말라는 것. 값을 제대로 확인해라

	// const이더라도 진짜 상수가 된것이 아니라 문법적으로 방어하는 것


	cint;






	return 0;

}


