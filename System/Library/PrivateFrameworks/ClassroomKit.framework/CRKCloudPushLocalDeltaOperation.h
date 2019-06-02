/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudEncapsulatedOperation.h>

@class CRKCloudLocalDelta;

@interface CRKCloudPushLocalDeltaOperation : CRKCloudEncapsulatedOperation {

	CRKCloudLocalDelta* _delta;

}

@property (nonatomic,readonly) CRKCloudLocalDelta * delta;              //@synthesize delta=_delta - In the implementation block
-(id)initWithOperationQueue:(id)arg1 database:(id)arg2 ;
-(void)pushWithUpsertedRecords:(id)arg1 deletedRecordIds:(id)arg2 ;
-(void)retryableModifyRecordsOperationDidFinish:(id)arg1 ;
-(id)initWithOperationQueue:(id)arg1 database:(id)arg2 delta:(id)arg3 ;
-(void)main;
-(CRKCloudLocalDelta *)delta;
@end
