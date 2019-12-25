/*
 * hannWin512.c
 *
 *  Created on: Dec 6, 2019
 *      Author: andersliss
 */

#include "arm_math.h"

const float32_t hannWin_512[512] = {
		0,
		3.7797e-05,
		0.00015118,
		0.00034013,
		0.00060463,
		0.00094463,
		0.0013601,
		0.0018509,
		0.0024171,
		0.0030584,
		0.0037749,
		0.0045665,
		0.0054329,
		0.0063741,
		0.0073899,
		0.0084803,
		0.0096449,
		0.010884,
		0.012196,
		0.013583,
		0.015043,
		0.016576,
		0.018182,
		0.019862,
		0.021614,
		0.023438,
		0.025334,
		0.027302,
		0.029341,
		0.031452,
		0.033633,
		0.035885,
		0.038207,
		0.040599,
		0.043061,
		0.045591,
		0.04819,
		0.050858,
		0.053593,
		0.056396,
		0.059266,
		0.062203,
		0.065205,
		0.068274,
		0.071408,
		0.074606,
		0.077869,
		0.081196,
		0.084586,
		0.088038,
		0.091554,
		0.09513,
		0.098769,
		0.10247,
		0.10623,
		0.11004,
		0.11392,
		0.11786,
		0.12185,
		0.1259,
		0.13001,
		0.13417,
		0.13839,
		0.14266,
		0.14699,
		0.15137,
		0.1558,
		0.16029,
		0.16483,
		0.16941,
		0.17405,
		0.17874,
		0.18347,
		0.18826,
		0.19309,
		0.19796,
		0.20288,
		0.20785,
		0.21286,
		0.21792,
		0.22301,
		0.22815,
		0.23333,
		0.23855,
		0.24381,
		0.24911,
		0.25445,
		0.25982,
		0.26523,
		0.27068,
		0.27616,
		0.28167,
		0.28722,
		0.2928,
		0.29841,
		0.30405,
		0.30972,
		0.31542,
		0.32115,
		0.32691,
		0.33269,
		0.33849,
		0.34432,
		0.35018,
		0.35605,
		0.36195,
		0.36787,
		0.37381,
		0.37977,
		0.38574,
		0.39174,
		0.39775,
		0.40377,
		0.40981,
		0.41587,
		0.42193,
		0.42801,
		0.4341,
		0.4402,
		0.44631,
		0.45243,
		0.45855,
		0.46468,
		0.47081,
		0.47695,
		0.4831,
		0.48924,
		0.49539,
		0.50154,
		0.50768,
		0.51383,
		0.51998,
		0.52612,
		0.53225,
		0.53839,
		0.54451,
		0.55063,
		0.55675,
		0.56285,
		0.56894,
		0.57503,
		0.5811,
		0.58716,
		0.59321,
		0.59924,
		0.60526,
		0.61126,
		0.61725,
		0.62321,
		0.62916,
		0.63509,
		0.641,
		0.64689,
		0.65275,
		0.6586,
		0.66441,
		0.67021,
		0.67598,
		0.68172,
		0.68743,
		0.69312,
		0.69877,
		0.7044,
		0.70999,
		0.71556,
		0.72109,
		0.72658,
		0.73205,
		0.73748,
		0.74287,
		0.74822,
		0.75354,
		0.75882,
		0.76406,
		0.76926,
		0.77442,
		0.77954,
		0.78462,
		0.78965,
		0.79464,
		0.79958,
		0.80448,
		0.80934,
		0.81414,
		0.8189,
		0.82361,
		0.82827,
		0.83289,
		0.83745,
		0.84196,
		0.84642,
		0.85083,
		0.85518,
		0.85948,
		0.86373,
		0.86792,
		0.87205,
		0.87613,
		0.88015,
		0.88412,
		0.88802,
		0.89187,
		0.89566,
		0.89939,
		0.90306,
		0.90667,
		0.91021,
		0.9137,
		0.91712,
		0.92048,
		0.92377,
		0.927,
		0.93017,
		0.93327,
		0.9363,
		0.93927,
		0.94218,
		0.94501,
		0.94778,
		0.95048,
		0.95312,
		0.95568,
		0.95818,
		0.96061,
		0.96296,
		0.96525,
		0.96747,
		0.96961,
		0.97169,
		0.97369,
		0.97562,
		0.97748,
		0.97927,
		0.98099,
		0.98263,
		0.9842,
		0.9857,
		0.98712,
		0.98847,
		0.98975,
		0.99095,
		0.99207,
		0.99313,
		0.99411,
		0.99501,
		0.99584,
		0.99659,
		0.99727,
		0.99788,
		0.9984,
		0.99886,
		0.99923,
		0.99954,
		0.99976,
		0.99991,
		0.99999,
		0.99999,
		0.99991,
		0.99976,
		0.99954,
		0.99923,
		0.99886,
		0.9984,
		0.99788,
		0.99727,
		0.99659,
		0.99584,
		0.99501,
		0.99411,
		0.99313,
		0.99207,
		0.99095,
		0.98975,
		0.98847,
		0.98712,
		0.9857,
		0.9842,
		0.98263,
		0.98099,
		0.97927,
		0.97748,
		0.97562,
		0.97369,
		0.97169,
		0.96961,
		0.96747,
		0.96525,
		0.96296,
		0.96061,
		0.95818,
		0.95568,
		0.95312,
		0.95048,
		0.94778,
		0.94501,
		0.94218,
		0.93927,
		0.9363,
		0.93327,
		0.93017,
		0.927,
		0.92377,
		0.92048,
		0.91712,
		0.9137,
		0.91021,
		0.90667,
		0.90306,
		0.89939,
		0.89566,
		0.89187,
		0.88802,
		0.88412,
		0.88015,
		0.87613,
		0.87205,
		0.86792,
		0.86373,
		0.85948,
		0.85518,
		0.85083,
		0.84642,
		0.84196,
		0.83745,
		0.83289,
		0.82827,
		0.82361,
		0.8189,
		0.81414,
		0.80934,
		0.80448,
		0.79958,
		0.79464,
		0.78965,
		0.78462,
		0.77954,
		0.77442,
		0.76926,
		0.76406,
		0.75882,
		0.75354,
		0.74822,
		0.74287,
		0.73748,
		0.73205,
		0.72658,
		0.72109,
		0.71556,
		0.70999,
		0.7044,
		0.69877,
		0.69312,
		0.68743,
		0.68172,
		0.67598,
		0.67021,
		0.66441,
		0.6586,
		0.65275,
		0.64689,
		0.641,
		0.63509,
		0.62916,
		0.62321,
		0.61725,
		0.61126,
		0.60526,
		0.59924,
		0.59321,
		0.58716,
		0.5811,
		0.57503,
		0.56894,
		0.56285,
		0.55675,
		0.55063,
		0.54451,
		0.53839,
		0.53225,
		0.52612,
		0.51998,
		0.51383,
		0.50768,
		0.50154,
		0.49539,
		0.48924,
		0.4831,
		0.47695,
		0.47081,
		0.46468,
		0.45855,
		0.45243,
		0.44631,
		0.4402,
		0.4341,
		0.42801,
		0.42193,
		0.41587,
		0.40981,
		0.40377,
		0.39775,
		0.39174,
		0.38574,
		0.37977,
		0.37381,
		0.36787,
		0.36195,
		0.35605,
		0.35018,
		0.34432,
		0.33849,
		0.33269,
		0.32691,
		0.32115,
		0.31542,
		0.30972,
		0.30405,
		0.29841,
		0.2928,
		0.28722,
		0.28167,
		0.27616,
		0.27068,
		0.26523,
		0.25982,
		0.25445,
		0.24911,
		0.24381,
		0.23855,
		0.23333,
		0.22815,
		0.22301,
		0.21792,
		0.21286,
		0.20785,
		0.20288,
		0.19796,
		0.19309,
		0.18826,
		0.18347,
		0.17874,
		0.17405,
		0.16941,
		0.16483,
		0.16029,
		0.1558,
		0.15137,
		0.14699,
		0.14266,
		0.13839,
		0.13417,
		0.13001,
		0.1259,
		0.12185,
		0.11786,
		0.11392,
		0.11004,
		0.10623,
		0.10247,
		0.098769,
		0.09513,
		0.091554,
		0.088038,
		0.084586,
		0.081196,
		0.077869,
		0.074606,
		0.071408,
		0.068274,
		0.065205,
		0.062203,
		0.059266,
		0.056396,
		0.053593,
		0.050858,
		0.04819,
		0.045591,
		0.043061,
		0.040599,
		0.038207,
		0.035885,
		0.033633,
		0.031452,
		0.029341,
		0.027302,
		0.025334,
		0.023438,
		0.021614,
		0.019862,
		0.018182,
		0.016576,
		0.015043,
		0.013583,
		0.012196,
		0.010884,
		0.0096449,
		0.0084803,
		0.0073899,
		0.0063741,
		0.0054329,
		0.0045665,
		0.0037749,
		0.0030584,
		0.0024171,
		0.0018509,
		0.0013601,
		0.00094463,
		0.00060463,
		0.00034013,
		0.00015118,
		3.7797e-05,
		0};