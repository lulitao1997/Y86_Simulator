//icode

const int INOP = 1;
const int IHALT = 0;
const int IRRMOVL = 2;
const int IIRMOVL = 3;
const int IRMMOVL = 4;
const int IMRMOVL = 5;
const int IOPL = 6;
const int IJXX = 7;
const int ICALL = 8;
const int IRET = 9;
const int IPUSHL = 0xA;
const int IPOPL = 0xB;
const int ICMPL = 0xC;
const int IIROPL = 0xD;
const int IIRCMPL = 0xE;
const int FNONE = 0;

const int RESP = 4;
const int RNONE = 0xF;

const int ALUADD = 0;
const int ALUSUB = 1;

const int SAOK = 1; //正常操作
const int SADR = 2; //遇到非法地址
const int SINS = 3; //遇到非法指令
const int SHLT = 4; //处理器执行HLT指令

//registers
/*
0 eax
1 ecx
2 edx
3 ebx
4 esp(RESP)
5 ebp
6 esi
7 edi
F (RNONE)*/

/*
op:
0 add_l
1 subl
2 andl
3 xorl
*/