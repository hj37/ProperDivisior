#include <iostream>

using namespace std;

void Solution(int n){
    int sum = 0;
        for(int i = 1; i < n; i++ )
        {
            if(n%i == 0)
            {
                if(i == 1)
                {
                    cout << i;
                    sum += i;
                }
                else{
                    cout << " + " << i;
                    sum += i;
                }
            }
        }

    cout << " = " <<sum;
}


int main()
{   /*ù �ٿ� �ڿ��� N�� �־����� N�� ������ 3 < N <= 100
    �ڱ� �ڽ��� ������ ������� �հ� ������� ���ϴ� ������ ����Ͻÿ�.
    */
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    Solution(N);

    return 0;
}
