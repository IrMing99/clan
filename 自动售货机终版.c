#include<stdio.h>
int SelectShop(int balance_data )
{
	    int select_flag = 0;                     //xuanze
	    printf("���ۻ���Ǯ�����Ϊ��%d \n", balance_data);
        printf("��������Ҫ��������ϱ��Ϊ��");	
        scanf("%d",&select_flag);
        if(select_flag==1)
     	{
	
		     balance_data=balance_data - 3;
		     if(balance_data >= 0) 
		     {
		        printf("���ѳɹ������լ����ˮ,�۸�3Ԫ��\n");
		     	printf("����Ǯ��������Ϊ��%dԪ\n",balance_data);
			 }
			 else 
			 {
			 	printf("����Ǯ��������� \n");
			 	balance_data=balance_data + 3;
			 }
			 
		     
	    }
	    else if(select_flag==2)
	    {
		     balance_data=balance_data - 10;
		     if(balance_data >= 0) 
		     {
		     	printf("���ѳɹ������̲裡�۸�10Ԫ��\n");
		     	printf("����Ǯ��������Ϊ��%dԪ\n",balance_data);
			 }
			 else 
			 {
			 	printf("����Ǯ��������� \n");
			 	balance_data=balance_data + 10;
			 }
    	}
	    else if(select_flag==3)
    	{
		     balance_data=balance_data - 5;
		     if(balance_data >= 0) 
		     {
		     	printf("���ѳɹ�����Ԫ��ɭ�֣��۸�5Ԫ��\n");
		     	printf("����Ǯ��������Ϊ��%dԪ\n",balance_data);
			 }
			 else 
			 {
			 	printf("����Ǯ��������� \n");
			 	balance_data=balance_data + 5;
			 }
    	}
        else if(select_flag==4) 
    	{
		     balance_data=balance_data - 7;
		     if(balance_data >= 0) 
		     {
		     	printf("���ѳɹ���������������ϣ��۸�7Ԫ��\n");
		     	printf("����Ǯ��������Ϊ��%dԪ\n",balance_data);
			 }
			 else 
			 {
			 	printf("����Ǯ��������� \n");
			 	balance_data=balance_data + 7 ;
			 }
    	}
    	else
    	{ 
    		printf("������������������ ����\n");
		}
		printf("\n");
        printf("�Ƿ����������������1�����밴���������� ");
        return balance_data ; 
}
void main()
{
	int flag=1;              //��־λ 
	int BalanceData =  0;  //��� 
	int sum_money = 0;        //��ʼ�ܶ� 
	printf("��ӭ���ٽ����Զ��ۻ�����\n");
    printf("��լ����ˮ 3Ԫ/ƿ �밴1����\n");
	printf("�̲�      10Ԫ/ƿ �밴2����\n");
	printf("Ԫ��ɭ��   5Ԫ/ƿ �밴3����\n");
	printf("���������� 7Ԫ/ƿ �밴4����\n");
	printf("���ۻ���Ǯ�����Ϊ��");
	scanf("%d",&sum_money);
	printf("\n");
	BalanceData = sum_money;
	if(sum_money<=1000) 
	{ 
    while(flag == 1)
    { 
        BalanceData = SelectShop(BalanceData) ;  //ѡ����Ʒ    
        scanf("%d",&flag);
        printf("\n");
    }  
    
    printf("��л���Ĺ��򣡻�ӭ�´ι��٣�\n");
    }
    else
    {   printf("������Ϊ1000Ԫ��\n"); 
    	printf("����ϵͳ�涨���ƣ����������󣡣�\n"); 
	}
} 
