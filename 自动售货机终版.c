#include<stdio.h>
int SelectShop(int balance_data )
{
	    int select_flag = 0;                     //xuanze
	    printf("您售货机钱包余额为：%d \n", balance_data);
        printf("请问您需要购买的饮料编号为：");	
        scanf("%d",&select_flag);
        if(select_flag==1)
     	{
	
		     balance_data=balance_data - 3;
		     if(balance_data >= 0) 
		     {
		        printf("您已成功购买肥宅快乐水,价格3元！\n");
		     	printf("您的钱包余额更新为：%d元\n",balance_data);
			 }
			 else 
			 {
			 	printf("您的钱包余额余额不足 \n");
			 	balance_data=balance_data + 3;
			 }
			 
		     
	    }
	    else if(select_flag==2)
	    {
		     balance_data=balance_data - 10;
		     if(balance_data >= 0) 
		     {
		     	printf("您已成功购买奶茶！价格10元！\n");
		     	printf("您的钱包余额更新为：%d元\n",balance_data);
			 }
			 else 
			 {
			 	printf("您的钱包余额余额不足 \n");
			 	balance_data=balance_data + 10;
			 }
    	}
	    else if(select_flag==3)
    	{
		     balance_data=balance_data - 5;
		     if(balance_data >= 0) 
		     {
		     	printf("您已成功购买元气森林！价格5元！\n");
		     	printf("您的钱包余额更新为：%d元\n",balance_data);
			 }
			 else 
			 {
			 	printf("您的钱包余额余额不足 \n");
			 	balance_data=balance_data + 5;
			 }
    	}
        else if(select_flag==4) 
    	{
		     balance_data=balance_data - 7;
		     if(balance_data >= 0) 
		     {
		     	printf("您已成功购买独家秘制饮料！价格7元！\n");
		     	printf("您的钱包余额更新为：%d元\n",balance_data);
			 }
			 else 
			 {
			 	printf("您的钱包余额余额不足 \n");
			 	balance_data=balance_data + 7 ;
			 }
    	}
    	else
    	{ 
    		printf("输入有误，请重新输入 ！！\n");
		}
		printf("\n");
        printf("是否继续购买？是请输入1；否请按其他按键： ");
        return balance_data ; 
}
void main()
{
	int flag=1;              //标志位 
	int BalanceData =  0;  //余额 
	int sum_money = 0;        //初始总额 
	printf("欢迎光临江软自动售货机！\n");
    printf("肥宅快乐水 3元/瓶 请按1购买\n");
	printf("奶茶      10元/瓶 请按2购买\n");
	printf("元气森林   5元/瓶 请按3购买\n");
	printf("独家秘制饮 7元/瓶 请按4购买\n");
	printf("您售货机钱包余额为：");
	scanf("%d",&sum_money);
	printf("\n");
	BalanceData = sum_money;
	if(sum_money<=1000) 
	{ 
    while(flag == 1)
    { 
        BalanceData = SelectShop(BalanceData) ;  //选择商品    
        scanf("%d",&flag);
        printf("\n");
    }  
    
    printf("感谢您的购买！欢迎下次光临！\n");
    }
    else
    {   printf("最大余额为1000元！\n"); 
    	printf("余额超过系统规定限制！！输入有误！！\n"); 
	}
} 
