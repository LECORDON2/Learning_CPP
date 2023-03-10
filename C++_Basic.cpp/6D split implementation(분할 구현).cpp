// 헤더 파트
#pragma once
int Add(int a, int b);

// 이런 함수가 있다는 선언만 한 것
// 실제 구현은 Func.cpp에서 하고 cpp에서 헤더를 참조한다.
// 헤더파일에 다른 함수들도 넣었다면 다른데서도 쓸 수 있다.
// 헤더와 파일을 분할하는 이유는 손쉬운 관리를 하기 위함이다.
// 분할 구현에 의해서 성능저하가 있을 수 있다. 하나의 파일에서 적는 것이 성능면에는 좋다


// 내가 만약 main 함수에서 Test라는 함수를 호출하고 싶은데 Test가 main보다 밑에 있으면
// 오류가 난다. 위에서 부터 읽기 때문에 그럴 때
// main위쪽에 void Test();로 선언을 해준다. 나중에 컴파일 링크단계에서 잡아준다
// 추후에 잡아주기 때문에 문제가 안된다.
// LNK라고 나오면 링크단계에서 오류난 것
// 함수를 앞에다 선언하고 나중에 구현 할 수도 있다.


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// cpp 파트


#include "Func.h"
// 명시한 해당 파일을 복붙하는 것과 똑같은것

int Add(int a, int b)
{
	return a + b;
}


void name()
{



}
v

void name()
{



}


// 이러면 중복 오류가 남

// 헤더에 함수를 선언하는 것만 아니라 구현까지 하면 나중에 다 합쳐질때 함수들이 중복으로 들어올 수 있다?
// main 쪽 전역변수는 프로그램 실행 내내 존재해야 할 변수이지만 이곳에서 인식되지 않는다.
// 만약 헤더에 전역변수를 정의한다면 함수 구현할 때과 같이 중복되는 오료가 발생한다.
// 이것을 해결하기 위해 정적변수와 외부변수가 있다.
