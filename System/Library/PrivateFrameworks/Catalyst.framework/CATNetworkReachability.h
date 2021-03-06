/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATNetworkReachabilityDelegate;
#import <Catalyst/Catalyst-Structs.h>
@class CATAddress;

@interface CATNetworkReachability : NSObject {

	SCNetworkReachabilityRef mReachabilityRef;
	unsigned _flags;
	CATAddress* _address;
	id<CATNetworkReachabilityDelegate> _delegate;

}

@property (assign,nonatomic) unsigned flags;                                                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) CATAddress * address;                                          //@synthesize address=_address - In the implementation block
@property (assign,nonatomic,__weak) id<CATNetworkReachabilityDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isReachable,nonatomic,readonly) BOOL reachable; 
+(id)reachabilityForInternetConnection;
+(BOOL)isReachableForLocalWiFiWithFlags:(unsigned)arg1 ;
+(BOOL)isReachableForNetworkWithFlags:(unsigned)arg1 ;
+(id)keyPathsForValuesAffectingReachable;
+(id)reachabilityWithAddress:(id)arg1 ;
+(id)reachabilityForLocalWiFi;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(unsigned)flags;
-(void)setFlags:(unsigned)arg1 ;
-(CATAddress *)address;
-(id)initWithAddress:(id)arg1 ;
-(void)configureCallback;
-(void)reachabilityDidChangeWithFlags:(unsigned)arg1 ;
-(void)delegateDidChange;
-(BOOL)isReachable;
-(void)dealloc;
-(id)debugDescription;
-(void)setDelegate:(id<CATNetworkReachabilityDelegate>)arg1 ;
-(id<CATNetworkReachabilityDelegate>)delegate;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
@end

