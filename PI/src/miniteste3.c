#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int sequencia1[1081] = {263, 736, 577, 251, 116, 103, 114, 553, 597, 475, 521, 769, 409, 861, 522, 984, 360, 695, 882, 540, 218, 406, 876, 258, 800, 283, 456,
866, 355, 297, 204, 972, 865, 201, 177, 528, 587, 900, 828, 213, 603, 965, 727, 452, 560, 962, 105, 986, 513, 348, 620, 582, 308, 252, 619, 153, 192, 727, 851,
651, 417, 348, 176, 780, 500, 979, 883, 769, 251, 213, 528, 722, 996, 346, 338, 992, 870, 276, 597, 868, 317, 939, 403, 165, 423, 496, 107, 853, 187, 378, 497,
836, 576, 257, 952, 448, 649, 543, 414, 389, 927, 856, 846, 893, 574, 854, 814, 156, 310, 510, 574, 329, 580, 610, 546, 960, 381, 648, 633, 218, 648, 876, 512,
595, 490, 554, 680, 978, 621, 983, 715, 348, 777, 314, 482, 924, 859, 714, 853, 941, 337, 774, 239, 750, 826, 942, 972, 305, 414, 708, 153, 653, 432, 488, 913,
118, 181, 670, 419, 251, 727, 284, 349, 181, 847, 859, 947, 755, 833, 181, 462, 893, 173, 970, 797, 105, 753, 967, 639, 875, 870, 359, 111, 730, 501, 455, 420,
277, 511, 114, 459, 773, 422, 910, 733, 818, 712, 749, 538, 381, 374, 160, 447, 219, 525, 432, 261, 953, 434, 391, 354, 299, 946, 496, 509, 525, 123, 929, 343,
314, 212, 667, 966, 994, 354, 525, 930, 615, 599, 799, 307, 883, 988, 262, 938, 791, 781, 230, 666, 422, 529, 384, 172, 921, 747, 304, 172, 868, 698, 158, 961,
935, 635, 846, 664, 136, 386, 168, 674, 415, 816, 480, 956, 984, 841, 117, 346, 738, 453, 518, 272, 154, 306, 195, 482, 598, 594, 747, 936, 702, 300, 512, 639,
372, 831, 296, 441, 126, 717, 761, 630, 329, 924, 673, 689, 907, 269, 826, 218, 636, 760, 878, 182, 797, 350, 847, 979, 688, 912, 133, 502, 148, 881, 554, 416,
844, 424, 652, 186, 915, 404, 665, 327, 568, 376, 781, 166, 789, 109, 462, 923, 132, 643, 719, 979, 183, 273, 130, 387, 519, 957, 142, 947, 365, 414, 996, 480,
309, 698, 914, 295, 706, 561, 737, 958, 551, 446, 691, 213, 232, 484, 802, 973, 729, 874, 709, 540, 132, 481, 781, 849, 532, 219, 844, 866, 392, 242, 464, 947,
130, 192, 787, 330, 733, 822, 945, 745, 200, 868, 873, 972, 688, 404, 830, 666, 488, 970, 152, 420, 161, 690, 788, 507, 393, 411, 461, 491, 380, 753, 366, 395,
724, 179, 697, 952, 578, 451, 244, 415, 884, 513, 762, 534, 597, 121, 410, 173, 565, 427, 875, 343, 975, 863, 165, 354, 235, 431, 670, 341, 943, 427, 485, 539,
535, 104, 158, 684, 510, 286, 450, 226, 692, 649, 610, 196, 232, 529, 760, 169, 223, 537, 180, 201, 595, 490, 354, 946, 582, 382, 179, 952, 477, 624, 397, 232,
773, 886, 667, 322, 514, 507, 960, 187, 373, 638, 904, 410, 489, 804, 696, 905,
917, 545, 234, 923, 389, 685, 827, 324, 323, 523, 732, 569, 243, 683, 724, 440,
828, 387, 549, 207, 552, 180, 659, 868, 244, 700, 474, 427, 625, 665, 685, 837,
288, 805, 748, 745, 690, 730, 108, 896, 573, 202, 120, 377, 791, 256, 387, 153,
987, 151, 192, 622, 690, 138, 781, 499, 313, 249, 577, 297, 166, 858, 708, 659,
128, 872, 419, 989, 568, 564, 326, 331, 355, 185, 509, 650, 221, 798, 743, 987,
376, 604, 370, 536, 926, 133, 739, 145, 241, 621, 628, 772, 754, 874, 380, 828,
841, 396, 237, 724, 981, 993, 337, 783, 249, 958, 289, 307, 675, 864, 680, 585,
134, 412, 532, 415, 360, 659, 466, 754, 675, 227, 409, 844, 555, 814, 852, 813,
829, 328, 851, 228, 682, 747, 219, 171, 646, 221, 965, 492, 788, 594, 392, 874,
531, 706, 549, 289, 845, 522, 814, 582, 741, 936, 397, 162, 800, 488, 867, 576,
998, 260, 322, 729, 181, 627, 167, 889, 438, 700, 548, 115, 360, 683, 435, 166,
339, 985, 496, 487, 366, 964, 941, 603, 998, 291, 231, 185, 741, 502, 560, 436,
585, 205, 885, 838, 927, 874, 290, 490, 854, 330, 787, 894, 678, 393, 223, 158,
536, 567, 655, 190, 732, 510, 763, 728, 300, 201, 396, 987, 509, 579, 116, 556,
922, 406, 303, 713, 336, 346, 940, 832, 477, 473, 965, 647, 649, 379, 462, 501,
881, 816, 475, 258, 640, 166, 475, 746, 768, 301, 105, 806, 698, 451, 713, 390,
710, 792, 383, 643, 905, 556, 860, 724, 570, 903, 890, 499, 675, 850, 757, 399,
825, 181, 933, 527, 188, 529, 165, 318, 162, 246, 448, 524, 113, 818, 986, 807,
345, 273, 888, 311, 107, 147, 549, 891, 237, 427, 233, 763, 515, 432, 717, 446,
217, 210, 233, 663, 923, 816, 986, 145, 435, 937, 729, 252, 791, 989, 471, 273,
589, 999, 505, 115, 885, 843, 968, 312, 328, 393, 979, 810, 508, 249, 939, 925,
437, 944, 818, 566, 383, 454, 423, 710, 465, 825, 969, 508, 493, 992, 898, 761,
147, 888, 349, 978, 464, 885, 416, 139, 187, 780, 566, 179, 310, 733, 238, 862,
239, 368, 570, 698, 476, 920, 201, 664, 124, 596, 894, 732, 545, 276, 368, 199,
453, 804, 160, 776, 661, 150, 210, 667, 445, 483, 595, 814, 908, 430, 610, 524,
618, 992, 537, 370, 440, 915, 938, 841, 444, 107, 720, 432, 575, 273, 377, 653,
402, 568, 449, 409, 959, 163, 958, 529, 341, 105, 705, 169, 530, 116, 958, 710,
244, 492, 506, 517, 224, 367, 866, 449, 291, 841, 499, 974, 134, 604, 579, 262,
811, 752, 840, 231, 216, 434, 501, 400, 502, 409, 138, 576, 266, 277, 867, 353,
974, 435, 105, 985, 170, 964, 141, 647, 208, 873, 740, 614, 392, 348, 382, 320,
924, 699, 636, 166, 453, 197, 304, 147, 466, 400, 733, 395, 406, 791, 649, 682,
481, 899, 356, 459, 562, 669, 180, 151, 315, 860, 913, 357, 387, 759, 563, 486,
799, 744, 833, 808, 311, 932, 935, 138, 501, 706, 597, 172, 947, 838, 825, 527,
479, 648, 815, 272, 149, 621, 733, 642, 991, 902, 268, 464, 356, 297, 147, 424,
115, 410, 351, 244, 179, 477, 385, 584, 875, 609, 395, 579, 168, 651, 748, 395,
572, 651, 132, 445, 167, 293, 576, 520, 659, 237, 264, 445, 343, 423, 189, 629,
550, 376, 986, 871, 963, 277, 848, 997, 287, 547, 135, 978, 769, 909};

