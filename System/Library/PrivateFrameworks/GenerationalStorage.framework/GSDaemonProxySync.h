/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GenerationalStorage/GenerationalStorage-Structs.h>
#import <Foundation/NSProxy.h>
#import <libobjc.A.dylib/GSProtocol.h>

@protocol GSProtocol;
@class NSObject, NSError;

@interface GSDaemonProxySync : NSProxy <GSProtocol> {

	NSObject*<GSProtocol> _target;
	NSError* _error;
	id _result;

}

@property (nonatomic,retain) id result;                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)proxy;
-(void)handleObjResult:(id)arg1 error:(id)arg2 ;
-(void)handleBoolResult:(BOOL)arg1 error:(id)arg2 ;
-(CFErrorRef)copyCFError;
-(void)setResult:(id)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(void)finalize;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)result;
-(void)forwardInvocation:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
