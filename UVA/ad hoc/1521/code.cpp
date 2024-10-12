#include <iostream>
#include <vector>

using namespace std;

bool isPrime[10001] = {0};
int partialPrimeCount[10001] = {0};
vector<int> primes;

void sieve() {

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i < 10001; i++) {
        isPrime[i] = true;
    }

    int product = 1;
    for (int i = 2; i < 10001; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            partialPrimeCount[i] =  partialPrimeCount[i-1] + 1;
            for (int j = i + i; j < 10001; j += i) {
                isPrime[j] = false;
            }
        } else {
            partialPrimeCount[i] = partialPrimeCount[i-1];
        }
    }
}


/**
 * @brief This method is counting the number of prime numbers less than or equal to n using sieve of eratosthenes
 * 
 * For this problem guessing all the primes from 2 to n is sufficient
 * 
 * It is sufficient because after only guessing all the primes less than or equal to n, we can guess the original number
 * 
 * However, it is not necessary. For example 6 can check for both 2 and 3.
 * 
 */

int getGuessCount(int n) {
    int count = 0;
    int left = 0;
    int right = primes.size() - 1;
    while(primes[right] > n) {
        right--;
    }

    // cout << "left " << left << "prime[left]" << primes[left] << endl;
    // cout <<"right " << right << "prime[right]" << primes[right] << endl;
    while(left <= right) {
        int prod = primes[right];

        while(prod * primes[left] <= n) {
            prod *= primes[left];
            left++;
        }
        count++;
        right--;
    }

    return count;
}


int main() {

    sieve();

    int n;
    while (cin >> n) {
        cout << getGuessCount(n) << endl;
    }

    return 0;
}