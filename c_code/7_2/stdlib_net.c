/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"

#include <netinet/in.h>

#include <sys/socket.h>

#include <string.h>

#include <netdb.h>

#include <errno.h>

#include <arpa/inet.h>

#include <setjmp.h>
typedef struct socketimpl543407 socketimpl543407;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct oserror3433 oserror3433;
typedef struct systemerror3429 systemerror3429;
typedef struct Exception Exception;
typedef struct TNimObject TNimObject;
typedef struct tcell45348 tcell45348;
typedef struct tcellseq45364 tcellseq45364;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45360 tcellset45360;
typedef struct tpagedesc45356 tpagedesc45356;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct timeouterror543415 timeouterror543415;
typedef struct TY546228 TY546228;
typedef struct TSafePoint TSafePoint;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
typedef NIM_CHAR TY543420[4001];
struct  socketimpl543407  {
int Fd;
NIM_BOOL Isbuffered;
union{
struct {TY543420 Buffer;
NI Currpos;
NI Buflen;
} S1;
} isbufferedU;
};
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
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  TNimObject  {
TNimType* m_type;
};
struct  Exception  {
  TNimObject Sup;
Exception* parent;
NCSTRING name;
NimStringDesc* message;
NimStringDesc* trace;
};
struct  systemerror3429  {
  Exception Sup;
};
struct  oserror3433  {
  systemerror3429 Sup;
NI32 Errorcode;
};
struct  tcell45348  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45364  {
NI Len;
NI Cap;
tcell45348** D;
};
struct  tcellset45360  {
NI Counter;
NI Max;
tpagedesc45356* Head;
tpagedesc45356** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45364 Zct;
tcellseq45364 Decstack;
tcellset45360 Cycleroots;
tcellseq45364 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
struct  timeouterror543415  {
  Exception Sup;
};
typedef int TY546230[1];
typedef struct {
N_NIMCALL_PTR(NIM_BOOL, ClPrc) (Exception* e, void* ClEnv);
void* ClEnv;
} TY15209;
struct  TSafePoint  {
TSafePoint* prev;
NI status;
jmp_buf context;
NIM_BOOL hasRaiseAction;
TY15209 raiseAction;
};
typedef NIM_CHAR TY105554[256];
typedef NI TY26820[8];
struct  tpagedesc45356  {
tpagedesc45356* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct TY546228 {
  TGenericSeq Sup;
  int data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, TMP4861)(void* p, NI op);
N_NIMCALL(int, newrawsocket_538804)(NU8 domain, NU8 typ, NU8 protocol);
N_NIMCALL(void, raiseoserror_114809)(NI32 errorcode);
N_NIMCALL(NI32, oslasterror_114841)(void);
N_NIMCALL(socketimpl543407*, newsocket_543739)(int fd, NIM_BOOL isbuff);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(int, toint_538629)(NU8 domain);
N_NIMCALL(NI16, htons_539817)(NI16 x);
N_NIMCALL(NI32, htonl_539807)(NI32 x);
N_NIMCALL(int, bindaddr_539014)(int socket, struct sockaddr* name, socklen_t namelen);
N_NIMCALL(struct addrinfo*, getaddrinfo_539208)(NimStringDesc* address, NU16 port, NU8 af, NU8 typ, NU8 prot);
N_NIMCALL(void, dealloc_539429)(struct addrinfo* ai);
N_NIMCALL(int, listen_539027)(int socket, int backlog);
N_NIMCALL(NI, send_547720)(socketimpl543407* socket, void* data, NI size);
N_NIMCALL(NIM_BOOL, isdisconnectionerror_543450)(NU8 flags, NI32 lasterror);
N_NIMCALL(void, socketerror_544001)(socketimpl543407* socket, NI err, NIM_BOOL async, NI32 lasterror);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45348*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45348* c);
N_NOINLINE(void, addzct_49217)(tcellseq45364* s, tcell45348* c);
N_NIMCALL(void, raiseException)(Exception* e, NCSTRING ename);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(void, acceptaddr_544815)(socketimpl543407* server, socketimpl543407** client, NimStringDesc** address, NU8 flags);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NimStringDesc*, setLengthStr)(NimStringDesc* s, NI newlen);
N_NIMCALL(NI, waitfor_546817)(socketimpl543407* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP4873)(void* p, NI op);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(NF, ntepochTime)(void);
N_NIMCALL(NI, select_546207)(socketimpl543407* readfd, NI timeout);
N_NIMCALL(NIM_BOOL, hasdatabuffered_546001)(socketimpl543407* s);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(NI, select_541728)(TY546228** readfds, NI timeout);
static N_INLINE(void, HEX2BHEX3D_102492)(NF* x_102498, NF y_102501);
N_NIMCALL(NI, recv_546424)(socketimpl543407* socket, void* data, NI size);
N_NIMCALL(NI, readintobuf_546240)(socketimpl543407* socket, NI32 flags);
N_NIMCALL(NI, peekchar_547449)(socketimpl543407* socket, NIM_CHAR* c);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
static N_INLINE(void, pushSafePoint)(TSafePoint* s);
static N_INLINE(void, popSafePoint)(void);
N_NIMCALL(void, close_538828)(int socket);
N_NIMCALL(void, reraiseException)(void);
TNimNode* NimDT_543407_isbuffered[3];
STRING_LITERAL(TMP4870, "Could not send all data.", 24);
STRING_LITERAL(TMP4872, "", 0);
STRING_LITERAL(TMP4874, "Call to \'", 9);
STRING_LITERAL(TMP4875, "\' timed out.", 12);
STRING_LITERAL(TMP4877, "readLine", 8);
STRING_LITERAL(TMP4878, "\015\012", 2);
TNimType NTI543407; /* SocketImpl */
extern TNimType NTI5811; /* cint */
extern TNimType NTI138; /* bool */
extern TNimType NTI147; /* char */
TNimType NTI543420; /* array[0..4000, char] */
extern TNimType NTI108; /* int */
TNimType NTI543409; /* Socket */
extern int osinvalidsocket_538460;
extern TNimType NTI114812; /* ref OSError */
extern TNimType NTI3433; /* OSError */
extern tgcheap47616 gch_47644;
extern TNimType NTI3427; /* Exception */
TNimType NTI543415; /* TimeoutError */
TNimType NTI547014; /* ref TimeoutError */
extern TNimType NTI546228; /* seq[SocketHandle] */
extern TSafePoint* exchandler_16643;
N_NIMCALL(void, TMP4861)(void* p, NI op) {
	socketimpl543407* a;
	NI LOC1;
	a = (socketimpl543407*)p;
	switch ((*a).Isbuffered) {
	case NIM_TRUE:
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 4001; LOC1++) {
	}
	break;
	case NIM_FALSE:
	break;
	} 
}

