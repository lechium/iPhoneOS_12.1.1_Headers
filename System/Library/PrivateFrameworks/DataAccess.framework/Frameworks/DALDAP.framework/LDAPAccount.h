/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DALDAP.framework/DALDAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAccount.h>

@class NSMutableSet, NSMutableArray;

@interface LDAPAccount : DAAccount {

	NSMutableSet* _searchTaskSet;
	NSMutableArray* _mutableSearchSettings;

}

@property (nonatomic,retain) NSMutableSet * searchTaskSet;                        //@synthesize searchTaskSet=_searchTaskSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableSearchSettings;              //@synthesize mutableSearchSettings=_mutableSearchSettings - In the implementation block
-(id)connectionURL;
-(void)ingestBackingAccountInfoProperties;
-(BOOL)isLDAPAccount;
-(id)searchSettings;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(void)setSearchTaskSet:(NSMutableSet *)arg1 ;
-(NSMutableSet *)searchTaskSet;
-(void)setMutableSearchSettings:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mutableSearchSettings;
-(id)connectionURLWithSSL:(BOOL)arg1 ;
-(void)ldapSearchTask:(id)arg1 finishedWithError:(id)arg2 foundItems:(id)arg3 ;
-(void)ldapGetDefaultSearchBaseTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 defaultSearchBase:(id)arg4 ;
-(void)addSearchSettings:(id)arg1 ;
-(void)removeSearchSettings:(id)arg1 ;
-(BOOL)isEqualToAccount:(id)arg1 ;
@end
