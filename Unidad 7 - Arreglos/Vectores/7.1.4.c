//Construir una función que reciba dos vectores enteros de igual tamaño y retorne un 1 si son guales o un
//0 sino lo son.
#include<stdio.h>
int veccmp(int[],int[]);
main()
{
	int ret,vec1[5]={1,2,3,4,5},vec2[5]={1,2,3,4,5};
	ret=veccmp(vec1,vec2);
	printf("%d",ret);
}
int veccmp(int vec1[],int vec2[])
{
	int i=0,ret=1;
	while(i<5&&ret==1)
	{
		if(vec1[i]!=vec2[i])
		ret=0;
		else
		i++;
	}
	return ret;
}
