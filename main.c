#include <stdio.h>

// Simple lane keeping controller using proportional control on cross-track error
int main() {
    double desiredPosition = 0.0; // center of lane (m)
    double gain = 20.0; // proportional gain converting error to steering command (deg per m)
    double cte[] = {0.5, 0.2, -0.1, -0.3, 0.0}; // cross-track errors (m)
    int n = sizeof(cte) / sizeof(cte[0]);
    for (int i = 0; i < n; i++) {
        double error = cte[i] - desiredPosition;
        double steeringCorrection = -gain * error;
        printf("Cross-track error %.2f m -> steering correction %.2f degrees\n", error, steeringCorrection);
    }
    return 0;
}
