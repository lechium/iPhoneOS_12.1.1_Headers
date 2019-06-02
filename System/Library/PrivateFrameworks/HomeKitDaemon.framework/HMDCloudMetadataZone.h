/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCloudZone.h>

@class HMDCloudRecord;

@interface HMDCloudMetadataZone : HMDCloudZone {

	HMDCloudRecord* _metadataRecord;

}

@property (nonatomic,retain) HMDCloudRecord * metadataRecord;              //@synthesize metadataRecord=_metadataRecord - In the implementation block
+(id)zoneRootRecordName;
+(id)zoneSubscriptionName:(id)arg1 ;
+(void)createMetadataZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)setServerChangeToken:(id)arg1 ;
-(HMDCloudRecord *)metadataRecord;
-(void)setMetadataRecord:(HMDCloudRecord *)arg1 ;
@end

