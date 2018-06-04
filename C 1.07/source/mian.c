#define NVIC_INT_CTRL 	 	0XE000Ed04 ////寄存器地址
#define NVIC_PENDSVSET 		0X10000000
#define NVIC_SYSPRI2  		0XE000Ed22 //寄存器地址
#define NVIC_PENDSV_PRI 	0X0000000FF

#define MEM32(addr)			*(volatile unsigned long *)(addr)



typedef struct _BlockType_t
{
	unsigned long * stackPtr;
}BlockType_t;

BlockType_t * blockPtr;//定义了一个指向结构体变量的指针
//区别：一个是指向结构体变量的指针一个是结构体变量，还有声明的区别stacknode必须这样声明 stacknode node 而*linkstackptr须这样声明linkstackptr *node


void delay (int count)
{
	while (--count>0);
}
int flag;



unsigned long stackBuffer[1024];
BlockType_t block;//定义了一个结构体变量
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