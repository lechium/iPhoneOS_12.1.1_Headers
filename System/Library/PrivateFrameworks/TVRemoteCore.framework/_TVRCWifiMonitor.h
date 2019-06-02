/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface _TVRCWifiMonitor : NSObject {

	long long _state;
	NSHashTable* _observers;

}

@property (assign,nonatomic) long long state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;              //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(id)_networkStateStringForNetworkState:(long long)arg1 ;
-(void)wifiStateUpdatedWithOldState:(long long)arg1 andNewState:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)addObserver:(id)arg1 ;
@end
