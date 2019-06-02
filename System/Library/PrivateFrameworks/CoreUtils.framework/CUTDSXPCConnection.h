/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/CUTDSXPCDaemonInterface.h>

@protocol OS_dispatch_queue;
@class CUTDSProvider, CUTDSSeeker, CUTDSSession, CUTDSDaemon, NSObject, NSXPCConnection;

@interface CUTDSXPCConnection : NSObject <CUTDSXPCDaemonInterface> {

	CUTDSProvider* _activatedProvider;
	CUTDSSeeker* _activatedSeeker;
	CUTDSSession* _activatedSession;
	LogCategory* _ucat;
	BOOL _entitled;
	CUTDSDaemon* _daemon;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSXPCConnection* _xpcCnx;

}

@property (nonatomic,readonly) CUTDSDaemon * daemon;                                  //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,readonly) BOOL entitled;                                         //@synthesize entitled=_entitled - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * xpcCnx;                              //@synthesize xpcCnx=_xpcCnx - In the implementation block
-(CUTDSDaemon *)daemon;
-(NSXPCConnection *)xpcCnx;
-(void)xpcTDSProviderActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcTDSSeekerActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)xpcTDSSessionActivate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2 ;
-(BOOL)_entitledAndReturnError:(id*)arg1 ;
-(BOOL)entitled;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)connectionInvalidated;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

