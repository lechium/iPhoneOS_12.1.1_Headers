/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/IDSGroupContextObserverDaemonProtocol.h>

@class NSMutableSet;

@interface IDSGroupContextNotifyingObserver : NSObject <IDSGroupContextObserverDaemonProtocol> {

	NSMutableSet* _delegates;

}

@property (nonatomic,retain) NSMutableSet * delegates;              //@synthesize delegates=_delegates - In the implementation block
-(void)didCreateGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didCacheGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)didReceiveRegistrationIdentityUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSMutableSet *)delegates;
-(void)setDelegates:(NSMutableSet *)arg1 ;
-(id)init;
-(void)dealloc;
@end

