/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct baselexer270024 baselexer270024;
typedef struct TNimObject TNimObject;
typedef struct streamobj138035 streamobj138035;
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  baselexer270024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
streamobj138035* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
typedef N_NIMCALL_PTR(void, TY138036) (streamobj138035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY138040) (streamobj138035* s);
typedef N_NIMCALL_PTR(void, TY138044) (streamobj138035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY138049) (streamobj138035* s);
typedef N_NIMCALL_PTR(NI, TY138053) (streamobj138035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138059) (streamobj138035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY138065) (streamobj138035* s);
struct  streamobj138035  {
  TNimObject Sup;
TY138036 Closeimpl;
TY138040 Atendimpl;
TY138044 Setpositionimpl;
TY138049 Getpositionimpl;
TY138053 Readdataimpl;
TY138059 Writedataimpl;
TY138065 Flushimpl;
};
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NOCONV(void*, alloc_6001)(NI size);
N_NIMCALL(void, fillbuffer_270102)(baselexer270024* l);
N_NIMCALL(NI, readdata_138182)(streamobj138035* s, void* buffer, NI buflen);
N_NOCONV(void*, realloc_6033)(void* p, NI newsize);
N_NIMCALL(void, skiputf8bom_271419)(baselexer270024* l);
N_NOCONV(void, dealloc_6048)(void* p);
N_NIMCALL(void, close_138093)(streamobj138035* s);
extern TNimType NTI3411; /* RootObj */
TNimType NTI270024; /* BaseLexer */
extern TNimType NTI108; /* int */
extern TNimType NTI151; /* cstring */
extern TNimType NTI138033; /* Stream */
extern TNimType NTI138; /* bool */

N_NIMCALL(void, fillbuffer_270102)(baselexer270024* l) {
	NI charsread;
	NI tocopy;
	NI s;
	NI oldbuflen;
	NI LOC5;
	charsread = 0;
	tocopy = 0;
	s = 0;
	oldbuflen = 0;
	tocopy = (NI32)((NI32)((*l).Buflen - (*l).Sentinel) - 1);
	{
		if (!(0 < tocopy)) goto LA3;
		memmove(((void*) ((*l).Buf)), ((void*) ((&(*l).Buf[(NI32)((*l).Sentinel + 1)]))), (NI32)(tocopy * 1));
	}
	LA3: ;
	LOC5 = 0;
	LOC5 = readdata_138182((*l).Input, ((void*) ((&(*l).Buf[tocopy]))), (NI32)((NI32)((*l).Sentinel + 1) * 1));
	charsread = (NI32)(LOC5 / 1);
	s = (NI32)(tocopy + charsread);
	{
		if (!(charsread < (NI32)((*l).Sentinel + 1))) goto LA8;
		(*l).Buf[s] = 0;
		(*l).Sentinel = s;
	}
	goto LA6;
	LA8: ;
	{
		s -= 1;
		{
			while (1) {
				{
					while (1) {
						NIM_BOOL LOC15;
						LOC15 = 0;
						LOC15 = (0 <= s);
						if (!(LOC15)) goto LA16;
						LOC15 = !((((NU8)((*l).Buf[s])) == ((NU8)(13)) || ((NU8)((*l).Buf[s])) == ((NU8)(10))));
						LA16: ;
						if (!LOC15) goto LA14;
						s -= 1;
					} LA14: ;
				}
				{
					if (!(0 <= s)) goto LA19;
					(*l).Sentinel = s;
					goto LA11;
				}
				goto LA17;
				LA19: ;
				{
					void* LOC22;
					NI LOC23;
					oldbuflen = (*l).Buflen;
					(*l).Buflen = (NI32)((*l).Buflen * 2);
					LOC22 = 0;
					LOC22 = realloc_6033(((void*) ((*l).Buf)), (NI32)((*l).Buflen * 1));
					(*l).Buf = ((NCSTRING) (LOC22));
					LOC23 = 0;
					LOC23 = readdata_138182((*l).Input, ((void*) ((&(*l).Buf[oldbuflen]))), (NI32)(oldbuflen * 1));
					charsread = (NI32)(LOC23 / 1);
					{
						if (!(charsread < oldbuflen)) goto LA26;
						(*l).Buf[(NI32)(oldbuflen + charsread)] = 0;
						(*l).Sentinel = (NI32)(oldbuflen + charsread);
						goto LA11;
					}
					LA26: ;
					s = (NI32)((*l).Buflen - 1);
				}
				LA17: ;
			}
		} LA11: ;
	}
	LA6: ;
}

