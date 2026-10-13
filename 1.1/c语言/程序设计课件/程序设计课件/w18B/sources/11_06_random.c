#include<stdio.h>

int main() {
    int a[10]={1,2,3,4,5,6,7,8,9,10};                   
    
    FILE *fp = fopen( "1.dat", "wb" );   
    fwrite(a, sizeof(int), 10, fp); 
	fclose(fp);
	
	fp = fopen( "1.dat", "rb" );
    int b[10] = {0}; 
    for (int i = 0; i < 5; i++) {
        fread(&b[i], sizeof(int), 1, fp);   
        fseek(fp, sizeof(int), SEEK_CUR);   
    }
    //练习，请在这里添加设当读代码，使得
    // b == {1，3，5，7，9，2，4，6，8，10} 
    fclose( fp );                       

    for (int i=0; i < 10; i++) printf( "%d ", b[i] );
    printf("\n");  

    return 0;
} 
