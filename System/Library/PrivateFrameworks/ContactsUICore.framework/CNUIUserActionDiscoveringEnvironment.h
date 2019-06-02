/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionDiscoveringEnvironment.h>
@class CNUIIDSContactPropertyResolver, CNContactStore;


@protocol CNUIUserActionDiscoveringEnvironment <NSObject>
@property (nonatomic,readonly) id<CNLSApplicationWorkspace> applicationWorkspace; 
@property (nonatomic,readonly) id<CNTUCallProviderManager> callProviderManager; 
@property (nonatomic,readonly) CNUIIDSContactPropertyResolver * idsContactPropertyResolver; 
@property (nonatomic,readonly) id<CNMCProfileConnection> profileConnection; 
@property (nonatomic,readonly) id<CNCapabilities> capabilities; 
@property (nonatomic,readonly) CNContactStore * contactStore; 
@property (nonatomic,readonly) id<CNSchedulerProvider> schedulerProvider; 
@property (nonatomic,readonly) id<CNSchedulerProvider> highLatencySchedulerProvider; 
@property (nonatomic,readonly) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher; 
@required
-(id<CNTUCallProviderManager>)callProviderManager;
-(CNUIIDSContactPropertyResolver *)idsContactPropertyResolver;
-(id<CNSchedulerProvider>)highLatencySchedulerProvider;
-(id)copyWithContactStore:(id)arg1;
-(id<CNSchedulerProvider>)schedulerProvider;
-(id<CNUIDefaultUserActionFetcher>)defaultUserActionFetcher;
-(id<CNMCProfileConnection>)profileConnection;
-(CNContactStore *)contactStore;
-(id<CNCapabilities>)capabilities;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;

@end


@protocol CNLSApplicationWorkspace, CNTUCallProviderManager, CNMCProfileConnection, CNCapabilities, CNSchedulerProvider, CNUIDefaultUserActionFetcher;
@class CNUIIDSContactPropertyResolver, CNContactStore, NSString;

@interface CNUIUserActionDiscoveringEnvironment : NSObject <CNUIUserActionDiscoveringEnvironment> {

	id<CNLSApplicationWorkspace> _applicationWorkspace;
	id<CNTUCallProviderManager> _callProviderManager;
	CNUIIDSContactPropertyResolver* _idsContactPropertyResolver;
	id<CNMCProfileConnection> _profileConnection;
	id<CNCapabilities> _capabilities;
	CNContactStore* _contactStore;
	id<CNSchedulerProvider> _schedulerProvider;
	id<CNSchedulerProvider> _highLatencySchedulerProvider;
	id<CNUIDefaultUserActionFetcher> _defaultUserActionFetcher;

}

@property (nonatomic,retain) id<CNLSApplicationWorkspace> applicationWorkspace;                        //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (nonatomic,retain) id<CNTUCallProviderManager> callProviderManager;                          //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,retain) CNUIIDSContactPropertyResolver * idsContactPropertyResolver;              //@synthesize idsContactPropertyResolver=_idsContactPropertyResolver - In the implementation block
@property (nonatomic,retain) id<CNMCProfileConnection> profileConnection;                              //@synthesize profileConnection=_profileConnection - In the implementation block
@property (nonatomic,retain) id<CNCapabilities> capabilities;                                          //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> schedulerProvider;                                //@synthesize schedulerProvider=_schedulerProvider - In the implementation block
@property (nonatomic,retain) id<CNSchedulerProvider> highLatencySchedulerProvider;                     //@synthesize highLatencySchedulerProvider=_highLatencySchedulerProvider - In the implementation block
@property (nonatomic,retain) id<CNUIDefaultUserActionFetcher> defaultUserActionFetcher;                //@synthesize defaultUserActionFetcher=_defaultUserActionFetcher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNTUCallProviderManager>)callProviderManager;
-(void)setCallProviderManager:(id<CNTUCallProviderManager>)arg1 ;
-(CNUIIDSContactPropertyResolver *)idsContactPropertyResolver;
-(id<CNSchedulerProvider>)highLatencySchedulerProvider;
-(id)initWithApplicationWorkspace:(id)arg1 callProviderManager:(id)arg2 idsContactPropertyResolver:(id)arg3 profileConnection:(id)arg4 contactStore:(id)arg5 schedulerProvider:(id)arg6 highLatencySchedulerProvider:(id)arg7 capabilities:(id)arg8 defaultUserActionFetcher:(id)arg9 ;
-(id)copyWithContactStore:(id)arg1 ;
-(void)setIdsContactPropertyResolver:(CNUIIDSContactPropertyResolver *)arg1 ;
-(void)setHighLatencySchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(id<CNSchedulerProvider>)schedulerProvider;
-(void)setSchedulerProvider:(id<CNSchedulerProvider>)arg1 ;
-(id)nts_lazyContactStore;
-(id)initWithIDSAvailablilityProvider:(id)arg1 schedulerProvider:(id)arg2 capabilities:(id)arg3 defaultUserActionFetcher:(id)arg4 ;
-(id<CNUIDefaultUserActionFetcher>)defaultUserActionFetcher;
-(void)setDefaultUserActionFetcher:(id<CNUIDefaultUserActionFetcher>)arg1 ;
-(id<CNMCProfileConnection>)profileConnection;
-(void)setProfileConnection:(id<CNMCProfileConnection>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id<CNCapabilities>)capabilities;
-(void)setCapabilities:(id<CNCapabilities>)arg1 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(void)setApplicationWorkspace:(id<CNLSApplicationWorkspace>)arg1 ;
-(id)init;
@end

