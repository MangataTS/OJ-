/*
	����:Mangata
	����ģ�巵�ش���x�ĵ�һ��λ�� 
*/
#include<cstdio>
#include<algorithm>
#include<cstring>
#define N 1005
using namespace std;
int a[N],n,q;
int find(int l,int r,int key)//lΪ-1,rΪ����ĳ��� 
{
	while(l+1<r)
	{
		int mid=l+r>>1;
		if(a[mid]<=key)
		l=mid;
		else
		r=mid;
	}
	return r;//���ش���key�ĵ�һ��"λ��" 
}
int main()
{
	int k;
	scanf("%d%d",&n,&q);
	for(int i=0;i<n;++i)
	scanf("%d",&a[i]);
	for(int i=0;i<q;++i)
	{
		scanf("%d",&k);
		printf("%d\n",find(-1,n,k));
	}
} 
