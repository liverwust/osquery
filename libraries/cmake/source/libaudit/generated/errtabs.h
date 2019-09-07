/* This is a generated file, see Makefile.am for its inputs. */
static const char err_strings[] = "E2BIG\0EACCES\0EADDRINUSE\0EADDRNOTAVAIL\0EADV\0EAFNOSUPPORT\0EAGAIN\0EALREADY\0EBADE\0EBADF\0"
	"EBADFD\0EBADMSG\0EBADR\0EBADRQC\0EBADSLT\0EBFONT\0EBUSY\0ECANCELED\0ECHILD\0ECHRNG\0"
	"ECOMM\0ECONNABORTED\0ECONNREFUSED\0ECONNRESET\0EDEADLK\0EDEADLOCK\0EDESTADDRREQ\0EDOM\0EDOTDOT\0EDQUOT\0"
	"EEXIST\0EFAULT\0EFBIG\0EHOSTDOWN\0EHOSTUNREACH\0EIDRM\0EILSEQ\0EINPROGRESS\0EINTR\0EINVAL\0"
	"EIO\0EISCONN\0EISDIR\0EISNAM\0EKEYEXPIRED\0EKEYREJECTED\0EKEYREVOKED\0EL2HLT\0EL2NSYNC\0EL3HLT\0"
	"EL3RST\0ELIBACC\0ELIBBAD\0ELIBEXEC\0ELIBMAX\0ELIBSCN\0ELNRNG\0ELOOP\0EMEDIUMTYPE\0EMFILE\0"
	"EMLINK\0EMSGSIZE\0EMULTIHOP\0ENAMETOOLONG\0ENAVAIL\0ENETDOWN\0ENETRESET\0ENETUNREACH\0ENFILE\0ENOANO\0"
	"ENOBUFS\0ENOCSI\0ENODATA\0ENODEV\0ENOENT\0ENOEXEC\0ENOKEY\0ENOLCK\0ENOLINK\0ENOMEDIUM\0"
	"ENOMEM\0ENOMSG\0ENONET\0ENOPKG\0ENOPROTOOPT\0ENOSPC\0ENOSR\0ENOSTR\0ENOSYS\0ENOTBLK\0"
	"ENOTCONN\0ENOTDIR\0ENOTEMPTY\0ENOTNAM\0ENOTRECOVERABLE\0ENOTSOCK\0ENOTTY\0ENOTUNIQ\0ENXIO\0EOPNOTSUPP\0"
	"EOVERFLOW\0EOWNERDEAD\0EPERM\0EPFNOSUPPORT\0EPIPE\0EPROTO\0EPROTONOSUPPORT\0EPROTOTYPE\0ERANGE\0EREMCHG\0"
	"EREMOTE\0EREMOTEIO\0ERESTART\0EROFS\0ESHUTDOWN\0ESOCKTNOSUPPORT\0ESPIPE\0ESRCH\0ESRMNT\0ESTALE\0"
	"ESTRPIPE\0ETIME\0ETIMEDOUT\0ETOOMANYREFS\0ETXTBSY\0EUCLEAN\0EUNATCH\0EUSERS\0EWOULDBLOCK\0EXDEV\0"
	"EXFULL";
static const unsigned err_s2i_s[] = {
	0,6,13,24,38,43,56,63,72,78,
	84,91,99,105,113,121,128,134,144,151,
	158,164,177,190,201,209,219,232,237,245,
	252,259,266,272,282,295,301,308,320,326,
	333,337,345,352,359,371,384,396,403,412,
	419,426,434,442,451,459,467,474,480,492,
	499,506,515,525,538,546,555,565,577,584,
	591,599,606,614,621,628,636,643,650,658,
	668,675,682,689,696,708,715,721,728,735,
	743,752,760,770,778,794,803,810,819,825,
	836,846,857,863,876,882,889,905,916,923,
	931,939,949,958,964,974,990,997,1003,1010,
	1017,1026,1032,1042,1055,1063,1071,1079,1086,1098,
	1104,
};
static const int err_s2i_i[] = {
	7,13,98,99,68,97,11,114,52,9,
	77,74,53,56,57,59,16,125,10,44,
	70,103,111,104,35,35,89,33,73,122,
	17,14,27,112,113,43,84,115,4,22,
	5,106,21,120,127,129,128,51,45,46,
	47,79,80,83,82,81,48,40,124,24,
	31,90,72,36,119,100,102,101,23,55,
	105,50,61,19,2,8,126,37,67,123,
	12,42,64,65,92,28,63,60,38,15,
	107,20,39,118,131,88,25,76,6,95,
	75,130,1,96,32,71,93,91,34,78,
	66,121,85,30,108,94,29,3,69,116,
	86,62,110,109,26,117,49,87,11,18,
	54,
};
static int err_s2i(const char *s, int *value) {
	size_t len, i;
	len = strlen(s);
	{ char copy[len + 1];
	for (i = 0; i < len; i++) {
		char c = s[i];
		copy[i] = GT_ISLOWER(c) ? c - 'a' + 'A' : c;
	}
	copy[i] = 0;
	return s2i__(err_strings, err_s2i_s, err_s2i_i, 131, copy, value);
	}
}
static const unsigned err_i2s_direct[] = {
	857,621,997,320,333,819,0,628,78,144,
	56,668,6,259,735,128,252,1098,614,752,
	345,326,577,492,803,1055,266,708,990,958,
	499,876,232,916,201,525,643,728,760,474,
	-1u,675,295,151,403,412,419,467,1071,599,
	396,72,99,1104,584,105,113,-1u,121,721,
	606,1026,715,682,689,931,650,38,1003,158,
	882,515,237,91,836,810,84,923,426,434,
	459,451,442,301,949,1017,1079,794,219,506,
	905,696,889,974,825,863,43,13,24,546,
	565,555,164,190,591,337,743,964,1042,1032,
	177,272,282,63,308,1010,1063,770,538,352,
	939,245,658,480,134,636,359,384,371,846,
	778,
};
static const char *err_i2s(int v) {
	return i2s_direct__(err_strings, err_i2s_direct, 1, 131, v);
}