
// 주석으로 처리되는 글자들은슬래쉬 두개를 쓴다
// 코드로 인식되지 않음


int main()
{
	// int : 자료형(date type) 어떤 자료의 형태인지 알려줌
	// i : 변수명 (자유롭게 정할수 있다)
	// 자료형 (괄호안은 크기 byte)
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형: float(4), double(8)
	// 1byte를 더 쪼개면 8bit로 나뉜다 이때 1비트가 메모리에서 최소단위 (0 or 1) 
	// 4byte = 32비트
	// 2의 10승 = 1kbyte, 1024kb = 1 MB, 1024MB = 1GB, 1024GB = 1TB ...
	// 1byte로 할수 있는 건? 1byte = 8bit
	// 8bit로 표현할 수 있는 가지수는 2**8 = 256가지 인데 
	// 이것으로 표현할 수있는 수의범위(정수만, 양수만) = 0 ~ 255까지
	// 정수형, 실수형을 나누는 이유는 메모리를 다루고 표현하는 방식이 완전히 다르기 때문이다.
	// 실수는 0 ~ 1까지 보더라도 무한대이다. 이것을 어떻게 비트로 표현할까? 부동소수점이라는 표현방식을 사용한다.
	

	// int는 정수형이기 때문에 int i는 정수형이며 4byte
	int i = 0;
	
	// unsigned 양수만 표현한다는 의미
	// 0 ~ 255 -> 256가지
	unsigned char c = 0;
	
	// = 도 연산자, == 가 일반적으로 양쪽이 동일하다는 등호 
	// 256은 어떻게 들어가는?
	
	c = 0;
	c = 255;
	
	c = 256;
	// 256은 어떻게 가능? - 256은 이진수로 볼때 나머지가 0이고 1이 아홉번재로 나온 경우이다. 8개가 전부 1이면 255
	// 8비트니까 9번재 공간이 없다. 256을 넣어도 0이 들어가 있다.
	
	c = -1;
	// 컴퓨터에서 음수는 어떤식으로 표현?

	// signed가 생략된 상태
	// 8비트인데 음수까지 어떻게 대응?
	// -128 ~ 0 ~ 127 -> 256가지
	// 8개의 비트중에 최상위 비트(MSB라고 부름[Most significant bit])가 0인지 1인지에 따라 나뉘도록 만듬, 0일때 음수
	// 00000001 = 1, 10000001 = ?
	// 이진수 덧셈은 십진수처럼 자릿수대로 하면됨, 뺄셈도 똑같이 하면 되지만 컴퓨터는 그렇게 하지않고 음수를 더하는 식으로함
	// CPU에서는 최적화때문에 뺄셈도 덧셈처럼함
	// 10이랑 더해서 0이 나오는 수가 -10 이라고 생각하는 것
	// 01111111 = 127, 127이랑 더해서 0이나오는 수가 -127이다.
	// 01111111 + 10000001 100000000 = 0 (수가 8비트라 마지막 수가 앞으로 넘어가서 즉 10000001 = -127
	// 00000001 + 11111111 = 100000000 = 0이기 때문에 11111111 = -1

	char c1 = 0;

	c1 = 255;
	// -1로 나온다 모든 칸이 1이라서?
	
	// c도 있고 c1도 있다. 두개의 메모리 비트 상태는(c = 255;, c1 = 255;일때) 동일하다(모두 1인 상태)
	
	// 메모리 상태는 같은데 어떤 해석을 하느냐에 따라서 다르게 될 수 있다.!!!!!!!!!!!!!!!!!!!!!

	c1 = -1;
	//이것은 받아들임

	c = -1;
	// 255이다 11111111이기 때문에(1과 더했을 때 0이 되는 수)

	// 음수 찾는 법 : 1은 0으로 0은 1로 -> 다 더하면 모두 1이 되서 약간 모자름 -> 1을 추가로 더하면 0이 됨 = 음수
	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다
	// short = 2**16 = 65536
	

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// 정수형, 실수형을 나누는 이유는 메모리를 다루고 표현하는 방식이 완전히 다르기 때문이다.
	// 실수는 0 ~ 1까지 보더라도 무한대이다. 이것을 어떻게 비트로 표현할까? 부동소수점이라는 표현방식을 사용한다.
	// 정수에서 4는 00000100이다
	int a = 4 + 4.0;
	// 4.0이라는 실수를 정수로 바꾸는 형변환이라는 과정이 존재한다.비효율적인 과정이며 실수가 발생할 수 있는 과정이다.
	// 실수에서는 특정숫자를 정확히 표현하는 것이 아니라 근삿값으로 표현함
	// 부동소수점 : 
	// 21.8125를 표현 ->  21 = 10101(이진법) 10101.1에서 0.1은 0.5라는 개념 2**-1, 2**-2, 2**-3으로 계속 내려감
	// 0.11010 = 0.5 + 0.25 + 0 + 0.0625 = 0.8125 
	// 즉 21.8125 = 10101.11010
	// 0.724254252 와 가장 근접한 숫자를 찾는것? float보다 double이 더 정밀하다

	// 정수표현 방식과 실수 표현 방식은 다르다
	// 실수 표현 방식은 정밀도에 의존한다.
	// 따라서 double(8) 자료형이 float(4) 보다 더 아래의 소수점까지 정확하게 표현이 가능하다.
	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명시적으로 편환하자
	// EX)
	float f = 10.2415f + (float)20;
	// 실수표현 체계에서의 20으로 바꿔줌, (float)를 적지 않아도 변환은 잃어남 그러나 명시적으로 적어주기



	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	// 실수를 상수로 적을 경우 소수점 뒤에 f를 붙이면 float 자료형으로, f를 붙이지 않으면 double 자료형으로 간주한다.
	// 0.1f; 0.1

	// 연산자
	// 대입연산자, =
	// ; = 세미콜론, 현재 구문의 명령어가 다 끝낫다는 의미
	// 산술 연산자
	// +, -, *, /, %(모듈러스, 나머지, 피연산자가 모두 정수)
	// ++, -- (증감 연산자)

	int data = 10 + 10;
	// data에는 20이 들어간다. 연산자 우선순위가 있다. =과 + 둘다 연산자인데 + 가 먼저 수행됨, = 가 먼저 수행되면 data는 10
	// data + 20;
	// data가 40이 되나? cpu는 임시로 레지스터 메로리를 통해서 중간 연산을 저장한다. 그러니 결과를 집어넣지 않으면 날라간다.
	// data = data + 20;
	// 이러면 40 됨
	// data = data + 20; = data += 20; 같은 뜻이다
	data += 20;
	// data에다 20을 더한것을 다시 집어넣는 것

	// 연산을 당하는 것은 피연산자
	// 피연산자가 실수면 소수점으로 계속 떨어짐
	// 정수끼리의 나눗셈은 나머지가 생길 수 있다
	data = 10 / 3;
	// 이러면 3이 나옴
	data = 10 % 3;
	// 1이 나온다. 
	// 실수끼리의 나눗셈에서 나머지는 계속 소수점으로 떨어진다
	data = 10. % 3.;
	// 이러면 오류가 난다. 나머지가 안나와서
	data = 10. / 3.;
	// data는 int라서 정수 표현체계로 바꾼다. 소수점이 짤림
	data = (int)(10. / 3.);
	// 전체 연산의 결과를 int로 바꾸어 data에 집어 넣겠다는 뜻

	// float f = 10.2415f + (float)20;
	//data = 10. / 3.;
	// f를 붙일경우에는 float으로 보는 것이고 .만 붙인 것은 double로 보는 것


	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// ++, -- (증감 연산자)
	// 한 단계 증가 또는 감소
	
	data = 0;
	data++;
	// data는 1이됨
	data++;
	// data는 2가됨

	data = 0;
	data--;
	data--;
	// 1이 감소함

	// 한 단계씩 증가 및 감소함 !!!!! 경우에 따라 다를 수 있다.

	// 앞 혹은 뒤에 붙냐에 따라 연산자 우선순위가 바뀐다
	data = 0;
	++data; // 전위(전치)
	data++; // 후위(후치), 모든 연산자를 통틀어 가장 늦게 연산됨

	a = 10;
	data = a++;
	// a의 값을 넣고 증가한 것이기 때문에 data는 10이 됨
	data = ++a;
	// 이때는 11로 됨
	// ++은 변수 공간자체의 값이 변화하기 때문에 다시 대입할 필요가 없다.
	// 후위 연산자로 사용하는 경우, 연산자 우선순위가 가장 나중으로 밀린다.

	data = 0;
	data--;
	--data;
	// 굳이 전위 후위 따질 필요가 없지만 이럴 경우에도 전위로 쓰는 것이 좋다. 
	// 연산자는 특별한 사유가 없는한 전위로 사용한다.


	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	// 논리 연산자
	// !(역, 참을 거짓으로 거짓을 참으로), &&(곱, 둘다 참이여야 참, and ), ||(합, 돈표시 위에, 둘 중 하나만 참이여도 참, or)
	// 참(ture)과 거짓(false)

	// 참 : 0이 아닌 값, 1 - 10은 참이라고 대답한다. 참 거짓 물어보면 참이면 1을 줌
	// 거짓 : 0

	true;
	false;

	int truefalse = true;
	//  이때 truefals는 1

	int truefalse = false;
	//  이때 truefals는 0

	bool truefalse = false;
	// bool : true, false만 받아들이는 자료형, 1byte

	bool istrue = 100;
	// 이때는 1로 받아들임 그래서 정수자료형으로 쓰는 것은 곤란

	istrue = true;
	istrue = !istrue;
	// ture가 false로 뒤집힌게 들어옴

	int iTrue = 100;
	iTrue = !iTrue;
	// 이러면 iTrue에는 0이 들어와있다. 참이면 0이 아니고 거짓이면 0인데 100을 뒤집으니 거짓인 0이 된다.

	int iTrue = 0;
	iTrue = !iTrue;
	// 반대로 거짓인 0을 뒤집으면 참이 되는데 이때 참은 1이된다. iTrue는 1이다.

	iTrue = 100 && 200;
	// 둘다 0이 아닌 참이기 때문에 iTrue는 참이 됨으로 1이 된다

	iTrue = 0 || 300;
	// 둘중 하나가 참이므로 참 iTure는 1이다. 
	
	iTrue = 0 || 0;
	// 이러면 0이된다. 


	// 비교 연산자
	// == : 양쪽 피연산자가 같은지
	// != : 양족 피연산자가 다른지(참으로 대답하면 다른 것)
	// < : 오른쪽이 큰지
	// >, <=, >= 도 존재
	// 참, 거짓으로 나온다.


	//구문
	// if, else
	// switch case

	data = 0;
	if (100 && 200)
	{
		data = 100;

	}
	// 전체결과는 참이다. 고로 if 안에 있는 것이 수행되어 data는 100이된다.

	if (0 && 200)
	{
		data = 100;

	}
	// 전체결과는 거짓이다. 고로 if 안에 있는 것이 수행되지 않아 data는 0이다.

	if (data == 100)
	{

		// 위에서 data에 100을 넣지 않았다면 수행되지 않음
		// if가 참인 경우 수행

	}
	else
	{
		// if가 거짓인 경우 수행 

	}
	
	if ()
	{

	}
	else if ()
	{
		// if가 거짓이 B을 때 계속 물어봄, 하나만 걸려랴, 마지막은 else, else는 없어도되나 없으면 모든 조건이 실패 했을때 아무것도 수행 안됨
		// 하나가 수행되면 나머지는 안됨 w누르고 있으면서 a는 못누름

	}
	else if ()
	{


	}
	else if ()
	{

		// else i는 원하는 만큼 늘릴 수 있음
	}
	else
	{

	}


	// 삼항 연산자
	// :?






	return 0;
}