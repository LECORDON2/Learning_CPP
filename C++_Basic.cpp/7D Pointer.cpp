
int main()
{

	// * : 포인터 변수가 가리키는 변수의 값
	// & : 변수의 주소 ex) &n : n 변수의 주소값

	// 포인터 : 주소를 가리키는 기능
	// 포인터 변수 : 주소를 저장하는 변수
	// 자료형 + *변수명
	// 해당 포인터에게 전달된 주소를 해석하는 단위가 자료형
	
	int* pInt = nullptr;
	// 아무것도 안 가리킨다는 뜻에서 nullptr
	// int 자료형의 변수를 가리키는 변수

	int i = 100;
	int* pInt = &i;
	// i라는 변수의 주소값을 가져와서 pInt안에 넣음
	// 주소를 저장하긴 할건데 int 변수만 받는 것, 다른 변수를 넣으면 안된다. 
	// 자기가 가리킬 타입의 데이터를 정해놓은것
	// 메모리 영역 안에는 위치가 존재한다. 

	float f = 3.f;
	// 만약 int* pInt = &f; 이렇게 넣는다면 같은 4byte이지만 오류가 난다.
	// int포인터에 float주소를 넣으면 실수표현 방식으로 되어있기 때문에 int방식으로 해석하면 이상한 숫자가 나오게 된다.
	


	// 주소로 접근
	(*pInt) = 100;
	// 별을 붙인건 변수의 주소값을 참조? 주소로 가보는 것
	// 결국 i에 100을 넣는 것

	// 주소의 단위 : byte
	// 주소의 표현은 정수표현 방식
	// 비트 단위로는 나눌 수 없다.
	100;

	// 100과 101은 1byte만큰의 차이

	105;


	return 0;

}