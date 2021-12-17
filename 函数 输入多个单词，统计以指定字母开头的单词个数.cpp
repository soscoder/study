int getWordNum(char ar1[], char ch) {
	char* p=ar1;
	int flag=0,count=0;
	while(*p!='\0')
	{
		if(*p!=' '&&flag==0)
		{
			flag=1;
			if(*p==ch)count++;
			if(ch>='a')
			{
				if(*p==ch-32)count++;
			}
			else
			{
				if(*p==ch+32)count++;
			}
		}
		if(*p==' '&&flag==1)flag=0;
        p++;
	}
	return count;
}
//下次用while记得先写p++，这里应先判断单词再判断首字母(╯‵□′)╯︵┻━┻
