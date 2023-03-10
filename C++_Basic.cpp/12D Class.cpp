#include <iostream>
#include "Arr.h"

struct tMy // C++ 스타일
{

};

class CMy 
{
	// 접근 제한 지정자
	// private, protected, public

private:
	int m_i;
	float m_f;

public:
	int m_p;

public:
	void SetInt(int i) // 이 클래스만 사용할 수 있는 함수
	{
		this->m_i = i; // 디스 포인터, 디스는 해당멤버를 호출한 객체의 주소타입을 말함 
		               // this->를 생략하고 m_i = i; 로 적어도 됨 
	}
	//void SetInt(CMy* _this, int i) // C 타입으로 적으면 이렇게 됨
	//{
	//	_this->m_i = i;        
	//}
	//

	// 대입 연산자, 클래스 내에서 자동으로 만들어 주던 것
	// operator = : 클래스 쪽에 대입연산자가 발생했을 때 호출되는 함수라는 뜻
	// c2 = c3; 일경우 // operator = 을 호출한 객체는 c2, 선언한 인자(괄호 안)는 c3 것
	CMy& operator = (const CMy& _Other) // 앞쪽의 CMy&는 반환 타입
	{
		m_i = _Other.m_i;      // this->m_i = _Other.m_i; 원래는 이것이다. 
		m_f = _Other.m_f;
		return *this;          // c1 = c2; 의 연산도 가능해야 하므로 c2의 디스 포인터이다. c2 = c3; 된 c2 를 참조
	}

public:
	// 생성자
	// CMy() // 반환 타입이없다. 객체가 만들어 질때 자동으로 호출 됨, 초기화 함수랑 비슷하다.
	// {
	//  	m_i = 100;
	// }  // 객체가 만들어 짐과 동시에 값이 들어가야 진정한 의미의 초기화이다.
	
	// 이니셜라이져 : 객체가 만들어 질때 값이 들어가는 진정한 의미의 초기화
	CMy() 
		: m_i(100)
		, m_f(0.f)
	{
	}
	
  // 소멸자
	// 문법 : ~ 해당클래스 이름
	~CMy()
	{
	}
	// 생성자, 소멸자는 내가 안만들면 컴파일러가 자동으로 만든다. 이를 디폴드 생성자, 소멸자라고 함
};

int main()
{
	// C++ 클래스 특징
	// 접근제한 지정자
	// 클래스 내의 멤버 변수 or 멤버 함수의 접근 레벨

	// 생성자, 소멸자
	// 객체생성, 소멸 시 자동으로 호출
	// 직접 만들지 않으면 기본 생성자, 기본 소멸자가 만들어짐

	// 멤버함수
	// 해당 클래스가 사용하는 전용 함수
	// 해당 클래스의 객체가 필요함
	// 멤버 함수를 객체를 통해서 호출하면, 해당 객체의 주소가 this 포인터로 전달 된다.
	
	{
		// 레퍼런스
		
                // 자료형 * 변수명;     포인터 변수 선언
		// *포인터 변수;        포인터로 주소 역참조
		// &변수;               변수의 주소값
		// 자료형& 변수명;      레퍼런스 변수 선언
		
		// C++에 추가된 기능
		// 포인터와 유사
		// 원본을 참조한다.
		// 참조변수를 통해서 직접적으로 원본을 수정 할 수 있다.


		int a = 10;

		int* const p = &a;
		*p = 100; 
		
    		int& iRef = a;
		iRef = 100;

    		// 위와 거의 같은 상황, 주소로 접근하여 수정
		// 한번 가리키는 대상(포인터 변수)을 수정할 수 없다.
		// 레퍼런스의 장점 : 원본을 수정할 때 역참조를 할 필요가 없다. 주소관련 실수가 방지 된다.

	
    
                const int* const p2 = &a;
		// *p2 = 10;

		const int& iRefConst = a; // 위와 동일하다.
		// iRefConst = 10;

	}

	
	
	// SetInt() 이런식으로 호출은 불가능하다.
	CMy::SetInt(10); // :: 범위지정 스코프 연산자, 
	                 // 이런식으로 호출하는 것도 안된다. 반드시 객체가 있어야 한다.
	c.SetInt(10);    // 이런 식으로만 가능

	tArr arr = {};
	InitArr(&arr);
	PushBack(&arr, 10);

	ReleaseArr(&arr);
	// 배열안에 데이터가 1개 들어가 있음

	arr.iCount = 100;
	// 객체안의 멤버를 언제든지 바꿀 수 있다.

	CMy c;
	// c.m_p 만 가능함 c.m_1은 안됨 private와 public의 차이

	c.SetInt(); // 이렇게 함수도 같이 뜬다.
	c.m_i = 0; // 이 것은 불가능하다. private이기 때문
	c.SetInt(10); // 이런 방식의 접근은 된다. m_i에 10이 들어감
	// 객체가 만들어 짊과 동시에 값이 들어가야 진정한 의미의 초기화이다.
	// InitiArr과 이니셜라이져가 아닌 생성자 CMy는 엄밀히 말해 초기화가 아니다.

	CMy c2; 
	c2.SetInt(100);

	CMy c3;
	c3.SetInt(1000);

	// 값을 대입
	int i = 0;
	int a = 10; 

	c3 = c2;
	c3 + c2;

	int b = 1;
	int b2 = 3;
	int b3 = 4;
	
	b = b2 = b3;
	// b2 = b3; 연산이 먼저 끝나고
	// b1 = b2; 가 되어야한다.

	// 위의 기본 연산처럼 되어야 하므로
	c1 = c2 = c3;
	// c2 = c3가 먼저 연산되면
	// c1 = c2;가 되어야 하므로 // #35
	
	// main 지역 변수이므로 main함수가 끝날 때 소멸자 ~CMy 호출 됨
	return 0;
}
