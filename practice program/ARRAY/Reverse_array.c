/*wap to reverse the number of an aaray*/

/*#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,arr[10];
    printf("enter an aaray element");
    for(i=0;i<9;i++)
    {
        scanf("%d",&arr[i]);
    }
     printf("reverse of an aaray element is\n");
    for(i=9;i>0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}*/


/*method 2*/


// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i,j,k,temp=0,arr[10];
//      printf("enter the number for array");
//     for(i=0;i<9;i++)
//     {
//         scanf("%d",&arr[i]);
//     }
   
//     for(k=0,j=9;k<j;k++,j--){
//     temp=arr[k];
//     arr[k]=arr[j];
//     arr[j]=temp;}

//     printf("reverse of number is\n");
//     for(k=0;k<10;k++){
//         printf("%d\t",arr[k]);
//     }
//     return 0;
// }

#include <stdio.h>
#include<string.h>


int main(){
	char str1[20];
	int i;
	char str2[20];
	scanf("%s",str1);
	strcpy(str2,str1);
	int l=strlen(str1);
	int length=l;
	for(i=0;i<l/2;i++)
	{ char temp[20];
    temp[i]=str1[i]
		str1[i]=str1[length-1];
        str2[length]=
		length--;
	}
    printf("%s",str1);
	if(strcmp(str1,str2)==0)
	printf("Yes");
	else
	printf("No");

}
