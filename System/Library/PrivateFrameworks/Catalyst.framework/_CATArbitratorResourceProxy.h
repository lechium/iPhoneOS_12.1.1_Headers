/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/CATArbitratorProxy.h>

@class _CATArbitratorRegistrationEntry, NSString;

@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy> {

	id mResource;
	_CATArbitratorRegistrationEntry* mRegistration;
	BOOL _isExclusive;

}

@property (nonatomic,readonly) BOOL isExclusive;                    //@synthesize isExclusive=_isExclusive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithResource:(id)arg1 registration:(id)arg2 exclusive:(BOOL)arg3 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)invalidate;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(BOOL)isExclusive;
@end

