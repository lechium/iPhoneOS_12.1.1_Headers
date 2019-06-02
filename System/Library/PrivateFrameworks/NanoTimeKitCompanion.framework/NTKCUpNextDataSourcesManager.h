/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKCUpNextDataSourcesManagerIdentifiersDelegate, OS_dispatch_queue;
@class NSSet, NSObject;

@interface NTKCUpNextDataSourcesManager : NSObject {

	unsigned _watchVersion;
	NSSet* _firstPartyDataSourceIdentifiers;
	NSSet* _firstPartyDonatedApplicationIdentifiers;
	NSSet* _thirdPartyDataSourceIdentifiers;
	NSSet* _thirdPartyDonatedApplicationIdentifiers;
	NSSet* _sportsDataSourceIdentifiers;
	id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> _firstPartyIdentifiersDelegate;
	id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> _thirdPartyIdentifiersDelegate;
	id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> _sportsIdentifiersDelegate;
	NSObject*<OS_dispatch_queue> _fetchQueue;

}

@property (copy) NSSet * firstPartyDataSourceIdentifiers;                                                                           //@synthesize firstPartyDataSourceIdentifiers=_firstPartyDataSourceIdentifiers - In the implementation block
@property (copy) NSSet * thirdPartyDataSourceIdentifiers;                                                                           //@synthesize thirdPartyDataSourceIdentifiers=_thirdPartyDataSourceIdentifiers - In the implementation block
@property (copy) NSSet * firstPartyDonatedApplicationIdentifiers;                                                                   //@synthesize firstPartyDonatedApplicationIdentifiers=_firstPartyDonatedApplicationIdentifiers - In the implementation block
@property (copy) NSSet * thirdPartyDonatedApplicationIdentifiers;                                                                   //@synthesize thirdPartyDonatedApplicationIdentifiers=_thirdPartyDonatedApplicationIdentifiers - In the implementation block
@property (copy) NSSet * sportsDataSourceIdentifiers;                                                                               //@synthesize sportsDataSourceIdentifiers=_sportsDataSourceIdentifiers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> fetchQueue;                                                             //@synthesize fetchQueue=_fetchQueue - In the implementation block
@property (nonatomic,readonly) unsigned watchVersion;                                                                               //@synthesize watchVersion=_watchVersion - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> firstPartyIdentifiersDelegate;              //@synthesize firstPartyIdentifiersDelegate=_firstPartyIdentifiersDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> thirdPartyIdentifiersDelegate;              //@synthesize thirdPartyIdentifiersDelegate=_thirdPartyIdentifiersDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<NTKCUpNextDataSourcesManagerIdentifiersDelegate> sportsIdentifiersDelegate;                  //@synthesize sportsIdentifiersDelegate=_sportsIdentifiersDelegate - In the implementation block
-(NSObject*<OS_dispatch_queue>)fetchQueue;
-(void)_appsChangedNotification:(id)arg1 ;
-(void)_dataSourceChangedNotification:(id)arg1 ;
-(void)fetchIdentifiers;
-(void)_buildRows;
-(unsigned)watchVersion;
-(void)setFirstPartyDataSourceIdentifiers:(NSSet *)arg1 ;
-(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)firstPartyIdentifiersDelegate;
-(NSSet *)firstPartyDataSourceIdentifiers;
-(NSSet *)firstPartyDonatedApplicationIdentifiers;
-(id)_identifiersForThirdParyAppsThatSupportActivitesOrIntents;
-(void)setThirdPartyDonatedApplicationIdentifiers:(NSSet *)arg1 ;
-(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)thirdPartyIdentifiersDelegate;
-(NSSet *)thirdPartyDataSourceIdentifiers;
-(NSSet *)thirdPartyDonatedApplicationIdentifiers;
-(void)setSportsDataSourceIdentifiers:(NSSet *)arg1 ;
-(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)sportsIdentifiersDelegate;
-(NSSet *)sportsDataSourceIdentifiers;
-(id)initWatchVersion:(unsigned)arg1 ;
-(void)setFirstPartyDonatedApplicationIdentifiers:(NSSet *)arg1 ;
-(void)setThirdPartyDataSourceIdentifiers:(NSSet *)arg1 ;
-(void)setFirstPartyIdentifiersDelegate:(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)arg1 ;
-(void)setThirdPartyIdentifiersDelegate:(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)arg1 ;
-(void)setSportsIdentifiersDelegate:(id<NTKCUpNextDataSourcesManagerIdentifiersDelegate>)arg1 ;
-(void)dealloc;
@end

