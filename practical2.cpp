#include <iostream>
#include <string>
using namespace std;

int main()
{
    int symCnt, stateCnt, initState, accCnt, flag = 0;

    cout << "Enter number of input symbols: ";
    cin >> symCnt;

    cout << "Enter input symbols: ";
    char symbols[symCnt];
    for (int i = 0; i < symCnt; i++)
    {
        cin >> symbols[i];
    }

    cout << "Enter number of states: ";
    cin >> stateCnt;

    cout << "Enter Initial State: ";
    cin >> initState;

    cout << "Enter number of accepting states: ";
    cin >> accCnt;

    int accStates[accCnt];
    cout << "Enter accepting states: ";
    for (int i = 0; i < accCnt; i++)
    {
        cin >> accStates[i];
    }

    cout << "Enter Transition Table:\n";
    int transTbl[stateCnt + 1][symCnt];

    for (int i = 0; i < symCnt; i++)
    {
        transTbl[0][i] = 0;
    }

    for (int i = 1; i <= stateCnt; i++)
    {
        for (int j = 0; j < symCnt; j++)
        {
            cout << "Enter transition from " << i << " with input symbol " << symbols[j] << ": ";
            cin >> transTbl[i][j];
        }
    }

    string inputStr;
    cout << "Enter Input String: ";
    cin >> inputStr;

    int currState = initState;
    for (int i = 0; i < inputStr.length(); i++)
    {
        int j;
        for (j = 0; j < symCnt; j++)
        {
            if (inputStr[i] == symbols[j])
            {
                break;
            }
        }
        currState = transTbl[currState][j];
    }

    for (int i = 0; i < accCnt; i++)
    {
        if (currState == accStates[0])
        {
            cout << "Valid String!!\n";
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        cout << "Invalid String!\n";
    }

    return 0;
}
