#include <stdio.h>


int main()
{

	// 포인터 변수
	// 자료형 변수명
	int* pInt = nullptr;
	
	// 주소를 저장, 주소 공간을 int로 보는 것

	char* pChar = nullptr;
	short* pshort = nullptr;
	// 컴파일러는 주소와 자료형을 맞출라교 한다.
	// 일반적으로 받아가려는 주소와 자료형을 맞추는 것이 맞다.

	// 포인터 변수의 크기는 다같다.
	// 표인터 변수의 크기는 플랫폼에 따라 달라진다.
	// 64bit에서 주소를 저장하는 변수는 8byte
	// 32bit에서 주소를 저장하는 변수는 4byte, 4byte로 만들수 있는 주소는 42억개 정도 즉 4GB 정도이다.
	// 32bit 에서는 RAM 4기가 이상이 성능을 내기가 힘들다.
	int iSize = sizeof(pInt); // 8이 나온다.

	int i = 0;

	pInt = &i;
	// &은 해당 변수의 주소값을 이야기하는 것

	pInt += 1;
	// 주소의 증감 단위는 자료형의 사이즈에 따라 다르다. 위의 경우는 int이기 때문에 4씩 증가
	// pInt는 int* 변수 이기 때문에, 가리키는 곳을 int로 해석한다.
	// 따라서 주소값을 1증가하는 의미는 다음 int 위치로 접근하기 위해서 sizeof(int) 단위로 증가하게 된다.

	// 포인터와 배열
	// 배열의 특징
	// 1. 메모리가 연속적인 구조이다.
	// 2. 배열의 이름은 배열의 시작 주소이다.
	int iArr[10] = {};

	// int 단위로 접근
	*(iArr + 1) = 10; // iArr[1] = 10; 과 같은것
	// 10이 두번째 자리에 들어간다는 것.

	*(iArr + 0) = 10; // iArr[0] = 10; 과 같은것
	// 첫번재 주소에 10 넣는 것





	return 0;

}