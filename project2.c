int main(){
	
	int line_num=1;
	int c;
	int i=1;

while((c=fgetc(stdin))!=EOF)
{
	
	if(line_num) {

	printf("%d\t",i++);
	}

	if(c=='\n')
	{

	  line_num=1;
	}

	else {

	line_num=0;
	}

	putc(c,stdout);

}

return 0;

}
