/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudOperation.h>
#import <libobjc.A.dylib/CRKCloudResetable.h>

@class CKRecordZoneID;

@interface CRKCloudFetchZoneOperation : CRKCloudOperation <CRKCloudResetable> {

	CKRecordZoneID* _zoneId;

}

@property (nonatomic,readonly) CKRecordZoneID * zoneId;              //@synthesize zoneId=_zoneId - In the implementation block
-(id)initWithDatabase:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 zoneId:(id)arg2 ;
-(id)resetOperation;
-(CKRecordZoneID *)zoneId;
-(void)main;
@end
