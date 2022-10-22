#include <stdio.h>
int main (void) {
int num = 50;
int i;
int x;
for (i=0;i<5;i++)
{
printf ("この数字はなんでしょう...?");
scanf ("%d", &x);
if (x==num)
{
printf ("正解！答えは'50'です！\n");
break;
}
else if (x>num)
{
printf ("残念...!大きすぎます...\n");
}
else if (x<num)
{
printf ("残念...!小さすぎます。\n");
}
else
{
printf ("残念...違います！\n");
}
}
return 0;
}
