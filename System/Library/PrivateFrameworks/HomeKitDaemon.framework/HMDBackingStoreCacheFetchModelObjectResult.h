/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class CKRecord, HMDBackingStoreModelObject;

@interface HMDBackingStoreCacheFetchModelObjectResult : HMFObject {

	CKRecord* _record;
	HMDBackingStoreModelObject* _object;

}

@property (nonatomic,readonly) CKRecord * record;                                //@synthesize record=_record - In the implementation block
@property (nonatomic,readonly) HMDBackingStoreModelObject * object;              //@synthesize object=_object - In the implementation block
-(CKRecord *)record;
-(id)initWithRecord:(id)arg1 data:(id)arg2 encoding:(unsigned long long)arg3 error:(id*)arg4 ;
-(HMDBackingStoreModelObject *)object;
@end

