#include<stdio.h>
#include<string.h>
int printStairs();
int printTree();
int main(){
	printStairs();
	printTree();
	
	return 0;

}
int printStairs(){
	printf("____stairs____\n");
	int stairs_max =8;
	char tmp[stairs_max];
	for(int i=1;i<stairs_max;i++){
	  
	   for (int j =0;j<stairs_max;j++){
		   if(j<i){

			tmp[j]='*';
		   }else{
			tmp[j]='\0';
		   }
	   }
	  
	   
	  
	   printf(" %s\n",tmp);
	
	}

}
int printTree(){
	int num =0;
	int max =15;
	
	printf("____tree____\n");
	for (int i =0;i<max;i++){
           char tree[15];
	   for (int i =0 ;i<max;i++){
	   	tree[i]=' ';
	   }
	   
	   if (0<=i&&i<3){
	  	num =2* i+1;
	   }else if(3<=i&&i<9){
	   	num = 2*(i-3)+1;
	   }else if(9<=i&&i<15){
	        num = 1;
	   }
	
	 int one_side_num = (num-1)/2;
		
		
          for(int j=(max-1)/2-one_side_num;j<=(max-1)/2+one_side_num;j++){
			tree[j]='*';
	   }
   
	   printf(" %s\n",tree);
	}

}




