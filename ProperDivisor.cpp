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
{   /*첫 줄에 자연수 N이 주어지고 N의 범위는 3 < N <= 100
    자기 자신을 제외한 약수들의 합과 약수들을 더하는 과정을 출력하시오.
    */
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;
    Solution(N);

    return 0;
}