<<<<<<< HEAD
=======
int sequence[1864] = {454, 114, 167, 632, 955, 922, 621, 744, 744, 190, 540, 563, 914, 263, 766, 279, 613, 513, 600, 481, 733, 841, 348, 571, 392, 442, 982, 475, 465, 119, 958, 724, 845, 947, 340, 652, 995, 931, 587, 657, 166, 855, 814, 474, 749, 218, 602, 688, 582, 824, 163, 139, 942, 543, 276, 326, 919, 967, 684, 207, 852, 302, 795, 865, 238, 306, 537, 736, 562, 759, 950, 149, 453, 178, 875, 239, 899, 438, 666, 850, 693, 170, 941, 848, 880, 934, 466, 675, 364, 502, 525, 506, 616, 972, 412, 486, 165, 821, 975, 514, 165, 810, 425, 819, 426, 963, 961, 634, 223, 371, 929, 355, 684, 155, 240, 969, 115, 227, 695, 127, 123, 864, 859, 588, 419, 228, 363, 754, 897, 981, 982, 120, 302, 454, 591, 952, 426, 974, 688, 504, 979, 455, 759, 383, 199, 426, 256, 337, 586, 214, 622, 667, 684, 265, 926, 860, 446, 670, 734, 635, 731, 240, 889, 200, 942, 353, 340, 959, 578, 512, 654, 462, 941, 703, 765, 900, 599, 618, 683, 630, 465, 787, 817, 707, 373, 598, 692, 368, 150, 652, 247, 447, 626, 163, 284, 569, 405, 413, 901, 496, 193, 486, 160, 954, 634, 658, 609, 261, 452, 704, 511, 288, 542, 904, 196, 834, 577, 511, 944, 368, 386, 757, 524, 463, 675, 533, 421, 445, 746, 621, 238, 176, 526, 266, 793, 619, 291, 311, 120, 492, 804, 386, 541, 424, 274, 584, 394, 795, 978, 659, 633, 639, 420, 635, 248, 489, 759, 466, 130, 425, 202, 330, 143, 266, 976, 731, 932, 917, 996, 883, 777, 387, 617, 332, 659, 808, 774, 505, 972, 681, 123, 462, 120, 196, 838, 223, 507, 946, 837, 236, 322, 199, 398, 239, 439, 968, 756, 260, 390, 436, 313, 909, 609, 390, 495, 236, 395, 200, 174, 958, 948, 395, 799, 876, 101, 565, 455, 581, 482, 426, 293, 366, 386, 621, 757, 446, 187, 949, 397, 491, 385, 830, 112, 868, 134, 344, 847, 289, 722, 595, 957, 178, 402, 779, 883, 149, 767, 961, 606, 461, 920, 439, 590, 440, 348, 821, 748, 400, 499, 610, 875, 799, 925, 382, 233, 288, 879, 315, 425, 325, 178, 489, 920, 728, 855, 955, 721, 429, 173, 485, 781, 819, 865, 531, 920, 891, 197, 927, 972, 662, 177, 445, 982, 989, 993, 119, 469, 279, 502, 276, 603, 226, 282, 339, 393, 337, 402, 966, 310, 800, 774, 853, 896, 991, 693, 709, 196, 730, 482, 591, 635, 534, 359, 729, 437, 133, 739, 594, 394, 391, 401, 403, 851, 944, 842, 777, 943, 825, 378, 723, 620, 647, 441, 435, 312, 753, 707, 667, 756, 484, 280, 854, 491, 152, 995, 126, 674, 240, 684, 382, 262, 466, 594, 213, 894, 445, 708, 308, 966, 541, 977, 260, 923, 543, 576, 487, 325, 243, 500, 491, 990, 274, 788, 370, 801, 784, 522, 255, 381, 610, 683, 123, 365, 495, 400, 135, 184, 265, 135, 515, 446, 973, 331, 390, 615, 363, 683, 993, 750, 858, 998, 472, 929, 545, 597, 534, 505, 685, 487, 383, 377, 165, 857, 612, 976, 660, 907, 198, 590, 654, 503, 794, 502, 263, 904, 104, 193, 623, 132, 405, 180, 764, 131, 587, 914, 534, 140, 904, 826, 501, 955, 235, 931, 779, 906, 979, 296, 272, 367, 535, 335, 451, 589, 174, 914, 369, 189, 139, 218, 498, 108, 617, 795, 489, 636, 862, 221, 120, 861, 974, 654, 747, 354, 401, 940, 688, 297, 347, 578, 874, 799, 140, 435, 791, 325, 168, 162, 677, 664, 328, 862, 415, 516, 946, 935, 921, 802, 424, 628, 141, 236, 270, 662, 399, 961, 414, 401, 598, 544, 560, 504, 970, 960, 715, 129, 459, 442, 821, 435, 818, 889, 419, 875, 367, 111, 352, 347, 529, 223, 173, 641, 990, 219, 546, 929, 809, 388, 542, 167, 842, 671, 348, 102, 772, 277, 420, 212, 712, 792, 392, 309, 938, 487, 912, 668, 968, 563, 273, 632, 421, 381, 817, 888, 641, 529, 491, 438, 223, 933, 706, 848, 758, 760, 172, 316, 408, 432, 274, 914, 935, 942, 861, 336, 439, 104, 215, 482, 778, 293, 945, 751, 370, 974, 851, 162, 523, 180, 512, 597, 875, 301, 418, 861, 378, 998, 938, 193, 214, 917, 963, 137, 885, 487, 403, 359, 133, 818, 636, 461, 885, 166, 267, 180, 454, 182, 612, 737, 195, 731, 249, 353, 810, 829, 939, 510, 332, 345, 320, 112, 137, 417, 490, 926, 474, 670, 162, 663, 942, 323, 325, 950, 201, 864, 833, 484, 680, 385, 957, 390, 679, 722, 459, 802, 312, 424, 198, 616, 120, 505, 161, 516, 468, 571, 239, 897, 554, 103, 773, 983, 335, 460, 157, 977, 846, 535, 722, 761, 955, 282, 270, 496, 345, 188, 430, 915, 523, 569, 689, 308, 834, 927, 652, 819, 248, 813, 493, 684, 815, 257, 871, 871, 576, 261, 286, 780, 710, 911, 304, 866, 688, 199, 798, 297, 779, 690, 822, 901, 253, 720, 531, 673, 133, 947, 499, 900, 735, 202, 660, 715, 854, 961, 168, 929, 387, 305, 173, 685, 934, 444, 677, 881, 166, 140, 514, 441, 226, 917, 536, 441, 400, 423, 467, 647, 963, 240, 745, 654, 651, 505, 366, 574, 709, 533, 975, 797, 624, 224, 120, 248, 556, 975, 162, 440, 896, 207, 505, 676, 761, 220, 389, 144, 328, 157, 838, 975, 530, 571, 113, 450, 279, 916, 477, 164, 160, 711, 312, 188, 154, 724, 719, 808, 642, 855, 879, 152, 638, 535, 784, 809, 219, 870, 579, 986, 819, 622, 796, 670, 283, 899, 228, 475, 877, 993, 445, 950, 254, 662, 418, 440, 474, 992, 558, 970, 443, 734, 679, 447, 448, 539, 578, 626, 732, 556, 722, 289, 115, 162, 947, 809, 956, 385, 781, 980, 850, 225, 490, 306, 762, 665, 498, 299, 656, 561, 566, 716, 385, 178, 579, 658, 282, 446, 792, 533, 975, 718, 635, 769, 714, 613, 763, 526, 985, 618, 354, 969, 336, 279, 809, 484, 524, 303, 547, 479, 149, 246, 325, 217, 148, 203, 695, 765, 803, 358, 671, 975, 646, 308, 649, 542, 476, 431, 536, 967, 427, 212, 501, 562, 711, 877, 241, 384, 104, 616, 805, 532, 695, 399, 146, 335, 585, 289, 741, 736, 250, 233, 225, 631, 201, 299, 477, 800, 854, 527, 128, 814, 782, 192, 729, 539, 985, 795, 970, 862, 316, 941, 652, 288, 110, 907, 345, 219, 439, 660, 515, 937, 781, 538, 907, 359, 494, 998, 419, 535, 958, 102, 462, 375, 850, 633, 592, 840, 838, 788, 391, 393, 117, 972, 429, 670, 337, 126, 703, 271, 139, 959, 496, 351, 946, 691, 514, 476, 227, 375, 213, 290, 922, 614, 494, 798, 347, 922, 817, 875, 910, 536, 208, 680, 580, 380, 963, 615, 756, 833, 605, 346, 629, 317, 586, 595, 932, 183, 365, 218, 566, 399, 492, 137, 204, 619, 772, 459, 311, 623, 995, 620, 910, 608, 804, 431, 840, 612, 243, 308, 446, 965, 410, 195, 299, 523, 753, 464, 996, 935, 117, 761, 569, 607, 325, 361, 713, 504, 675, 469, 616, 876, 108, 965, 975, 455, 458, 715, 995, 960, 773, 157, 947, 899, 166, 858, 372, 588, 784, 284, 734, 977, 933, 663, 568, 384, 185, 693, 520, 788, 254, 687, 160, 766, 264, 952, 299, 209, 808, 947, 985, 196, 652, 577, 276, 102, 638, 816, 107, 921, 931, 459, 194, 983, 338, 577, 535, 916, 601, 926, 433, 710, 943, 458, 853, 801, 714, 409, 950, 713, 435, 855, 106, 639, 334, 654, 539, 626, 253, 394, 404, 723, 309, 897, 883, 608, 267, 464, 930, 109, 923, 376, 745, 875, 861, 903, 258, 860, 300, 699, 226, 736, 740, 235, 928, 215, 423, 377, 894, 144, 489, 699, 369, 817, 196, 755, 736, 318, 958, 532, 353, 487, 464, 209, 841, 276, 659, 233, 326, 151, 908, 995, 285, 163, 734, 342, 845, 648, 196, 265, 305, 872, 342, 759, 520, 146, 372, 139, 142, 335, 782, 578, 875, 134, 475, 881, 301, 332, 847, 930, 554, 751, 186, 334, 297, 403, 694, 832, 870, 228, 110, 107, 443, 432, 142, 385, 517, 825, 482, 881, 972, 360, 402, 516, 570, 380, 508, 407, 551, 914, 861, 790, 573, 992, 294, 903, 405, 430, 544, 769, 342, 450, 548, 519, 711, 768, 997, 858, 398, 601, 513, 600, 331, 267, 179, 600, 908, 655, 287, 158, 901, 602, 507, 880, 949, 497, 347, 548, 699, 987, 749, 371, 850, 642, 951, 492, 718, 920, 521, 860, 682, 989, 794, 345, 957, 197, 835, 744, 650, 104, 748, 771, 695, 113, 817, 341, 163, 533, 213, 180, 505, 372, 816, 561, 622, 979, 683, 193, 413, 257, 471, 283, 421, 880, 807, 540, 176, 628, 656, 162, 477, 606, 361, 796, 575, 236, 895, 426, 209, 521, 253, 328, 636, 111, 797, 321, 290, 662, 460, 666, 609, 505, 357, 936, 652, 631, 740, 620, 862, 509, 154, 635, 153, 288, 998, 900, 435, 131, 220, 822, 105, 436, 849, 679, 510, 114, 690, 152, 165, 328, 767, 123, 706, 959, 969, 252, 823, 107, 686, 841, 703, 580, 743, 102, 784, 955, 602, 175, 991, 528, 604, 650, 865, 414, 627, 534, 701, 766, 958, 536, 778, 432, 719, 655, 664, 846, 392, 221, 525, 577, 708, 411, 213, 362, 556, 329, 660, 944, 882, 499, 221, 261, 803, 825, 988, 216, 967, 762, 485, 343, 300, 122, 993, 632, 251, 232, 905, 499, 462, 287, 369, 396, 196, 735, 174, 800, 662, 394, 786, 349, 596, 888, 853, 963, 943, 509, 733, 700, 656, 150, 655, 287, 646, 705, 179, 352, 990, 217, 282, 717, 895, 644, 257, 105, 865, 844, 868, 647, 915, 168, 670, 532, 310, 645, 106, 526, 852, 853, 863, 980, 235, 841, 705, 182, 988, 254, 419, 141, 398, 161, 376, 412, 219, 318, 195, 499, 663, 637, 455, 690, 854, 152, 427, 993, 334, 640, 852, 962, 298, 418, 573, 850, 740, 404, 956, 677, 627, 434, 708, 587, 197, 290, 859, 815, 487, 719, 220, 730, 183, 155, 977, 525, 608, 623, 775, 474, 371, 191, 807, 199, 493, 124, 714, 798, 904, 336, 562, 248, 136, 169, 895, 706, 301, 250, 374, 472, 243, 656, 199, 536, 469, 394, 832, 710, 284, 539, 330, 889, 756, 221, 368, 946, 156, 574, 278, 299, 549, 388, 843, 712, 979, 421, 904, 192, 130, 588, 412, 548, 527, 971, 143, 186, 736, 693, 230, 794, 322, 850, 430, 189, 820, 305, 426, 110, 878, 931, 573, 806, 976, 947, 954, 242, 626, 299, 816, 737, 886, 797, 458, 614, 498, 552, 215, 436, 141, 291, 891, 813, 408, 283, 109, 706, 421, 930, 977, 893, 307, 830, 701, 905, 285, 585, 928, 152, 150, 465, 473, 917, 400, 280, 111, 497, 610, 940, 294, 752, 447, 723, 977, 160, 558, 827, 111, 566, 596, 972, 703, 281, 313, 452, 285, 421, 399, 222, 412, 644, 588, 105, 929, 399, 403, 829, 242, 482, 712, 636, 863, 566, 913, 767, 859, 488, 857, 215, 817, 310, 923, 792, 604, 230, 390};
>>>>>>> b439f69 (.)

