/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DAAccountLoader : NSObject {

	NSMutableDictionary* _acAccountTypeToAccountFrameworkSubpath;
	NSMutableDictionary* _acAccountTypeToAccountDaemonBundleSubpath;
	NSMutableDictionary* _acAccountTypeToClassNames;
	NSMutableDictionary* _acParentAccountTypeToChildAccountTypes;

}

@property (nonatomic,retain) NSMutableDictionary * acAccountTypeToAccountFrameworkSubpath;                 //@synthesize acAccountTypeToAccountFrameworkSubpath=_acAccountTypeToAccountFrameworkSubpath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * acAccountTypeToAccountDaemonBundleSubpath;              //@synthesize acAccountTypeToAccountDaemonBundleSubpath=_acAccountTypeToAccountDaemonBundleSubpath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * acAccountTypeToClassNames;                              //@synthesize acAccountTypeToClassNames=_acAccountTypeToClassNames - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * acParentAccountTypeToChildAccountTypes;                 //@synthesize acParentAccountTypeToChildAccountTypes=_acParentAccountTypeToChildAccountTypes - In the implementation block
+(id)sharedInstance;
-(Class)daemonAppropriateAccountClassForACAccount:(id)arg1 ;
-(void)setAcAccountTypeToAccountFrameworkSubpath:(NSMutableDictionary *)arg1 ;
-(void)setAcAccountTypeToAccountDaemonBundleSubpath:(NSMutableDictionary *)arg1 ;
-(void)setAcAccountTypeToClassNames:(NSMutableDictionary *)arg1 ;
-(void)setAcParentAccountTypeToChildAccountTypes:(NSMutableDictionary *)arg1 ;
-(void)_addAccountInfo:(id)arg1 forFrameworkNamed:(id)arg2 ;
-(BOOL)_loadFrameworkAtSubpath:(id)arg1 ;
-(void)loadFrameworkForACAccountType:(id)arg1 ;
-(void)loadDaemonBundleForACAccountType:(id)arg1 ;
-(Class)daemonAccountClassForACAccount:(id)arg1 ;
-(Class)clientAccountClassForACAccount:(id)arg1 ;
-(Class)accountClassForACAccount:(id)arg1 ;
-(Class)agentClassForACAccount:(id)arg1 ;
-(NSMutableDictionary *)acAccountTypeToAccountFrameworkSubpath;
-(NSMutableDictionary *)acAccountTypeToAccountDaemonBundleSubpath;
-(NSMutableDictionary *)acAccountTypeToClassNames;
-(NSMutableDictionary *)acParentAccountTypeToChildAccountTypes;
-(id)init;
@end

