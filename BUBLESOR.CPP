#include<stdio.h>
#include<graphics.h>
#include<conio.h>
void art(int,int,int);
void ble(int[],int);
void main(){
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  int n;
//  setbkcolor(BLUE);
  printf("enter how many numbers you wanna sort:\n");
  scanf("%d",&n);
  // geting the array of the elements
  printf("just give the elements for sorting\n");
  int a[200],i;
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("\nprintng the element :\n");
for(i=0;i<n;i++){
// printf("%d",a[i]);
//here just use function for printing the values into the shapes
setcolor(RED);
 art(100+i*100,200,a[i]);
 getch();


}

//now logic part for bubble sorting
/*int swap;
printf("sorting process:\n");
for(i=0;i<n-1;i++){
 for(j=0;j<n-i-1;j++){
  if(a[i] >a[i+1]){
   swap=a[j];
   a[j]=a[j+1];
   a[j+1]=swap;

  }
 }
}*/
ble(a,n);
//printf("After swapping:\n");
settextstyle(9,0,3);
setcolor(BLUE);
outtextxy(100,270,"After swapping");
line(50,250,450,250);
for(i=0;i<n;i++){
// printf("%d",a[i]);
//here just use function for printing the values into the shapes
setcolor(GREEN);
 art(100+i*100,400,a[i]);
//printf("%d",a[i]);
 getch();
}
getch();
}
void art(int x,int y,int a){
 char s[20];
 sprintf(s,"%d",a);
 circle(x,y,40);
 settextstyle(8,0,6);
 setcolor(RED);
 outtextxy(x-15,y-40,s);

}
void ble (int b[],int m){
 int swap,i,j;
printf("sorting process:\n");
for(i=0;i<m-1;i++){
 for(j=0;j<m-i-1;j++){
  if(b[j]>b[j+1]){
   swap=b[j];
   b[j]=b[j+1];
   b[j+1]=swap;

  }
 }
}
}