int sequencia2[1864] = {454, 114, 167, 632, 955, 922, 621, 744, 744, 190, 540, 563, 914, 263, 766, 279, 613, 513, 600, 481, 733, 841, 348, 571, 392, 442, 982, 475, 465, 119, 958, 724, 845, 947, 340, 652, 995, 931, 587, 657, 166, 855, 814, 474, 749, 218, 602, 688, 582, 824, 163, 139, 942, 543, 276, 326, 919, 967, 684, 207, 852, 302, 795, 865, 238, 306, 537, 736, 562, 759, 950, 149, 453, 178, 875, 239, 899, 438, 666, 850, 693, 170, 941, 848, 880, 934, 466, 675, 364, 502, 525, 506, 616, 972, 412, 486, 165, 821, 975, 514, 165, 810, 425, 819, 426, 963, 961, 634, 223, 371, 929, 355, 684, 155, 240, 969, 115, 227, 695, 127, 123, 864, 859, 588, 419, 228, 363, 754, 897, 981, 982, 120, 302, 454, 591, 952, 426, 974, 688, 504, 979, 455, 759, 383, 199, 426, 256, 337, 586, 214, 622, 667, 684, 265, 926, 860, 446, 670, 734, 635, 731, 240, 889, 200, 942, 353, 340, 959, 578, 512, 654, 462, 941, 703, 765, 900, 599, 618, 683, 630, 465, 787, 817, 707, 373, 598, 692, 368, 150, 652, 247, 447, 626, 163, 284, 569, 405, 413, 901, 496, 193, 486, 160, 954, 634, 658, 609, 261, 452, 704, 511, 288, 542, 904, 196, 834, 577, 511, 944, 368, 386, 757, 524, 463, 675, 533, 421, 445, 746, 621, 238, 176, 526, 266, 793, 619, 291, 311, 120, 492, 804, 386, 541, 424, 274, 584, 394, 795, 978, 659, 633, 639, 420, 635, 248, 489, 759, 466, 130, 425, 202, 330, 143, 266, 976, 731, 932, 917, 996, 883, 777, 387, 617, 332, 659, 808, 774, 505, 972, 681, 123, 462, 120, 196, 838, 223, 507, 946, 837, 236, 322, 199, 398, 239, 439, 968, 756, 260, 390, 436, 313, 909, 609, 390, 495, 236, 395, 200, 174, 958, 948, 395, 799, 876, 101, 565, 455, 581, 482, 426, 293, 366, 386, 621, 757, 446, 187, 949, 397, 491, 385, 830, 112, 868, 134, 344, 847, 289, 722, 595, 957, 178, 402, 779, 883, 149, 767, 961, 606, 461, 920, 439, 590, 440, 348, 821, 748, 400, 499, 610, 875, 799, 925, 382, 233, 288, 879, 315, 425, 325, 178, 489, 920, 728, 855, 955, 721, 429, 173, 485, 781, 819, 865, 531, 920, 891, 197, 927, 972, 662, 177, 445, 982, 989, 993, 119, 469, 279, 502, 276, 603, 226, 282, 339, 393, 337, 402, 966, 310, 800, 774, 853, 896, 991, 693, 709, 196, 730, 482, 591, 635, 534, 359, 729, 437, 133, 739, 594, 394, 391, 401, 403, 851, 944, 842, 777, 943, 825, 378, 723, 620, 647, 441, 435, 312, 753, 707, 667, 756, 484, 280, 854, 491, 152, 995, 126, 674, 240, 684, 382, 262, 466, 594, 213, 894, 445, 708, 308, 966, 541, 977, 260, 923, 543, 576, 487, 325, 243, 500, 491, 990, 274, 788, 370, 801, 784, 522, 255, 381, 610, 683, 123, 365, 495, 400, 135, 184, 265, 135, 515, 446, 973, 331, 390, 615, 363, 683, 993, 750, 858, 998, 472, 929, 545, 597, 534, 505, 685, 487, 383, 377, 165, 857, 612, 976, 660, 907, 198, 590, 654, 503, 794, 502, 263, 904, 104, 193, 623, 132, 405, 180, 764, 131, 587, 914, 534, 140, 904, 826, 501, 955, 235, 931, 779, 906, 979, 296, 272, 367, 535, 335, 451, 589, 174, 914, 369, 189, 139, 218, 498, 108, 617, 795, 489, 636, 862, 221, 120, 861, 974, 654, 747, 354, 401, 940, 688, 297, 347, 578, 874, 799, 140, 435, 791, 325, 168, 162, 677, 664, 328, 862, 415, 516, 946, 935, 921, 802, 424, 628, 141, 236, 270, 662, 399, 961, 414, 401, 598, 544, 560, 504, 970, 960, 715, 129, 459, 442, 821, 435, 818, 889, 419, 875, 367, 111, 352, 347, 529, 223, 173, 641, 990, 219, 546, 929, 809, 388, 542, 167, 842, 671, 348, 102, 772, 277, 420, 212, 712, 792, 392, 309, 938, 487, 912, 668, 968, 563, 273, 632, 421, 381, 817, 888, 641, 529, 491, 438, 223, 933, 706, 848, 758, 760, 172, 316, 408, 432, 274, 914, 935, 942, 861, 336, 439, 104, 215, 482, 778, 293, 945, 751, 370, 974, 851, 162, 523, 180, 512, 597, 875, 301, 418, 861, 378, 998, 938, 193, 214, 917, 963, 137, 885, 487, 403, 359, 133, 818, 636, 461, 885, 166, 267, 180, 454, 182, 612, 737, 195, 731, 249, 353, 810, 829, 939, 510, 332, 345, 320, 112, 137, 417, 490, 926, 474, 670, 162, 663, 942, 323, 325, 950, 201, 864, 833, 484, 680, 385, 957, 390, 679, 722, 459, 802, 312, 424, 198, 616, 120, 505, 161, 516, 468, 571, 239, 897, 554, 103, 773, 983, 335, 460, 157, 977, 846, 535, 722, 761, 955, 282, 270, 496, 345, 188, 430, 915, 523, 569, 689, 308, 834, 927, 652, 819, 248, 813, 493, 684, 815, 257, 871, 871, 576, 261, 286, 780, 710, 911, 304, 866, 688, 199, 798, 297, 779, 690, 822, 901, 253, 720, 531, 673, 133, 947, 499, 900, 735, 202, 660, 715, 854, 961, 168, 929, 387, 305, 173, 685, 934, 444, 677, 881, 166, 140, 514, 441, 226, 917, 536, 441, 400, 423, 467, 647, 963, 240, 745, 654, 651, 505, 366, 574, 709, 533, 975, 797, 624, 224, 120, 248, 556, 975, 162, 440, 896, 207, 505, 676, 761, 220, 389, 144, 328, 157, 838, 975, 530, 571, 113, 450, 279, 916, 477, 164, 160, 711, 312, 188, 154, 724, 719, 808, 642, 855, 879, 152, 638, 535, 784, 809, 219, 870, 579, 986, 819, 622, 796, 670, 283, 899, 228, 475, 877, 993, 445, 950, 254, 662, 418, 440, 474, 992, 558, 970, 443, 734, 679, 447, 448, 539, 578, 626, 732, 556, 722, 289, 115, 162, 947, 809, 956, 385, 781, 980, 850, 225, 490, 306, 762, 665, 498, 299, 656, 561, 566, 716, 385, 178, 579, 658, 282, 446, 792, 533, 975, 718, 635, 769, 714, 613, 763, 526, 985, 618, 354, 969, 336, 279, 809, 484, 524, 303, 547, 479, 149, 246, 325, 217, 148, 203, 695, 765, 803, 358, 671, 975, 646, 308, 649, 542, 476, 431, 536, 967, 427, 212, 501, 562, 711, 877, 241, 384, 104, 616, 805, 532, 695, 399, 146, 335, 585, 289, 741, 736, 250, 233, 225, 631, 201, 299, 477, 800, 854, 527, 128, 814, 782, 192, 729, 539, 985, 795, 970, 862, 316, 941, 652, 288, 110, 907, 345, 219, 439, 660, 515, 937, 781, 538, 907, 359, 494, 998, 419, 535, 958, 102, 462, 375, 850, 633, 592, 840, 838, 788, 391, 393, 117, 972, 429, 670, 337, 126, 703, 271, 139, 959, 496, 351, 946, 691, 514, 476, 227, 375, 213, 290, 922, 614, 494, 798, 347, 922, 817, 875, 910, 536, 208, 680, 580, 380, 963, 615, 756, 833, 605, 346, 629, 317, 586, 595, 932, 183, 365, 218, 566, 399, 492, 137, 204, 619, 772, 459, 311, 623, 995, 620, 910, 608, 804, 431, 840, 612, 243, 308, 446, 965, 410, 195, 299, 523, 753, 464, 996, 935, 117, 761, 569, 607, 325, 361, 713, 504, 675, 469, 616, 876, 108, 965, 975, 455, 458, 715, 995, 960, 773, 157, 947, 899, 166, 858, 372, 588, 784, 284, 734, 977, 933, 663, 568, 384, 185, 693, 520, 788, 254, 687, 160, 766, 264, 952, 299, 209, 808, 947, 985, 196, 652, 577, 276, 102, 638, 816, 107, 921, 931, 459, 194, 983, 338, 577, 535, 916, 601, 926, 433, 710, 943, 458, 853, 801, 714, 409, 950, 713, 435, 855, 106, 639, 334, 654, 539, 626, 253, 394, 404, 723, 309, 897, 883, 608, 267, 464, 930, 109, 923, 376, 745, 875, 861, 903, 258, 860, 300, 699, 226, 736, 740, 235, 928, 215, 423, 377, 894, 144, 489, 699, 369, 817, 196, 755, 736, 318, 958, 532, 353, 487, 464, 209, 841, 276, 659, 233, 326, 151, 908, 995, 285, 163, 734, 342, 845, 648, 196, 265, 305, 872, 342, 759, 520, 146, 372, 139, 142, 335, 782, 578, 875, 134, 475, 881, 301, 332, 847, 930, 554, 751, 186, 334, 297, 403, 694, 832, 870, 228, 110, 107, 443, 432, 142, 385, 517, 825, 482, 881, 972, 360, 402, 516, 570, 380, 508, 407, 551, 914, 861, 790, 573, 992, 294, 903, 405, 430, 544, 769, 342, 450, 548, 519, 711, 768, 997, 858, 398, 601, 513, 600, 331, 267, 179, 600, 908, 655, 287, 158, 901, 602, 507, 880, 949, 497, 347, 548, 699, 987, 749, 371, 850, 642, 951, 492, 718, 920, 521, 860, 682, 989, 794, 345, 957, 197, 835, 744, 650, 104, 748, 771, 695, 113, 817, 341, 163, 533, 213, 180, 505, 372, 816, 561, 622, 979, 683, 193, 413, 257, 471, 283, 421, 880, 807, 540, 176, 628, 656, 162, 477, 606, 361, 796, 575, 236, 895, 426, 209, 521, 253, 328, 636, 111, 797, 321, 290, 662, 460, 666, 609, 505, 357, 936, 652, 631, 740, 620, 862, 509, 154, 635, 153, 288, 998, 900, 435, 131, 220, 822, 105, 436, 849, 679, 510, 114, 690, 152, 165, 328, 767, 123, 706, 959, 969, 252, 823, 107, 686, 841, 703, 580, 743, 102, 784, 955, 602, 175, 991, 528, 604, 650, 865, 414, 627, 534, 701, 766, 958, 536, 778, 432, 719, 655, 664, 846, 392, 221, 525, 577, 708, 411, 213, 362, 556, 329, 660, 944, 882, 499, 221, 261, 803, 825, 988, 216, 967, 762, 485, 343, 300, 122, 993, 632, 251, 232, 905, 499, 462, 287, 369, 396, 196, 735, 174, 800, 662, 394, 786, 349, 596, 888, 853, 963, 943, 509, 733, 700, 656, 150, 655, 287, 646, 705, 179, 352, 990, 217, 282, 717, 895, 644, 257, 105, 865, 844, 868, 647, 915, 168, 670, 532, 310, 645, 106, 526, 852, 853, 863, 980, 235, 841, 705, 182, 988, 254, 419, 141, 398, 161, 376, 412, 219, 318, 195, 499, 663, 637, 455, 690, 854, 152, 427, 993, 334, 640, 852, 962, 298, 418, 573, 850, 740, 404, 956, 677, 627, 434, 708, 587, 197, 290, 859, 815, 487, 719, 220, 730, 183, 155, 977, 525, 608, 623, 775, 474, 371, 191, 807, 199, 493, 124, 714, 798, 904, 336, 562, 248, 136, 169, 895, 706, 301, 250, 374, 472, 243, 656, 199, 536, 469, 394, 832, 710, 284, 539, 330, 889, 756, 221, 368, 946, 156, 574, 278, 299, 549, 388, 843, 712, 979, 421, 904, 192, 130, 588, 412, 548, 527, 971, 143, 186, 736, 693, 230, 794, 322, 850, 430, 189, 820, 305, 426, 110, 878, 931, 573, 806, 976, 947, 954, 242, 626, 299, 816, 737, 886, 797, 458, 614, 498, 552, 215, 436, 141, 291, 891, 813, 408, 283, 109, 706, 421, 930, 977, 893, 307, 830, 701, 905, 285, 585, 928, 152, 150, 465, 473, 917, 400, 280, 111, 497, 610, 940, 294, 752, 447, 723, 977, 160, 558, 827, 111, 566, 596, 972, 703, 281, 313, 452, 285, 421, 399, 222, 412, 644, 588, 105, 929, 399, 403, 829, 242, 482, 712, 636, 863, 566, 913, 767, 859, 488, 857, 215, 817, 310, 923, 792, 604, 230, 390};


int compare(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}

void quicksort (int indices[], int N) 
{
    qsort(indices, N, sizeof(int), compare);
}

int contachar (int c, int s[]) 
{
    int i, r = 0;
    for (i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] == c) r++;
    }
    return r;
}

int charMaisfreq (int s[]) 
{
    int i, temp, max;
    int r = s[0];
    max = contachar (s[0], s);
    for (i = 1; s[i] != '\0'; i++) 
    {
        temp = contachar (s[i], s);
        if (max < temp) {
        max = temp;
        r = s[i];
        }
    }
    return r;
}

<<<<<<< HEAD
int main () {
    quicksort (sequencia1, 1081);
    for (int i = 0; i < 1864; i++) 
    {
         printf ("%d\n", sequencia1[i]);
    }
    
    printf("%d\n", sequencia2[691]);
=======
int main () 
{   
    // quicksort (sequence, 1864);
    printf("%d\n", sequence[691]);
>>>>>>> b439f69 (.)

    // printf ("%d\n", charMaisfreq(sequencia1));
}