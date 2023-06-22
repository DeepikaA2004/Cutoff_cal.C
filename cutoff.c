#include <stdio.h>

int main() {
    int maths, physics, chemistry, bio;
    float engg_total, med_cutoff;

    printf("Enter the physics mark: ");
    scanf("%d", &physics);

    printf("Enter the chemistry mark: ");
    scanf("%d", &chemistry);

    printf("Enter the maths mark: ");
    scanf("%d", &maths);

    printf("Enter Biology Marks: ");
    scanf("%d", &bio);

    engg_total = (maths + chemistry + physics) / 3.0;
    med_cutoff = (bio + chemistry + physics) / 3.0;

    printf("\nYour Engineering cut off: %.2f", engg_total);
    printf("\nYour Medical cut off: %.2f", med_cutoff);

    return 0;
}
