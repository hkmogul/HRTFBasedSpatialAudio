#define L_IRLEN 60
float leftIR[24][60] = {
{0.000031, -0.000059, 0.000107, -0.000158, 0.000192, -0.000195, 0.000327, -0.000241, 0.000337, -0.000109, 0.000355, 0.000005, 0.000360, -0.001016, -0.005713, -0.012224, -0.012362, -0.013945, -0.017977, -0.013368, 0.015800, 0.082163, -0.025001, -0.109492, 0.031975, -0.069702, -0.186682, 0.008613, 0.082769, 0.028212, 0.045485, 0.070066, 0.058341, 0.000099, 0.001869, 0.034989, -0.024734, -0.097064, -0.043043, 0.033459, 0.032916, 0.023374, -0.008168, -0.003868, 0.022561, -0.001042, -0.012220, -0.003798, 0.000202, 0.006587, 0.001170, 0.013473, 0.026228, 0.003385, -0.010590, 0.016902, 0.027751, -0.001150, -0.017982,-0.006743} , 
{-0.000120, 0.000276, -0.000135, 0.000320, -0.000160, 0.000390, -0.000084, 0.000458, -0.000080, 0.000636, -0.002289, -0.009318, -0.017330, -0.014491, -0.019042, -0.019834, -0.011291, 0.044039, 0.109349, -0.095419, -0.111977, 0.056149, -0.180639, -0.179522, 0.106181, 0.090335, 0.026991, 0.058042, 0.100280, 0.049563, -0.029625, 0.033344, 0.021832, -0.112134, -0.102266, 0.041513, 0.059250, 0.018918, -0.006429, -0.008069, 0.021733, 0.005511, -0.007197, 0.006021, 0.001318, 0.017813, 0.010471, -0.003599, 0.020407, -0.002373, -0.034832, 0.012523, 0.050596, 0.019557, -0.020934, -0.012771, 0.012876, 0.008542, -0.018814,-0.013333} , 
{-0.000110, 0.000311, -0.000108, 0.000449, -0.000088, 0.000511, -0.000163, 0.000875, -0.004501, -0.013220, -0.021899, -0.017862, -0.024759, -0.016736, -0.006475, 0.082553, 0.101886, -0.143043, -0.071402, -0.032055, -0.259990, -0.071019, 0.136572, 0.077253, 0.055234, 0.114646, 0.123101, -0.019872, -0.019095, 0.029067, -0.090856, -0.110327, 0.006642, 0.031380, 0.005891, 0.026315, 0.038836, 0.033460, 0.018615, -0.011852, 0.005432, -0.005373, -0.012487, 0.013681, -0.001482, -0.016060, 0.004337, 0.005093, 0.013537, 0.027339, 0.023349, 0.011228, -0.006042, -0.008782, -0.001237, -0.006382, -0.018921, -0.011972, 0.001329,0.003252} , 
{-0.000173, 0.000533, -0.000193, 0.000635, -0.000329, 0.000995, -0.003217, -0.011714, -0.023337, -0.022706, -0.026666, -0.017239, -0.010759, 0.058260, 0.134867, -0.076327, -0.104056, -0.101591, -0.253634, -0.060928, 0.089195, 0.062471, 0.113155, 0.184110, 0.115991, -0.036647, -0.023391, -0.025465, -0.108007, -0.055831, 0.003596, 0.016733, 0.000897, 0.011853, 0.066041, 0.047588, 0.007280, 0.010822, 0.023955, 0.000037, -0.010730, -0.017533, -0.035468, -0.006867, 0.014467, -0.001432, 0.020006, 0.041068, 0.017788, 0.006236, 0.010170, 0.003431, -0.021727, -0.027713, -0.012680, -0.002606, 0.000823, 0.002778, 0.009557,0.015771} , 
{0.000555, -0.000182, 0.000779, -0.000368, 0.001108, -0.003517, -0.012573, -0.025921, -0.025091, -0.027873, -0.013811, -0.011843, 0.066838, 0.146650, -0.072725, -0.116830, -0.179128, -0.240711, 0.001720, 0.051394, 0.054907, 0.223570, 0.202118, 0.037190, -0.051171, -0.056393, -0.081633, -0.066404, -0.002779, 0.008404, 0.023589, -0.002387, 0.027041, 0.061167, 0.020497, 0.020046, 0.022020, 0.003299, -0.014591, -0.016321, -0.017153, -0.010683, 0.012925, 0.019698, 0.008136, 0.011976, 0.011304, 0.007407, 0.019647, 0.015879, -0.006991, -0.027026, -0.013306, -0.009484, -0.004954, 0.001597, 0.005137, 0.010677, 0.013924,0.005594} , 
{-0.000184, 0.000635, -0.000220, 0.000732, -0.001518, -0.011099, -0.025304, -0.027989, -0.024134, -0.017196, -0.007540, 0.034523, 0.174905, -0.014942, -0.189995, -0.168023, -0.227480, -0.029539, 0.062978, 0.069062, 0.282821, 0.165437, -0.038623, -0.060414, -0.070827, -0.030823, -0.021646, -0.028190, 0.015756, 0.031225, 0.001670, 0.017952, 0.048343, 0.019459, 0.028848, 0.026294, 0.009489, -0.024256, -0.048793, -0.023507, 0.005359, 0.025371, 0.031841, 0.008104, 0.011125, 0.018154, 0.011057, 0.017421, 0.007446, -0.018420, -0.025738, -0.010825, -0.001607, -0.000160, -0.001621, -0.001529, 0.014231, 0.012473, -0.004751,-0.008702} , 
{-0.000134, 0.000433, -0.000018, 0.000666, -0.001505, -0.011181, -0.026050, -0.028105, -0.021195, -0.014206, -0.005463, 0.032089, 0.184890, -0.015007, -0.232388, -0.187693, -0.180633, -0.013727, 0.061376, 0.152377, 0.277024, 0.056968, -0.096911, -0.079165, -0.026622, 0.035074, -0.039546, -0.027919, 0.042148, 0.029885, -0.000441, 0.001436, 0.028677, 0.029178, 0.041049, 0.034146, 0.007184, -0.041991, -0.061099, -0.016208, 0.025706, 0.034065, 0.013021, -0.012831, 0.009747, 0.031548, 0.021894, 0.022510, 0.003660, -0.020559, -0.026402, -0.009829, 0.003037, -0.005228, -0.006682, 0.011369, 0.025016, 0.009200, -0.010673,-0.011556} , 
{0.000743, -0.000576, 0.001260, -0.000999, 0.001831, -0.006581, -0.015613, -0.030807, -0.019091, -0.020478, 0.000417, -0.010252, 0.116297, 0.121339, -0.155222, -0.224500, -0.190186, -0.059917, 0.050634, 0.113323, 0.231714, 0.098540, -0.097192, -0.097071, -0.009869, 0.074710, -0.003004, -0.049342, 0.016517, 0.029187, 0.008870, -0.014861, 0.010033, 0.033574, 0.036284, 0.047387, 0.035732, -0.028623, -0.083955, -0.036186, 0.036674, 0.053884, 0.013091, -0.026474, -0.009452, 0.027541, 0.022570, 0.010112, 0.004386, 0.003759, -0.001147, -0.007032, 0.005478, 0.003134, -0.017393, -0.016719, 0.014313, 0.017115, -0.008441,-0.021753} , 
{-0.000529, 0.000890, -0.000790, 0.001362, -0.001101, 0.002029, -0.005278, -0.012044, -0.027065, -0.017722, -0.019535, -0.000708, -0.013110, 0.084519, 0.115884, -0.107149, -0.202005, -0.172690, -0.059545, 0.043400, 0.098773, 0.163494, 0.064438, -0.082067, -0.074803, 0.034614, 0.088207, -0.016727, -0.033449, 0.019902, 0.004748, -0.015784, -0.020058, 0.012861, 0.038127, 0.042301, 0.051666, 0.028763, -0.025464, -0.063094, -0.031836, 0.022077, 0.040545, 0.008855, -0.017086, 0.005388, 0.027344, 0.014882, 0.003228, 0.001556, 0.001526, -0.002888, -0.006315, 0.002231, -0.000607, -0.010392, -0.004639, 0.013419, 0.011700,-0.004867} , 
{-0.000053, 0.000326, -0.000303, 0.000507, -0.000410, 0.000862, -0.000619, 0.001085, -0.004094, -0.010422, -0.021648, -0.016737, -0.017285, -0.005062, -0.010415, 0.064929, 0.086942, -0.072951, -0.155459, -0.139624, -0.065369, 0.015142, 0.072080, 0.104623, 0.046334, -0.037224, -0.031852, 0.053475, 0.072322, -0.022433, -0.037272, 0.005993, 0.001920, -0.014437, -0.021768, 0.011347, 0.037812, 0.042496, 0.045976, 0.022290, -0.021330, -0.036568, -0.007627, 0.017303, 0.011266, -0.014274, -0.019850, 0.005213, 0.025484, 0.022323, 0.015015, 0.008568, 0.004156, -0.003293, -0.007452, -0.002320, -0.007889, -0.012505, -0.003400,0.010193} , 
{-0.000207, 0.000233, -0.000180, 0.000232, -0.000185, 0.000279, -0.000060, 0.000326, -0.000042, 0.000429, -0.000761, -0.005054, -0.013569, -0.017417, -0.016036, -0.013263, -0.009072, 0.009858, 0.079321, 0.020612, -0.092344, -0.117542, -0.101046, -0.054786, 0.008694, 0.071322, 0.086868, 0.023507, -0.023277, 0.023369, 0.068667, 0.012407, -0.041621, -0.021775, -0.007191, -0.010902, -0.015870, 0.010166, 0.040605, 0.032268, 0.032133, 0.032921, 0.000062, -0.028174, -0.026102, -0.003631, 0.014592, 0.004133, -0.015779, -0.006095, 0.015781, 0.022592, 0.020631, 0.016825, 0.009117, -0.002296, -0.012058, -0.010127, -0.007291,-0.007701} , 
{0.000087, 0.000004, 0.000047, -0.000044, 0.000242, -0.000071, 0.000209, -0.000141, 0.000356, -0.000005, 0.000381, -0.000159, 0.000509, -0.001097, -0.004819, -0.012123, -0.015316, -0.015830, -0.011755, -0.008877, 0.017256, 0.060309, 0.014668, -0.067938, -0.103535, -0.099493, -0.064796, 0.002479, 0.080690, 0.088408, 0.020821, -0.012556, 0.029090, 0.048219, -0.003056, -0.045198, -0.030985, -0.008609, 0.003662, 0.014360, 0.021226, 0.019343, 0.020136, 0.025834, 0.018211, 0.000521, -0.020253, -0.027104, -0.005862, 0.017261, 0.009620, -0.010667, -0.004450, 0.017714, 0.025363, 0.018147, 0.011049, -0.003390, -0.017025,-0.013032} , 
{0.000055, -0.000149, 0.000075, -0.000165, 0.000082, -0.000155, 0.000268, -0.000324, 0.000279, -0.000287, 0.000321, -0.000136, 0.000367, -0.000039, 0.000267, -0.000045, -0.000423, -0.002972, -0.008416, -0.012486, -0.013654, -0.011522, -0.008384, 0.006784, 0.037951, 0.029595, -0.035525, -0.082548, -0.085421, -0.069502, -0.020730, 0.054170, 0.077161, 0.029930, -0.005407, 0.020175, 0.037782, 0.002235, -0.037029, -0.026164, 0.002368, 0.009350, 0.007148, 0.009810, 0.011076, 0.013843, 0.017181, 0.017287, 0.008223, -0.008636, -0.018778, -0.005933, 0.012181, 0.007809, -0.006743, -0.007385, 0.007158, 0.016629, 0.011801,0.003819} , 
{0.000100, -0.000007, -0.000020, -0.000044, -0.000069, -0.000024, -0.000113, -0.000063, 0.000000, -0.000115, 0.000182, -0.000277, 0.000193, -0.000265, 0.000179, -0.000165, 0.000157, 0.000071, 0.000069, 0.000271, -0.001490, -0.005836, -0.009855, -0.010399, -0.011081, -0.008058, -0.001031, 0.027045, 0.024060, -0.017075, -0.046907, -0.064529, -0.064493, -0.034840, 0.014612, 0.048397, 0.038444, 0.010503, 0.016046, 0.030132, 0.006687, -0.022208, -0.022218, -0.005061, 0.003942, 0.003515, 0.008238, 0.012977, 0.008761, 0.014102, 0.015566, 0.007716, 0.000002, -0.007836, -0.009511, 0.000087, 0.003451, -0.005526, -0.009707,-0.001924} , 
{0.000172, -0.000113, 0.000118, -0.000097, 0.000066, -0.000021, -0.000026, -0.000026, 0.000083, -0.000165, -0.000019, 0.000039, -0.000214, 0.000157, -0.000270, 0.000214, -0.000089, 0.000676, -0.000083, -0.001090, 0.000052, 0.000074, -0.000204, -0.000063, -0.002399, -0.006459, -0.007685, -0.008549, -0.007338, -0.005260, 0.011963, 0.021435, -0.004400, -0.031137, -0.039187, -0.044561, -0.040948, -0.011175, 0.023644, 0.029161, 0.013868, 0.012741, 0.023568, 0.013436, -0.014741, -0.019328, -0.004457, 0.004552, 0.004857, 0.003526, 0.008550, 0.010539, 0.006967, 0.007591, 0.008337, 0.001433, -0.006718, -0.006769, -0.002283,-0.004725} , 
{-0.000032, -0.000035, 0.000094, -0.000034, 0.000054, -0.000026, 0.000016, -0.000021, 0.000013, -0.000095, -0.000097, -0.000091, 0.000074, 0.000021, 0.000039, 0.000696, -0.000154, -0.001300, 0.000056, -0.000206, 0.000039, 0.001077, 0.000745, -0.000272, -0.000270, -0.000311, -0.000612, -0.002034, -0.004153, -0.006331, -0.006435, -0.005298, -0.004032, 0.007470, 0.015232, -0.003225, -0.023749, -0.035064, -0.030240, -0.024212, -0.015207, 0.014196, 0.026321, 0.006762, 0.000343, 0.011295, 0.008950, -0.008955, -0.015326, -0.000826, 0.009104, 0.004204, 0.002208, 0.007654, 0.006809, 0.001463, -0.000487, -0.002345, -0.005094,-0.008942} , 
{-0.000062, 0.000086, -0.000198, 0.000264, -0.000244, 0.000175, -0.000160, 0.000078, -0.000141, 0.000019, 0.000042, -0.000037, 0.000074, 0.000412, 0.000632, -0.001724, -0.000395, -0.000018, -0.000349, 0.001174, 0.001116, -0.000064, -0.000255, -0.000820, -0.000363, -0.000050, 0.001072, -0.000255, -0.000388, -0.000275, -0.001711, -0.003557, -0.004332, -0.004736, -0.004536, -0.002533, 0.005577, 0.007304, -0.002317, -0.013187, -0.022250, -0.027920, -0.023376, -0.013650, 0.002480, 0.016578, 0.013365, 0.003374, 0.001086, -0.004209, -0.009317, -0.008684, -0.004100, -0.002389, 0.000894, -0.002220, -0.006795, -0.005117, 0.005395,0.015685} , 
{-0.000038, 0.000143, -0.000143, 0.000143, -0.000148, 0.000070, -0.000162, -0.000008, 0.000057, -0.000199, 0.000367, -0.000340, 0.001093, -0.000047, -0.001886, 0.000168, -0.000447, -0.000201, 0.001874, 0.000282, 0.000673, -0.000167, -0.001184, -0.000671, 0.000174, 0.000666, -0.000099, -0.000502, 0.000861, -0.000436, -0.000212, -0.000412, -0.000638, -0.001790, -0.002468, -0.003060, -0.003500, -0.003198, 0.000754, 0.002276, -0.002411, -0.008012, -0.012806, -0.018111, -0.020643, -0.019705, -0.010216, 0.007315, 0.010457, 0.003970, -0.001292, -0.017338, -0.032592, -0.026556, -0.005097, 0.010834, 0.020528, 0.024782, 0.023939,0.013763} , 
{0.000014, -0.000080, -0.000024, 0.000094, -0.000011, -0.000003, -0.000181, 0.000002, 0.000054, -0.000108, 0.000261, -0.000053, 0.001152, -0.000659, -0.001617, 0.000374, -0.001059, 0.000528, 0.001762, -0.000476, 0.001331, 0.000073, -0.001640, -0.000440, -0.000188, 0.000500, 0.000191, -0.000334, 0.000518, -0.000122, -0.000216, 0.000134, 0.000388, -0.000236, -0.000674, -0.001343, -0.002829, -0.004332, -0.006019, -0.006299, -0.004232, -0.002173, -0.001021, 0.001454, -0.006368, -0.018789, -0.021438, -0.025127, -0.032094, -0.021344, -0.000834, 0.006907, 0.007940, 0.013658, 0.010554, 0.002198, 0.005513, 0.010445, 0.003110,-0.002961} , 
{0.000288, -0.000152, 0.000317, -0.000254, 0.000258, -0.000246, 0.000134, -0.000239, 0.000157, -0.000152, 0.000292, -0.000078, 0.001140, -0.000482, -0.001235, -0.000061, -0.000823, -0.000156, 0.001915, -0.000508, 0.001219, 0.001100, -0.001347, -0.000978, -0.000097, -0.000411, 0.000308, 0.000455, -0.000100, 0.000171, 0.000195, -0.000929, -0.000783, -0.003212, -0.004323, -0.005282, -0.006335, -0.005303, 0.002276, 0.008900, -0.004048, -0.015483, -0.009734, -0.023053, -0.036871, -0.021047, -0.004163, 0.001013, 0.004803, 0.008029, 0.009845, 0.006251, 0.003780, 0.005222, -0.001263, -0.016682, -0.014531, 0.000625, 0.007250,0.010004} , 
{-0.000070, 0.000059, -0.000124, 0.000038, 0.000024, -0.000019, -0.000019, -0.000112, -0.000029, -0.000003, -0.000049, 0.000175, -0.000000, 0.000910, -0.000471, -0.001071, 0.000152, -0.001054, 0.000127, 0.001413, -0.000185, 0.000793, 0.001065, -0.000253, -0.001240, 0.000055, -0.000482, -0.000722, -0.000806, -0.003281, -0.004903, -0.005265, -0.007341, -0.005875, 0.002082, 0.013314, 0.000137, -0.017588, -0.011479, -0.020929, -0.043154, -0.026740, -0.002118, 0.005317, 0.010470, 0.017777, 0.016148, 0.011231, 0.007644, 0.006364, -0.004993, -0.021763, -0.027404, -0.013885, 0.001091, 0.007047, 0.008179, 0.010726, 0.012076,0.009396} , 
{-0.000036, 0.000022, -0.000113, 0.000237, -0.000248, 0.000201, -0.000138, 0.000031, -0.000246, 0.000032, -0.000228, 0.000159, 0.000003, -0.000020, 0.000648, 0.000332, -0.001473, 0.000130, 0.000044, -0.001270, 0.001125, 0.001073, -0.000151, 0.000192, -0.001537, -0.004969, -0.006475, -0.006967, -0.008371, -0.008306, 0.005882, 0.018940, -0.006719, -0.022190, -0.007282, -0.031067, -0.050739, -0.023401, 0.002235, 0.007337, 0.013364, 0.021817, 0.020433, 0.010705, 0.012567, 0.017696, 0.002184, -0.025141, -0.023962, -0.015060, -0.007091, 0.001301, 0.003164, 0.006793, 0.010798, 0.008150, 0.004376, 0.002977, 0.000826,-0.003880} , 
{-0.000155, 0.000080, -0.000025, 0.000026, -0.000063, 0.000150, -0.000094, 0.000135, -0.000053, -0.000128, -0.000024, -0.000117, 0.000024, 0.000061, -0.000156, 0.000346, 0.000672, 0.000013, -0.001511, 0.000871, -0.002433, -0.007524, -0.005842, -0.006517, -0.011118, -0.009372, 0.000281, 0.032526, 0.005589, -0.047969, -0.008295, -0.018424, -0.081896, -0.038946, 0.019232, 0.015947, 0.016940, 0.030485, 0.031847, 0.012240, 0.006531, 0.020150, 0.011787, -0.029972, -0.041018, -0.004695, 0.006646, 0.003323, 0.001461, 0.006150, 0.009800, 0.002979, 0.003560, 0.000919, -0.005353, -0.002202, -0.005739, -0.007998, 0.001437,0.008205} , 
{-0.000044, -0.000073, -0.000145, 0.000018, -0.000044, 0.000074, -0.000132, 0.000253, -0.000216, 0.000229, -0.000016, 0.000103, -0.000150, 0.000325, -0.000026, 0.000160, -0.001009, -0.004628, -0.008829, -0.009667, -0.012812, -0.013164, -0.010412, 0.013377, 0.056511, -0.022788, -0.070417, 0.008883, -0.057435, -0.118469, -0.010889, 0.047852, 0.032266, 0.032087, 0.046193, 0.039620, 0.003685, 0.005753, 0.027531, -0.008889, -0.065365, -0.038721, 0.012662, 0.019723, 0.012308, 0.010450, 0.000779, -0.001477, 0.008911, 0.003378, -0.006310, -0.003530, -0.001950, -0.004182, 0.003888, 0.012230, 0.006603, 0.000767, 0.013092,0.030323}}; 
int azimuth_l[24] = { 0, 15, 30, 45, 60, 75, 90, 105, 120, 135, 150, 165, 180, 195, 210, 225, 240, 255, 270, 285, 300, 315, 330, 345};