/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:23 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/SFXPCInterface.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSXPCConnection;

@interface SFCoordinatedAlertRequest : NSObject <NSSecureCoding, SFXPCInterface> {

	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	BOOL _started;
	NSObject*<OS_dispatch_source> _timeoutTimer;
	NSXPCConnection* _xpcCnx;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _invalidationHandler;
	double _timeout;
	long long _type;

}

@property (nonatomic,copy) id completionHandler;                                      //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                    //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (assign,nonatomic) double timeout;                                          //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long type;                                          //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)_invalidated;
-(void)_ensureXPCStarted;
-(void)_interrupted;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)_timeoutFired;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)invalidate;
-(void)_invalidate;
-(void)start;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setInvalidationHandler:(id)arg1 ;
-(void)_start;
-(id)invalidationHandler;
@end

