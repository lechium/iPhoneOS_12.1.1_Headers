/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy {

	Class _objectClass;
	MFWeakReferenceHolder* _weakRef;
	unsigned long long _hash;

}
+(id)weakProxyForObject:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(Class)class;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)self;
-(BOOL)isProxy;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(unsigned long long)hash;
-(Class)superclass;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
@end

