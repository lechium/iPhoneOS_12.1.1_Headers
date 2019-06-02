/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cards/CRInvocationChain.h>
#import <libobjc.A.dylib/CRInvocationChainDelegate.h>

@class Protocol, NSString;

@interface CRProtocolRestrictedInvocationChain : CRInvocationChain <CRInvocationChainDelegate> {

	Protocol* _restrictingProtocol;

}

@property (assign,nonatomic,__weak) id<CRInvocationChainDelegate> delegate; 
@property (nonatomic,retain) Protocol * restrictingProtocol;                             //@synthesize restrictingProtocol=_restrictingProtocol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)invocationChain:(id)arg1 shouldForwardInvocation:(id)arg2 toTarget:(id)arg3 ;
-(BOOL)isEligibleForSelector:(SEL)arg1 ;
-(BOOL)_selectorIsPartOfRestrictingProtocol:(SEL)arg1 ;
-(BOOL)_selector:(SEL)arg1 isPartOfProtocol:(id)arg2 ;
-(Protocol *)restrictingProtocol;
-(void)setRestrictingProtocol:(Protocol *)arg1 ;
-(id)init;
-(BOOL)conformsToProtocol:(id)arg1 ;
@end

