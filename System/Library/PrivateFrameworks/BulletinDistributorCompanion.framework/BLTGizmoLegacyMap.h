/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface BLTGizmoLegacyMap : NSObject {

	NSMutableDictionary* _phoneBulletinKeyMap;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)_addMapKey:(id)arg1 value:(id)arg2 bulletinKey:(id)arg3 version:(int)arg4 versionDictionary:(id)arg5 ;
-(void)mapBulletin:(id)arg1 bulletinMapProperty:(unsigned long long)arg2 ;
-(void)unmapBulletin:(id)arg1 ;
-(id)categoryIDForBulletinKey:(id)arg1 ;
-(id)init;
@end

