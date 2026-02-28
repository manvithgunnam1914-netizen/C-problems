 #include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);

    int noise[n];
    int i = 1;

    while(i <= n) {
        scanf("%d", &noise[i]);
        i++;
    }

    int violations = 0;
    int currentStreak = 0;
    int longestStreak = 0;

    i = 1;

    while(i <= n) {
        if(noise[i] > 70) {
            violations++;
            currentStreak++;

            if(currentStreak > longestStreak) {
                longestStreak = currentStreak;
            }
        } else {
            currentStreak = 0;
        }
        i++;
    }

    printf("%d\n",violations);
    printf("%d\n",longestStreak);

    return 0;
}
