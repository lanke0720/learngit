

//1.��ϤԤ�����ʶ����
//__LINE__
//__FILE__
//__DATE__
//__TIME__
//#
//##


#include <stdio.h>
#define DEBUG_PRINT printf("file:%s line:%d date:%s time:%s ",\
	__FILE__,__LINE__,\
	__DATE__,__TIME__)
#define PRINT(FORMAT,VALUE)printf("the value of "#VALUE" is "FORMAT"\n",VALUE)
#define ADD_TO_SUM( sum_number,value )sum##sum_number += value

int main()
{
	int a=1,b=2;
	int c=a+b;
	int sum5=0;
	DEBUG_PRINT;
	PRINT("%d",c);
	printf("%d",ADD_TO_SUM(5,25));
    return 0;
}

/*
//2,��ת������λ
#include<stdio.h>
#define SWAP(X) ( ( (X)&(0xaaaaaaaa) )>>1 )+( ( (X)&(0x55555555) )<<1 )
	////10 1010  00000000 00000000 00000000 00001010 
 //              
	//		   10101010 10101010 10101010 10101010
	//	    &= 00000000 00000000 00000000 00001010  
	//		   00000000 00000000 00000000 00000101  >>1   (X&0xaaaaaaaa)>>1  ż��λ���Ƶ�����λ��

	//		   01010101 01010101 01010101 01010101     
	//		&= 00000000 00000000 00000000 00000000  <<1   (X&0x55555555)<<1  ����λ�����Ƶ�ż��λ��
      
int main ()
{
 int X=10;
 printf("%d",SWAP(X));
return 0;
}
*/