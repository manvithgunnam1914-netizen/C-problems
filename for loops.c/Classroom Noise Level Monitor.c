#include <stdio.h>
int main() {
    int n, noise_levels;
    int max_noise = 0, noisy_periods = 0;

    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        scanf("%d",&noise_levels);

        if (i == 1 || noise_levels > max_noise) {
            max_noise = noise_levels;
        }

        if (noise_levels > 70) {
            noisy_periods++;
        }
    }

    printf("Maximum Noise: %d\n",max_noise);
    printf("Noisy Periods: %d",noisy_periods);

    return 0;
}