N_NIMCALL(socketimpl543407*, newsocket_543739)(int fd, NIM_BOOL isbuff) {
	socketimpl543407* result;
	result = 0;
	result = (socketimpl543407*) newObj((&NTI543409), sizeof(socketimpl543407));
	(*result).Fd = fd;
	(*result).Isbuffered = isbuff;
	{
		if (!isbuff) goto LA3;
		(*result).isbufferedU.S1.Currpos = 0;
	}
	LA3: ;
	return result;
}

N_NIMCALL(socketimpl543407*, newsocket_543838)(NU8 domain, NU8 typ, NU8 protocol, NIM_BOOL buffered) {
	socketimpl543407* result;
	int fd;
	result = 0;
	fd = newrawsocket_538804(domain, typ, protocol);
	{
		NI32 LOC5;
		if (!(fd == osinvalidsocket_538460)) goto LA3;
		LOC5 = 0;
		LOC5 = oslasterror_114841();
		raiseoserror_114809(LOC5);
	}
	LA3: ;
	result = newsocket_543739(fd, buffered);
	return result;
}

N_NIMCALL(void, bindaddr_544621)(socketimpl543407* socket, NU16 port, NimStringDesc* address) {
	{
		struct sockaddr_in name;
		if (!((address) && (address)->Sup.len == 0)) goto LA3;
		memset((void*)(&name), 0, sizeof(name));
		name.sin_family = toint_538629(((NU8) 2));
		name.sin_port = htons_539817(((NI16) (port)));
		name.sin_addr.s_addr = htonl_539807(INADDR_ANY);
		{
			int LOC7;
			NI32 LOC10;
			LOC7 = 0;
			LOC7 = bindaddr_539014((*socket).Fd, ((struct sockaddr*) ((&name))), ((socklen_t) (((NI)sizeof(struct sockaddr_in)))));
			if (!(LOC7 < ((NI32) 0))) goto LA8;
			LOC10 = 0;
			LOC10 = oslasterror_114841();
			raiseoserror_114809(LOC10);
		}
		LA8: ;
	}
	goto LA1;
	LA3: ;
	{
		struct addrinfo* ailist;
		ailist = getaddrinfo_539208(address, port, ((NU8) 2), ((NU8) 1), ((NU8) 6));
		{
			int LOC14;
			NI32 LOC17;
			LOC14 = 0;
			LOC14 = bindaddr_539014((*socket).Fd, (*ailist).ai_addr, (*ailist).ai_addrlen);
			if (!(LOC14 < ((NI32) 0))) goto LA15;
			dealloc_539429(ailist);
			LOC17 = 0;
			LOC17 = oslasterror_114841();
			raiseoserror_114809(LOC17);
		}
		LA15: ;
		dealloc_539429(ailist);
	}
	LA1: ;
}

