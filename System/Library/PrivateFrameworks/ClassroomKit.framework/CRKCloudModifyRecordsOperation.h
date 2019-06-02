/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/CRKCloudOperation.h>
#import <libobjc.A.dylib/CRKCloudResetable.h>

@class NSSet;

@interface CRKCloudModifyRecordsOperation : CRKCloudOperation <CRKCloudResetable> {

	BOOL _atomic;
	NSSet* _recordsToSave;
	NSSet* _recordIdsToDelete;

}

@property (nonatomic,readonly) NSSet * recordsToSave;                    //@synthesize recordsToSave=_recordsToSave - In the implementation block
@property (nonatomic,readonly) NSSet * recordIdsToDelete;                //@synthesize recordIdsToDelete=_recordIdsToDelete - In the implementation block
@property (getter=isAtomic,nonatomic,readonly) BOOL atomic;              //@synthesize atomic=_atomic - In the implementation block
-(id)initWithDatabase:(id)arg1 ;
-(id)resetOperation;
-(BOOL)isAtomic;
-(id)initWithDatabase:(id)arg1 recordsToSave:(id)arg2 recordIdsToDelete:(id)arg3 isAtomic:(BOOL)arg4 ;
-(NSSet *)recordIdsToDelete;
-(NSSet *)recordsToSave;
-(void)main;
@end

