void dfs(int m, int sum, int startx){//����Ҫ�ĵݹ�
//m��������ѡ���˶��ٸ���
//sum��ʾ��ǰ�ĺ�
//startx��ʾ�������У���������
    if(m == k){//���ѡ���˵Ļ�
        if(isprime(sum))//�����������
            ans++;//ans��һ
        return ;
    }
    for(int i = startx; i < n; i++)
        dfs(m + 1, sum + a[i], i + 1);//�ݹ�
        //����Ҫ��һ����ҲҪ��
        //������ʼֵҪ���i+1,��������
    return ;//��һ�������£����еĶ�ö������
    //ֱ�ӷ���ȥ
}