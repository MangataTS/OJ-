/*
    ����:Mangata
    ��ʽɸģ�� 	
*/
//ʱ�临�Ӷ� :O(n*log(log(n))) 
#include<cstdio>
#include<algorithm>
#include<cstring>

const int N = 10000005;
bool vis[N] = {true,true};//��ʼ�� 

int main()
{
	int n,x;//���ߴ��� 
	for(int i = 2; i*i <= N; ++i) {
		if (!vis[i]) {
		for(int j = i*2; j <= N; j += i) //�������ı���ɸ�� 
			vis[j] = true;		
		}
	}
	while(~scanf("%d",&x)) {
	if (vis[x])
		puts("No");
	else
		puts("Yes");
}
	return 0;
} 
