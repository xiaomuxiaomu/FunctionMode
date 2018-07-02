# FunctionMode
    目前版本    ：     1.00
	适配芯片    ：     F407Z
	编写人      :      周炯穆
	最后更新    ：     2018.7.2

# 包含函数两个：
- void initGpioMode(char GPIO,int GPIO_Pin,int GPIO_Speed,char GPIO_Mode[],char GPIO_PuPd[]);
 
 	 此函数执行操作为： 初始化PIN口
 	 初始化PIN口函数需配合字符串匹配函数使用
 	 输入格式
		GPIO  A~I；
		GPIO_Pin 0 ~ 17 注意：17 为全选
		GPIO_Speed 25 50 100;
		GPIO_Mode  "IN" "OUT" "AF" "AN";
		GPIO_PuPd "NO" "UP" "DOWN";
	    后两个输入默认为 :"OUT" "NO"；
	    
- int IsEquals(char str1[],char str2[]);
	
	  此执行操作为： 比较字符串是否一致，若一致返回 1 若不一致返回 0

    


