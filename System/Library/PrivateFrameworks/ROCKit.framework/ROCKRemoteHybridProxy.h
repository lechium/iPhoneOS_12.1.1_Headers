/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ROCKit.framework/ROCKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ROCKit/ROCKRemoteProxy.h>
#import <ROCKit/ROCKMemoizable.h>

@protocol ROCKMemoizable;
@class NSString;

@interface ROCKRemoteHybridProxy : ROCKRemoteProxy <ROCKMemoizable> {

	id<ROCKMemoizable> _memoizedInstance;

}

@property (nonatomic,retain) id<ROCKMemoizable> memoizedInstance;                                   //@synthesize memoizedInstance=_memoizedInstance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> memoizableSerializerQueue; 
+(id)remoteProxyWithSessionManager:(id)arg1 xpcDictionary:(id)arg2 ;
-(id)initWithSessionManager:(id)arg1 xpcDictionary:(id)arg2 ;
-(id<ROCKMemoizable>)memoizedInstance;
-(void)setMemoizedInstance:(id<ROCKMemoizable>)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
@end