N_NIMCALL(void, skiputf8bom_271419)(baselexer270024* l) {
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)((*l).Buf[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)((*l).Buf[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)((*l).Buf[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		(*l).Bufpos += 3;
		(*l).Linestart += 3;
	}
	LA7: ;
}

N_NIMCALL(void, open_270040)(baselexer270024* l, streamobj138035* input, NI buflen) {
	void* LOC1;
	unsureAsgnRef((void**) (&(*l).Input), input);
	(*l).Bufpos = 0;
	(*l).Buflen = buflen;
	LOC1 = 0;
	LOC1 = alloc_6001((NI32)(buflen * 1));
	(*l).Buf = ((NCSTRING) (LOC1));
	(*l).Sentinel = (NI32)(buflen - 1);
	(*l).Linestart = 0;
	(*l).Linenumber = 1;
	fillbuffer_270102(l);
	skiputf8bom_271419(l);
}

N_NIMCALL(void, close_270050)(baselexer270024* l) {
	dealloc_6048(((void*) ((*l).Buf)));
	close_138093((*l).Input);
}
NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_lexbaseDatInit)(void) {
static TNimNode* TMP2725[8];
static TNimNode TMP857[9];
NTI270024.size = sizeof(baselexer270024);
NTI270024.kind = 17;
NTI270024.base = (&NTI3411);
TMP2725[0] = &TMP857[1];
TMP857[1].kind = 1;
TMP857[1].offset = offsetof(baselexer270024, Bufpos);
TMP857[1].typ = (&NTI108);
TMP857[1].name = "bufpos";
TMP2725[1] = &TMP857[2];
TMP857[2].kind = 1;
TMP857[2].offset = offsetof(baselexer270024, Buf);
TMP857[2].typ = (&NTI151);
TMP857[2].name = "buf";
TMP2725[2] = &TMP857[3];
TMP857[3].kind = 1;
TMP857[3].offset = offsetof(baselexer270024, Buflen);
TMP857[3].typ = (&NTI108);
TMP857[3].name = "bufLen";
TMP2725[3] = &TMP857[4];
TMP857[4].kind = 1;
TMP857[4].offset = offsetof(baselexer270024, Input);
TMP857[4].typ = (&NTI138033);
TMP857[4].name = "input";
TMP2725[4] = &TMP857[5];
TMP857[5].kind = 1;
TMP857[5].offset = offsetof(baselexer270024, Linenumber);
TMP857[5].typ = (&NTI108);
TMP857[5].name = "lineNumber";
TMP2725[5] = &TMP857[6];
TMP857[6].kind = 1;
TMP857[6].offset = offsetof(baselexer270024, Sentinel);
TMP857[6].typ = (&NTI108);
TMP857[6].name = "sentinel";
TMP2725[6] = &TMP857[7];
TMP857[7].kind = 1;
TMP857[7].offset = offsetof(baselexer270024, Linestart);
TMP857[7].typ = (&NTI108);
TMP857[7].name = "lineStart";
TMP2725[7] = &TMP857[8];
TMP857[8].kind = 1;
TMP857[8].offset = offsetof(baselexer270024, Fileopened);
TMP857[8].typ = (&NTI138);
TMP857[8].name = "fileOpened";
TMP857[0].len = 8; TMP857[0].kind = 2; TMP857[0].sons = &TMP2725[0];
NTI270024.node = &TMP857[0];
}