N_NIMCALL(void, listen_544610)(socketimpl543407* socket, int backlog) {
	{
		int LOC3;
		NI32 LOC6;
		LOC3 = 0;
		LOC3 = listen_539027((*socket).Fd, backlog);
		if (!(LOC3 < ((NI32) 0))) goto LA4;
		LOC6 = 0;
		LOC6 = oslasterror_114841();
		raiseoserror_114809(LOC6);
	}
	LA4: ;
}

N_NIMCALL(NI, send_547720)(socketimpl543407* socket, void* data, NI size) {
	NI result;
	result = 0;
	result = send((*socket).Fd, data, size, MSG_NOSIGNAL);
	return result;
}

N_NIMCALL(NIM_BOOL, isdisconnectionerror_543450)(NU8 flags, NI32 lasterror) {
	NIM_BOOL result;
	NIM_BOOL LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = ((flags &(1<<((((NU8) 1))&7)))!=0);
	if (!(LOC1)) goto LA2;
	LOC1 = (lasterror == ((NI) (ECONNRESET)) || lasterror == ((NI) (EPIPE)) || lasterror == ((NI) (ENETRESET)));
	LA2: ;
	result = LOC1;
	return result;
}

N_NIMCALL(void, socketerror_544001)(socketimpl543407* socket, NI err, NIM_BOOL async, NI32 lasterror) {
{	{
		NIM_BOOL LOC3;
		NI32 laste;
		LOC3 = 0;
		LOC3 = (err == -1);
		if (!(LOC3)) goto LA4;
		LOC3 = NIM_TRUE;
		LA4: ;
		if (!LOC3) goto LA5;
		{
			if (!(((NI) (lasterror)) == -1)) goto LA9;
			laste = oslasterror_114841();
		}
		goto LA7;
		LA9: ;
		{
			laste = lasterror;
		}
		LA7: ;
		{
			if (!async) goto LA14;
			{
				NIM_BOOL LOC18;
				LOC18 = 0;
				LOC18 = (laste == EAGAIN);
				if (LOC18) goto LA19;
				LOC18 = (laste == EWOULDBLOCK);
				LA19: ;
				if (!LOC18) goto LA20;
				goto BeforeRet;
			}
			goto LA16;
			LA20: ;
			{
				raiseoserror_114809(laste);
			}
			LA16: ;
		}
		goto LA12;
		LA14: ;
		{
			raiseoserror_114809(laste);
		}
		LA12: ;
	}
	LA5: ;
	}BeforeRet: ;
}

