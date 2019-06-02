/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTGizmoClient <NSObject>
@required
-(void)removeBulletinWithPublisherBulletinID:(id)arg1 recordID:(id)arg2 sectionID:(id)arg3;
-(void)addBulletin:(id)arg1 playLightsAndSirens:(BOOL)arg2 updateType:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
-(void)cancelBulletinWithPublisherMatchID:(id)arg1 universalSectionID:(id)arg2 feed:(unsigned long long)arg3 transmissionDate:(id)arg4 receptionDate:(id)arg5;
-(void)addBulletinSummary:(id)arg1;
-(void)updateBulletinList:(id)arg1;

@end

