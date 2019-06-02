/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/TestProbe.h>

@protocol OS_dispatch_source, ICMPPingProbeDelegate, OS_dispatch_semaphore;
@class NSObject, NSString, NSData, NSMutableArray;

@interface ICMPPingProbe : TestProbe {

	BOOL stopTestOnFirstSuccess;
	NSObject*<OS_dispatch_source> timeoutTimer;
	NSObject*<OS_dispatch_source> pingTimer;
	NSObject*<OS_dispatch_source> burstTimer;
	mach_timebase_info timebase_info;
	NSString* _hostName;
	NSData* _hostAddressData;
	CFHostRef _host;
	CFSocketRef _socket;
	unsigned short _identifier;
	unsigned short _nextSequenceNumber;
	BOOL _hostAddressIsIPv6;
	float _percentComplete;
	unsigned _interfaceIndex;
	id<ICMPPingProbeDelegate> _delegate;
	NSString* _ipAddress;
	NSMutableArray* _pings;
	unsigned long long _successCount;
	unsigned long long _failedCount;
	unsigned long long _pingCount;
	double _interPingInterval;
	unsigned long long _burstCount;
	double _interBurstInterval;
	unsigned long long _currentBurst;
	NSObject*<OS_dispatch_semaphore> _pingRunLoopReady;
	CFRunLoopRef _pingRunLoop;
	opaque_pthread_t* _pingThread;
	CFRunLoopSourceRef _rls;

}

@property (nonatomic,retain) NSMutableArray * pings;                                         //@synthesize pings=_pings - In the implementation block
@property (assign,nonatomic) unsigned long long successCount;                                //@synthesize successCount=_successCount - In the implementation block
@property (assign,nonatomic) unsigned long long failedCount;                                 //@synthesize failedCount=_failedCount - In the implementation block
@property (assign,nonatomic) float percentComplete;                                          //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) unsigned long long pingCount;                                   //@synthesize pingCount=_pingCount - In the implementation block
@property (assign,nonatomic) double interPingInterval;                                       //@synthesize interPingInterval=_interPingInterval - In the implementation block
@property (assign,nonatomic) unsigned long long burstCount;                                  //@synthesize burstCount=_burstCount - In the implementation block
@property (assign,nonatomic) double interBurstInterval;                                      //@synthesize interBurstInterval=_interBurstInterval - In the implementation block
@property (assign,nonatomic) unsigned long long currentBurst;                                //@synthesize currentBurst=_currentBurst - In the implementation block
@property (assign,nonatomic) BOOL hostAddressIsIPv6;                                         //@synthesize hostAddressIsIPv6=_hostAddressIsIPv6 - In the implementation block
@property (assign,nonatomic) unsigned interfaceIndex;                                        //@synthesize interfaceIndex=_interfaceIndex - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> pingRunLoopReady;              //@synthesize pingRunLoopReady=_pingRunLoopReady - In the implementation block
@property (assign,nonatomic) CFRunLoopRef pingRunLoop;                                       //@synthesize pingRunLoop=_pingRunLoop - In the implementation block
@property (assign,nonatomic) opaque_pthread_t* pingThread;                                   //@synthesize pingThread=_pingThread - In the implementation block
@property (assign,nonatomic) CFRunLoopSourceRef rls;                                         //@synthesize rls=_rls - In the implementation block
@property (nonatomic,retain) id<ICMPPingProbeDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSString * ipAddress;                                           //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,retain) NSString * hostName;                                            //@synthesize hostName=_hostName - In the implementation block
+(BOOL)loadStringUtils;
+(unsigned long long)icmpIPv4OffsetInPacket:(id)arg1 ;
+(void)initialize;
-(NSString *)hostName;
-(void)setInterfaceIndex:(unsigned)arg1 ;
-(unsigned)interfaceIndex;
-(void)readData;
-(NSString *)ipAddress;
-(void)setIpAddress:(NSString *)arg1 ;
-(void)cancelTest:(/*^block*/id)arg1 ;
-(void)stopTest;
-(void)setHostName:(NSString *)arg1 ;
-(void)setPingCount:(unsigned long long)arg1 ;
-(void)setInterPingInterval:(double)arg1 ;
-(void)setBurstCount:(unsigned long long)arg1 ;
-(void)setInterBurstInterval:(double)arg1 ;
-(BOOL)startRunLoop;
-(void)startThePinging;
-(NSMutableArray *)pings;
-(unsigned long long)successCount;
-(unsigned long long)pingCount;
-(unsigned long long)currentBurst;
-(unsigned long long)burstCount;
-(void)sendPingWithData:(id)arg1 ;
-(double)interBurstInterval;
-(double)interPingInterval;
-(void)stopDataTransfer;
-(void)stopRunLoop;
-(id)_shortErrorFromError:(id)arg1 ;
-(void)pingDidFailToSendToAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned)arg3 error:(id)arg4 ;
-(void)pingDidSendToAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned)arg3 ;
-(void)didFailWithError:(id)arg1 ;
-(BOOL)isValidIPv6PingResponsePacket:(id)arg1 isForMe:(BOOL*)arg2 sequence:(unsigned short*)arg3 isBadPacket:(BOOL*)arg4 ;
-(BOOL)isValidIPv4PingResponsePacket:(id)arg1 isForMe:(BOOL*)arg2 sequence:(unsigned short*)arg3 isBadPacket:(BOOL*)arg4 ;
-(void)pingDidReceivePingResponseFromAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned)arg3 ;
-(void)pingDidReceiveUnexpectedPingResponseFromAddress:(id)arg1 packet:(id)arg2 sequence:(unsigned)arg3 ;
-(void)sendPing;
-(void)setCurrentBurst:(unsigned long long)arg1 ;
-(void)startICMPPingTestTo:(id)arg1 hostName:(id)arg2 interface:(unsigned)arg3 pingCount:(long long)arg4 interPingInterval:(double)arg5 burstCount:(long long)arg6 interBurstInterval:(double)arg7 timeout:(double)arg8 stopTestOnFirstSuccess:(BOOL)arg9 ;
-(void)setPings:(NSMutableArray *)arg1 ;
-(void)setSuccessCount:(unsigned long long)arg1 ;
-(unsigned long long)failedCount;
-(void)setFailedCount:(unsigned long long)arg1 ;
-(BOOL)hostAddressIsIPv6;
-(void)setHostAddressIsIPv6:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)pingRunLoopReady;
-(void)setPingRunLoopReady:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(CFRunLoopRef)pingRunLoop;
-(void)setPingRunLoop:(CFRunLoopRef)arg1 ;
-(opaque_pthread_t*)pingThread;
-(void)setPingThread:(opaque_pthread_t*)arg1 ;
-(CFRunLoopSourceRef)rls;
-(void)setRls:(CFRunLoopSourceRef)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<ICMPPingProbeDelegate>)arg1 ;
-(id<ICMPPingProbeDelegate>)delegate;
-(float)percentComplete;
-(id)initWithQueue:(id)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
@end

