#define NVIC_INT_CTRL 	 	0XE000Ed04 ////�Ĵ�����ַ
#define NVIC_PENDSVSET 		0X10000000
#define NVIC_SYSPRI2  		0XE000Ed22 //�Ĵ�����ַ
#define NVIC_PENDSV_PRI 	0X0000000FF

#define MEM32(addr)			*(volatile unsigned long *)(addr)



typedef struct _BlockType_t
{
	unsigned long * stackPtr;
}BlockType_t;

BlockType_t * blockPtr;//������һ��ָ��ṹ�������ָ��
//����һ����ָ��ṹ�������ָ��һ���ǽṹ���������������������stacknode������������ stacknode node ��*linkstackptr����������linkstackptr *node


void delay (int count)
{
	while (--count>0);
}
int flag;



unsigned long stackBuffer[1024];
BlockType_t block;//������һ���ṹ�����
int main()
{
	block.stackPtr = &stackBuffer[1024];
	blockPtr = &block;
	for(;;)
	{
		flag = 0;
		delay(100);
		flag = 1;
		delay(100);
	
	}
}