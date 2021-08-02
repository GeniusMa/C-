#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	//整型与浮点型存储方式不同
	float a = 5.5;
	//0100 0000 1011 0000 0000 0000 0000 0000
	//40b00000
	//内存中 倒着存
	//00 00 b0 40
 	return 0;
}
/*
任何小数都可以写成（-1）^S * M * 2^E
1=<M<=2
因为M总是1点几 所以在内存中只存储后面的小数位 舍去1； 例如1.001只存储001

真实的E+127=内存中存储的E

-101.0 = (-1)^1 * 1.01 * 2^2
S=1 M=1.01 E=2
对于32位 单精度浮点数 float

S(1bit) + E(8bit) +M(31bit) 

61位     双精度浮点型 double
S(1bit) + E(11bit) +M(52bit)



E为全0 表示+-0 无穷小
E为全1 表示无穷大
其他情况-127 正常计算
*/