//! Dr Mostafa Saad
#include<stdio.h>
int a[200004],bb[200005];
int main()
{
	int n,k,q,i,l,r,aa,b;
	scanf("%d%d%d",&n,&k,&q);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&l,&r);
		a[l]++;
		a[r+1]--;
	}
	for(i=1;i<=200001;i++)
		a[i]=a[i]+a[i-1];
	for(i=1;i<=200001;i++)
	{
		if(a[i]>=k)
			bb[i]=1;
		else
			bb[i]=0;
	}
	for(i=1;i<=200001;i++)
		bb[i]=bb[i]+bb[i-1];	
	while(q--)
	{
		scanf("%d%d",&aa,&b);
		printf("%d\n",bb[b]-bb[aa-1]);
	}
	return 0;
}