static N_INLINE(tcell45348*, usrtocell_49246)(void* usr) {
	tcell45348* result;
	result = 0;
	result = ((tcell45348*) ((NI)((NU64)(((NI) (usr))) - (NU64)(((NI)sizeof(tcell45348))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45348* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45348* c;
	c = usrtocell_49246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	LA3: ;
}

N_NIMCALL(void, send_548208)(socketimpl543407* socket, NimStringDesc* data, NU8 flags) {
	NI sent;
{	sent = send_547720(socket, ((void*) (data->data)), data->Sup.len);
	{
		NI32 lasterror;
		if (!(sent < 0)) goto LA3;
		lasterror = oslasterror_114841();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_543450(flags, lasterror);
			if (!LOC7) goto LA8;
			goto BeforeRet;
		}
		LA8: ;
		socketerror_544001(socket, -1, NIM_FALSE, lasterror);
	}
	LA3: ;
	{
		oserror3433* e_548220;
		NimStringDesc* LOC14;
		if (!!((sent == data->Sup.len))) goto LA12;
		e_548220 = 0;
		e_548220 = (oserror3433*) newObj((&NTI114812), sizeof(oserror3433));
		(*e_548220).Sup.Sup.Sup.m_type = (&NTI3433);
		LOC14 = 0;
		LOC14 = (*e_548220).Sup.Sup.message; (*e_548220).Sup.Sup.message = copyStringRC1(((NimStringDesc*) &TMP4870));
		if (LOC14) nimGCunrefNoCycle(LOC14);
		raiseException((Exception*)e_548220, "OSError");
	}
	LA12: ;
	}BeforeRet: ;
}

N_NIMCALL(void, acceptaddr_544815)(socketimpl543407* server, socketimpl543407** client, NimStringDesc** address, NU8 flags) {
	struct sockaddr_in sockaddress;
	socklen_t addrlen;
	int sock;
	memset((void*)(&sockaddress), 0, sizeof(sockaddress));
	addrlen = ((socklen_t) (((NI)sizeof(struct sockaddr_in))));
	sock = accept((*server).Fd, ((struct sockaddr*) ((&sockaddress))), (&addrlen));
	{
		NI32 err;
		if (!(sock == osinvalidsocket_538460)) goto LA3;
		err = oslasterror_114841();
		{
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = isdisconnectionerror_543450(flags, err);
			if (!LOC7) goto LA8;
			acceptaddr_544815(server, client, address, flags);
		}
		LA8: ;
		raiseoserror_114809(err);
	}
	goto LA1;
	LA3: ;
	{
		NCSTRING LOC11;
		(*(*client)).Fd = sock;
		(*(*client)).Isbuffered = (*server).Isbuffered;
		LOC11 = 0;
		LOC11 = inet_ntoa(sockaddress.sin_addr);
		unsureAsgnRef((void**) (&(*address)), cstrToNimstr(LOC11));
	}
	LA1: ;
}

N_NIMCALL(void, accept_545401)(socketimpl543407* server, socketimpl543407** client, NU8 flags) {
	NimStringDesc* addrdummy;
	addrdummy = copyString(((NimStringDesc*) &TMP4872));
	acceptaddr_544815(server, client, (&addrdummy), flags);
}
N_NIMCALL(void, TMP4873)(void* p, NI op) {
	timeouterror543415* a;
	a = (timeouterror543415*)p;
	nimGCvisit((void*)(*a).Sup.parent, op);
	nimGCvisit((void*)(*a).Sup.message, op);
	nimGCvisit((void*)(*a).Sup.trace, op);
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI64)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45348* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45348* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU64)((*c).Refcount) < (NU64)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(NIM_BOOL, hasdatabuffered_546001)(socketimpl543407* s) {
	NIM_BOOL result;
	result = 0;
	result = NIM_FALSE;
	{
		NIM_BOOL LOC5;
		if (!(*s).Isbuffered) goto LA3;
		LOC5 = 0;
		LOC5 = (0 < (*s).isbufferedU.S1.Buflen);
		if (!(LOC5)) goto LA6;
		LOC5 = !(((*s).isbufferedU.S1.Currpos == (*s).isbufferedU.S1.Buflen));
		LA6: ;
		result = LOC5;
	}
	LA3: ;
	return result;
}

N_NIMCALL(NI, select_546207)(socketimpl543407* readfd, NI timeout) {
	NI result;
	TY546228* fds;
	TY546230 LOC6;
{	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = hasdatabuffered_546001(readfd);
		if (!LOC3) goto LA4;
		result = 1;
		goto BeforeRet;
	}
	LA4: ;
	fds = (TY546228*) newSeq((&NTI546228), 1);
	LOC6[0] = (*readfd).Fd;
	fds->data[0] = LOC6[0];
	result = select_541728((&fds), timeout);
	}BeforeRet: ;
	return result;
}

static N_INLINE(void, HEX2BHEX3D_102492)(NF* x_102498, NF y_102501) {
	(*x_102498) = ((NF)((*x_102498)) + (NF)(y_102501));
}

N_NIMCALL(NI, waitfor_546817)(socketimpl543407* socket, NF* waited, NI timeout, NI size, NimStringDesc* funcname) {
	NI result;
{	result = 0;
	result = 1;
	{
		if (!(size <= 0)) goto LA3;
	}
	LA3: ;
	{
		if (!(timeout == -1)) goto LA7;
		result = size;
		goto BeforeRet;
	}
	LA7: ;
	{
		NIM_BOOL LOC11;
		NIM_BOOL LOC12;
		LOC11 = 0;
		LOC12 = 0;
		LOC12 = (*socket).Isbuffered;
		if (!(LOC12)) goto LA13;
		LOC12 = !(((*socket).isbufferedU.S1.Buflen == 0));
		LA13: ;
		LOC11 = LOC12;
		if (!(LOC11)) goto LA14;
		LOC11 = !(((*socket).isbufferedU.S1.Buflen == (*socket).isbufferedU.S1.Currpos));
		LA14: ;
		if (!LOC11) goto LA15;
		result = (NI64)((*socket).isbufferedU.S1.Buflen - (*socket).isbufferedU.S1.Currpos);
		result = ((result <= size) ? result : size);
	}
	goto LA9;
	LA15: ;
	{
		NF starttime;
		NI selret;
		NF LOC33;
		{
			timeouterror543415* e_547013;
			NimStringDesc* LOC22;
			if (!((NI64)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))) < 1)) goto LA20;
			e_547013 = 0;
			e_547013 = (timeouterror543415*) newObj((&NTI547014), sizeof(timeouterror543415));
			(*e_547013).Sup.Sup.m_type = (&NTI543415);
			LOC22 = 0;
			LOC22 = rawNewString(funcname->Sup.len + 21);
appendString(LOC22, ((NimStringDesc*) &TMP4874));
appendString(LOC22, funcname);
appendString(LOC22, ((NimStringDesc*) &TMP4875));
			asgnRefNoCycle((void**) (&(*e_547013).Sup.message), LOC22);
			raiseException((Exception*)e_547013, "TimeoutError");
		}
		LA20: ;
		starttime = ntepochTime();
		selret = select_546207(socket, (NI64)(timeout - ((NI) (((NF)((*waited)) * (NF)(1.0000000000000000e+03))))));
		{
			NI32 LOC27;
			if (!(selret < 0)) goto LA25;
			LOC27 = 0;
			LOC27 = oslasterror_114841();
			raiseoserror_114809(LOC27);
		}
		LA25: ;
		{
			timeouterror543415* e_547207;
			NimStringDesc* LOC32;
			if (!!((selret == 1))) goto LA30;
			e_547207 = 0;
			e_547207 = (timeouterror543415*) newObj((&NTI547014), sizeof(timeouterror543415));
			(*e_547207).Sup.Sup.m_type = (&NTI543415);
			LOC32 = 0;
			LOC32 = rawNewString(funcname->Sup.len + 21);
appendString(LOC32, ((NimStringDesc*) &TMP4874));
appendString(LOC32, funcname);
appendString(LOC32, ((NimStringDesc*) &TMP4875));
			asgnRefNoCycle((void**) (&(*e_547207).Sup.message), LOC32);
			raiseException((Exception*)e_547207, "TimeoutError");
		}
		LA30: ;
		LOC33 = 0;
		LOC33 = ntepochTime();
		HEX2BHEX3D_102492(waited, ((NF)(LOC33) - (NF)(starttime)));
	}
	LA9: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, readintobuf_546240)(socketimpl543407* socket, NI32 flags) {
	NI result;
{	result = 0;
	result = 0;
	result = recv((*socket).Fd, ((void*) ((*socket).isbufferedU.S1.Buffer)), 4000, flags);
	{
		if (!(result <= 0)) goto LA3;
		(*socket).isbufferedU.S1.Buflen = 0;
		(*socket).isbufferedU.S1.Currpos = 0;
		goto BeforeRet;
	}
	LA3: ;
	(*socket).isbufferedU.S1.Buflen = result;
	(*socket).isbufferedU.S1.Currpos = 0;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, recv_546424)(socketimpl543407* socket, void* data, NI size) {
	NI result;
{	result = 0;
	{
		if (!(size == 0)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NI read;
		if (!(*socket).Isbuffered) goto LA7;
		{
			NI res;
			if (!((*socket).isbufferedU.S1.Buflen == 0)) goto LA11;
			res = readintobuf_546240(socket, ((NI32) 0));
			{
				if (!(res <= 0)) goto LA15;
				{
					if (!NIM_FALSE) goto LA19;
					result = 0;
					goto BeforeRet;
				}
				goto LA17;
				LA19: ;
				{
					result = res;
					goto BeforeRet;
				}
				LA17: ;
			}
			LA15: ;
		}
		LA11: ;
		read = 0;
		{
			while (1) {
				NI chunk;
				NCSTRING d;
				if (!(read < size)) goto LA23;
				{
					NI res;
					if (!((*socket).isbufferedU.S1.Buflen <= (*socket).isbufferedU.S1.Currpos)) goto LA26;
					res = readintobuf_546240(socket, ((NI32) 0));
					{
						if (!(res <= 0)) goto LA30;
						{
							if (!(0 < read)) goto LA34;
							result = read;
							goto BeforeRet;
						}
						goto LA32;
						LA34: ;
						{
							result = res;
							goto BeforeRet;
						}
						LA32: ;
					}
					LA30: ;
				}
				LA26: ;
				chunk = (((NI64)((*socket).isbufferedU.S1.Buflen - (*socket).isbufferedU.S1.Currpos) <= (NI64)(size - read)) ? (NI64)((*socket).isbufferedU.S1.Buflen - (*socket).isbufferedU.S1.Currpos) : (NI64)(size - read));
				d = ((NCSTRING) (data));
				memcpy(((void*) ((&d[read]))), ((void*) ((&(*socket).isbufferedU.S1.Buffer[((*socket).isbufferedU.S1.Currpos)- 0]))), chunk);
				read += chunk;
				(*socket).isbufferedU.S1.Currpos += chunk;
			} LA23: ;
		}
		result = read;
	}
	goto LA5;
	LA7: ;
	{
		result = recv((*socket).Fd, data, ((NI) (((int) (size)))), ((NI32) 0));
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NI, peekchar_547449)(socketimpl543407* socket, NIM_CHAR* c) {
	NI result;
	result = 0;
	{
		if (!(*socket).Isbuffered) goto LA3;
		result = 1;
		{
			NIM_BOOL LOC7;
			NI res;
			LOC7 = 0;
			LOC7 = ((*socket).isbufferedU.S1.Buflen == 0);
			if (LOC7) goto LA8;
			LOC7 = ((NI64)((*socket).isbufferedU.S1.Buflen - 1) < (*socket).isbufferedU.S1.Currpos);
			LA8: ;
			if (!LOC7) goto LA9;
			res = readintobuf_546240(socket, ((NI32) 0));
			{
				if (!(res <= 0)) goto LA13;
				result = res;
			}
			LA13: ;
		}
		LA9: ;
		(*c) = (*socket).isbufferedU.S1.Buffer[((*socket).isbufferedU.S1.Currpos)- 0];
	}
	goto LA1;
	LA3: ;
	{
		result = recv((*socket).Fd, ((void*) (c)), 1, MSG_PEEK);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, readline_547608)(socketimpl543407* socket, NimStringDesc** line, NI timeout, NU8 flags) {
	NF waited;
{	waited = 0.0;
	(*line) = setLengthStr((*line), 0);
	{
		while (1) {
			NIM_CHAR c;
			NI LOC3;
			NI n;
			c = 0;
			LOC3 = 0;
			LOC3 = waitfor_546817(socket, (&waited), timeout, 1, ((NimStringDesc*) &TMP4877));
			n = recv_546424(socket, ((void*) ((&c))), 1);
			{
				NI32 lasterror;
				if (!(n < 0)) goto LA6;
				lasterror = oslasterror_114841();
				{
					NIM_BOOL LOC10;
					LOC10 = 0;
					LOC10 = isdisconnectionerror_543450(flags, lasterror);
					if (!LOC10) goto LA11;
					(*line) = setLengthStr((*line), 0);
					goto BeforeRet;
				}
				LA11: ;
				socketerror_544001(socket, n, NIM_FALSE, lasterror);
			}
			goto LA4;
			LA6: ;
			{
				if (!(n == 0)) goto LA14;
				(*line) = setLengthStr((*line), 0);
				goto BeforeRet;
			}
			goto LA4;
			LA14: ;
			LA4: ;
			{
				NI LOC20;
				if (!((NU8)(c) == (NU8)(13))) goto LA18;
				LOC20 = 0;
				LOC20 = waitfor_546817(socket, (&waited), timeout, 1, ((NimStringDesc*) &TMP4877));
				n = peekchar_547449(socket, (&c));
				{
					NIM_BOOL LOC23;
					NI LOC27;
					LOC23 = 0;
					LOC23 = (0 < n);
					if (!(LOC23)) goto LA24;
					LOC23 = ((NU8)(c) == (NU8)(10));
					LA24: ;
					if (!LOC23) goto LA25;
					LOC27 = 0;
					LOC27 = recv_546424(socket, ((void*) ((&c))), 1);
				}
				goto LA21;
				LA25: ;
				{
					NI32 lasterror;
					if (!(n <= 0)) goto LA29;
					lasterror = oslasterror_114841();
					{
						NIM_BOOL LOC33;
						LOC33 = 0;
						LOC33 = isdisconnectionerror_543450(flags, lasterror);
						if (!LOC33) goto LA34;
						(*line) = setLengthStr((*line), 0);
						goto BeforeRet;
					}
					LA34: ;
					socketerror_544001(socket, n, NIM_FALSE, lasterror);
				}
				goto LA21;
				LA29: ;
				LA21: ;
				{
					if (!((*line)->Sup.len == 0)) goto LA38;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP4878));
				}
				LA38: ;
				goto BeforeRet;
			}
			goto LA16;
			LA18: ;
			{
				if (!((NU8)(c) == (NU8)(10))) goto LA41;
				{
					if (!((*line)->Sup.len == 0)) goto LA45;
					(*line) = resizeString((*line), 2);
appendString((*line), ((NimStringDesc*) &TMP4878));
				}
				LA45: ;
				goto BeforeRet;
			}
			goto LA16;
			LA41: ;
			LA16: ;
			(*line) = addChar((*line), c);
		}
	}
	}BeforeRet: ;
}

static N_INLINE(void, pushSafePoint)(TSafePoint* s) {
	(*s).hasRaiseAction = NIM_FALSE;
	(*s).prev = exchandler_16643;
	exchandler_16643 = s;
}

static N_INLINE(void, popSafePoint)(void) {
	exchandler_16643 = (*exchandler_16643).prev;
}

N_NIMCALL(void, close_545417)(socketimpl543407* socket) {
	TSafePoint TMP4879;
	pushSafePoint(&TMP4879);
	TMP4879.status = _setjmp(TMP4879.context);
	if (TMP4879.status == 0) {
		popSafePoint();
	}
	else {
		popSafePoint();
	}
	{
		close_538828((*socket).Fd);
	}
	if (TMP4879.status != 0) reraiseException();
}
NIM_EXTERNC N_NOINLINE(void, stdlib_netInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_netDatInit)(void) {
static TNimNode* TMP4859[2];
static TNimNode* TMP4860[3];
static TNimNode TMP988[9];
NTI543407.size = sizeof(socketimpl543407);
NTI543407.kind = 18;
NTI543407.base = 0;
NTI543407.flags = 3;
TMP4859[0] = &TMP988[1];
TMP988[1].kind = 1;
TMP988[1].offset = offsetof(socketimpl543407, Fd);
TMP988[1].typ = (&NTI5811);
TMP988[1].name = "fd";
TMP4859[1] = &TMP988[2];
TMP988[2].kind = 3;
TMP988[2].offset = offsetof(socketimpl543407, Isbuffered);
TMP988[2].typ = (&NTI138);
TMP988[2].name = "isBuffered";
TMP988[2].sons = &NimDT_543407_isbuffered[0];
TMP988[2].len = 2;
TMP4860[0] = &TMP988[4];
NTI543420.size = sizeof(TY543420);
NTI543420.kind = 16;
NTI543420.base = (&NTI147);
NTI543420.flags = 3;
TMP988[4].kind = 1;
TMP988[4].offset = offsetof(socketimpl543407, isbufferedU.S1.Buffer);
TMP988[4].typ = (&NTI543420);
TMP988[4].name = "buffer";
TMP4860[1] = &TMP988[5];
TMP988[5].kind = 1;
TMP988[5].offset = offsetof(socketimpl543407, isbufferedU.S1.Currpos);
TMP988[5].typ = (&NTI108);
TMP988[5].name = "currPos";
TMP4860[2] = &TMP988[6];
TMP988[6].kind = 1;
TMP988[6].offset = offsetof(socketimpl543407, isbufferedU.S1.Buflen);
TMP988[6].typ = (&NTI108);
TMP988[6].name = "bufLen";
TMP988[3].len = 3; TMP988[3].kind = 2; TMP988[3].sons = &TMP4860[0];
NimDT_543407_isbuffered[1] = &TMP988[3];
TMP988[7].len = 0; TMP988[7].kind = 2;
NimDT_543407_isbuffered[0] = &TMP988[7];
TMP988[0].len = 2; TMP988[0].kind = 2; TMP988[0].sons = &TMP4859[0];
NTI543407.node = &TMP988[0];
NTI543409.size = sizeof(socketimpl543407*);
NTI543409.kind = 22;
NTI543409.base = (&NTI543407);
NTI543409.flags = 2;
NTI543409.marker = TMP4861;
NTI543415.size = sizeof(timeouterror543415);
NTI543415.kind = 17;
NTI543415.base = (&NTI3427);
TMP988[8].len = 0; TMP988[8].kind = 2;
NTI543415.node = &TMP988[8];
NTI547014.size = sizeof(timeouterror543415*);
NTI547014.kind = 22;
NTI547014.base = (&NTI543415);
NTI547014.marker = TMP4873;
}

