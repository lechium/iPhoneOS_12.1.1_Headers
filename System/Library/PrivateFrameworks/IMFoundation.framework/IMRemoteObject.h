/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMRemoteObject : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) int pid; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) BOOL isValid; 
+(void)_registerIMRemoteObject:(id)arg1 ;
+(void)_unregisterIMRemoteObject:(id)arg1 ;
+(id)_remoteObjects;
+(void)initialize;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setPid:(int)arg1 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 ;
-(void)_portDidBecomeInvalid;
-(void)_systemShutdown:(id)arg1 ;
-(id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4 forceSecureCoding:(BOOL)arg5 ;
-(void)_cleanupMachBitsCanPost:(BOOL)arg1 ;
-(unsigned long long)forwardXPCObject:(id)arg1 messageContext:(id)arg2 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 ;
-(id)initWithPortName:(id)arg1 protocol:(id)arg2 ;
-(void)setPortName:(NSString *)arg1 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 forceSecureCoding:(BOOL)arg4 ;
-(int)pid;
-(NSString *)portName;
-(void)dealloc;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)invalidate;
-(id)_queue;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)isValid;
-(NSObject*<OS_xpc_object>)connection;
-(NSString *)processName;
@end

