/*
	����:Mangata
	·��ѹ�����鼯
*/
#include<cstdio>
const int N =10005;//�ڵ��� 
int fa[N],n;
void init(int len) {//��ʼ��������ÿ��λ�õĸ��ڵ�������� 
	for(int i=0;i<=n;++i)
		fa[i]=i;
}
int find(int x) {//����x�����Ƚڵ� 
	int t=x;//·��ѹ��
	while(t!=fa[t]) 
		t=fa[t];
	while(x!=fa[x]) {
		int temp=fa[x];
		fa[x]=t;
		x=temp;
	}
	return x;
}
void merge(int a,int b) {//��x��y�ϲ� 
	a=find(a),b=find(b);
	if(a!=b) {
		fa[b]=a;
		n--;
	}
}
int main()
{
	int t,m,a,b;
	scanf("%d",&t);
	while(t--) {
		scanf("%d%d",&n,&m);
		init(n);
		for(int i=1;i<=m;++i) {
			scanf("%d%d",&a,&b);
			merge(a,b);
		}
		printf("%d\n",n);//�����ͬ��������Ŀ
	}
	
	return 0;
}
