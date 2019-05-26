#ifndef DPP_PYTHON_POWERLIBCPP_LIBRARY_H
#define DPP_PYTHON_POWERLIBCPP_LIBRARY_H

extern "C" {
    __declspec(dllexport) float **calc_power(float **A, float **B, int size);
}

#endif //DPP_PYTHON_POWERLIBCPP_LIBRARY_H