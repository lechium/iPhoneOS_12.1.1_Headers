/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSDeveloperServiceProtocol.h>

@class VSPersistentContainer, VSRemoteNotifier, NSString;

@interface VSDeveloperIdentityProviderStore : NSObject <VSDeveloperServiceProtocol> {

	VSPersistentContainer* _persistentContainer;
	VSRemoteNotifier* _remoteNotifier;

}

@property (nonatomic,retain) VSPersistentContainer * persistentContainer;              //@synthesize persistentContainer=_persistentContainer - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                        //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateExistingDeveloperIdentityProvider:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDeveloperIdentityProviderWithUniqueID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setPersistentContainer:(VSPersistentContainer *)arg1 ;
-(void)fetchDeveloperIdentityProvidersWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_fetchRequest;
-(id)_developerIdentityProviderInContext:(id)arg1 ;
-(void)_noteDidChange;
-(void)_performBlock:(/*^block*/id)arg1 ;
-(VSPersistentContainer *)persistentContainer;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
-(id)init;
@end

