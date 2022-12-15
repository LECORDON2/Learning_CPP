
// 주석으로 처리되는 글자들은슬래쉬 두개를 쓴다
// 코드로 인식되지 않음


int main()
{
	//int : 자료형(date type) 어떤 자료의 형태인지 알려줌
	// i : 변수명 (자유롭게 정할수 있다)
	// 자료형 (괄호안은 크기 byte)
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형: float(4), double(8)
	// 1byte를 더 쪼개면 8bit로 나뉜다 이때 1bit가 메모리에서 최소단위 (0 or 1) 
	// 4byte = 4 * 8 = 32bit
	// 2의 10승 = 1kbyte, 1024KB = 1 MB, 1024MB = 1GB, 1024GB = 1TB ...
	// 1byte로 할수 있는 건? 1byte = 8bit
	// 8bit로 표현할 수 있는 가지수는 2**8 = 256가지 인데 
	// 이것으로 표현할 수있는 수의범위(정수만, 양수만이라고 가정 했을때) = 0 ~ 255까지
        // = 도 연산자, == 가 일반적으로 양쪽이 동일하다는 등호 

	// int는 정수형이기 때문에 int i는 정수형이며 4byte
	int i = 0;
	
	// unsigned 양수만 표현한다는 의미
	// 0 ~ 255 -> 256가지
	unsigned char c = 0;
	
	c = 0;
	c = 255;
	
	c = 256;
	// 256은 어떻게 가능? - 256은 이진수로 볼때 나머지가 0이고 1이 아홉번재로 나온 경우이다(100000000). 8개가 전부 1이면 255
	// 8비트니까 9번재 공간이 없다. 256을 넣어도 0이 들어가 있다.
	
	c = -1;
	// 컴퓨터에서 음수는 어떤식으로 표현?

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
	
	// signed가 생략된 상태
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
	

	return 0;
}
