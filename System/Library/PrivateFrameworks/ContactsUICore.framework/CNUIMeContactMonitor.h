/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNMeContactComparisonStrategy, CNReaderWriterScheduler, CNCancelable;
@class CNContactStore, NSNotificationCenter, NSArray;

@interface CNUIMeContactMonitor : NSObject {

	id<CNMeContactComparisonStrategy> _strategy;
	CNContactStore* _contactStore;
	NSNotificationCenter* _notificationCenter;
	id<CNReaderWriterScheduler> _lock;
	id<CNCancelable> _meNotificationToken;

}

@property (nonatomic,retain) id<CNMeContactComparisonStrategy> strategy;              //@synthesize strategy=_strategy - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                           //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;               //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) id<CNReaderWriterScheduler> lock;                        //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) id<CNCancelable> meNotificationToken;                    //@synthesize meNotificationToken=_meNotificationToken - In the implementation block
@property (nonatomic,readonly) NSArray * meContactIdentifiers; 
+(id)makeMeContactMonitor;
+(id)makeUnifiedMeContactMonitor;
+(id)meContactMonitor;
+(id)unifiedMeContactMonitor;
-(id)initWithComparisonStrategy:(id)arg1 ;
-(id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 ;
-(id)initWithComparisonStrategy:(id)arg1 contactStore:(id)arg2 notificationCenter:(id)arg3 schedulerProvider:(id)arg4 ;
-(void)meChanged:(id)arg1 ;
-(NSArray *)meContactIdentifiers;
-(id<CNCancelable>)meNotificationToken;
-(void)setMeNotificationToken:(id<CNCancelable>)arg1 ;
-(BOOL)isMeContact:(id)arg1 ;
-(void)setStrategy:(id<CNMeContactComparisonStrategy>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setLock:(id<CNReaderWriterScheduler>)arg1 ;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(void)startMonitoring;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(id<CNMeContactComparisonStrategy>)strategy;
-(id)initWithContactStore:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<CNReaderWriterScheduler>)lock;
@end

