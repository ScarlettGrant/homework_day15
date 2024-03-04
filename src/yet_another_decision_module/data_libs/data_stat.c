#include "data_stat.h"

double max(double *data, int n) {
    double res = data[0];
    for (int i = 1; i < n; i++) {
        if (res < data[i])
            res = data[i];
    }
    return res;
}

double min(double *data, int n) {
    double res = data[0];
    for (int i = 1; i < n; i++) {
        if (res > data[i])
            res = data[i];
    }
    return res;
}

double mean(double *data, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    return sum / n;
}

double variance(double *data, int n) {
    double mean_v = mean(data, n);
    double res = 0;

    for (int i = 0; i < n; i++) {
        res += (data[i] - mean_v) * (data[i] - mean_v);
    }

    return res / n;
}