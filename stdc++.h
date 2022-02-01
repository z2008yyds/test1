
过年时间最愉快的时间可能就是在群里抢红包了，一人发，一群人抢，牺牲一个大包，换来一群人的快乐，善哉善哉。请编写一个小程序，用来统计谁是今晚手气最佳、最差的人。




输入





第一行为红包轮数n、参与人数m(1<n<=10,m<=10)，接下去n行为各参与人获得的红包金额，并按照编号(1-m)进行排序。




输出





n轮抢红包结束后，统计谁是今晚手气王和手气最差的人，且分别输出总共抢到的红包金额，中间用空格分开，样例保证不会同时出现并列第一、并列倒数第一的情况。




样例输入

3 4
1 2 3 4
3 2 1 4
2 3 3 2

样例输出

4 10
1 6
代码如下
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a[13],num[13];
	cin>>n>>m;
	double l;
	for(int i=1;i<=12;i++)
	{
		num[i]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int i0=1;i0<=m;i0++)
		{
			cin>>l;
			num[i0]=num[i0]+l;
			a[i0]=num[i0];
		}
	}
	double max=1,min=1;
	for(int i=1;i<=m-1;i++)
	{
		if(a[i+1]>a[i])max=i+1;
		if(a[i+1]<a[i])min=i+1;
	}
	cout<<max<<" ";
	for(int i=1;i<=m;i++)
	{
		if(max==i)cout<<a[i]<<"\n";
	}
	cout<<min<<" ";
	for(int i=1;i<=m;i++)
	{
		if(min==i)cout<<a[i];
	}
	
}

