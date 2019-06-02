/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTPingSubscribing <NSObject>
@required
-(id)sectionIDs;
-(void)pingWithBulletin:(id)arg1 ack:(/*^block*/id)arg2;
-(void)pingWithBulletin:(id)arg1;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2 ack:(/*^block*/id)arg3;
-(void)pingWithRecordID:(id)arg1 forSectionID:(id)arg2;
-(id)subscriptionInfos;
-(void)pingSubscriberDidLoad;
-(id)sectionIDsForBulletins;

@end

