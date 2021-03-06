/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:25 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievements.framework/ActivityAchievements
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActivityAchievements/ActivityAchievements-Structs.h>
@class HDDatabaseTransactionContext, HDProfile, NSCalendar, HDKeyValueDomain;

@interface ACHSyncingMonthlyChallengeTemplateCache : NSObject {

	os_unfair_lock_s _lock;
	HDDatabaseTransactionContext* _databaseContext;
	HDProfile* _profile;
	NSCalendar* _gregorianCalendar;
	HDKeyValueDomain* _keyValueDomain;

}

@property (nonatomic,retain) HDProfile * profile;                                                //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSCalendar * gregorianCalendar;                                     //@synthesize gregorianCalendar=_gregorianCalendar - In the implementation block
@property (nonatomic,retain) HDKeyValueDomain * keyValueDomain;                                  //@synthesize keyValueDomain=_keyValueDomain - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                              //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic,__weak) HDDatabaseTransactionContext * databaseContext;              //@synthesize databaseContext=_databaseContext - In the implementation block
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(HDProfile *)profile;
-(void)setProfile:(HDProfile *)arg1 ;
-(NSCalendar *)gregorianCalendar;
-(HDKeyValueDomain *)keyValueDomain;
-(HDDatabaseTransactionContext *)databaseContext;
-(BOOL)cacheTemplate:(id)arg1 error:(id*)arg2 ;
-(id)allCachedTemplatesWithError:(id*)arg1 ;
-(id)templateForDateComponents:(id)arg1 error:(id*)arg2 ;
-(void)setDatabaseContext:(HDDatabaseTransactionContext *)arg1 ;
-(void)setGregorianCalendar:(NSCalendar *)arg1 ;
-(void)setKeyValueDomain:(HDKeyValueDomain *)arg1 ;
-(os_unfair_lock_s)lock;
@end

