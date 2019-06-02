/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPCloudRecord.h>

@class CKRecord, NSString, NSDate;

@interface MSPEncryptedCloudRecord : NSObject <MSPCloudRecord> {

	BOOL _compressNewData;
	CKRecord* _record;

}

@property (nonatomic,readonly) CKRecord * record;                                 //@synthesize record=_record - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cloudRecordName; 
@property (nonatomic,readonly) NSDate * cloudRecordModificationDate; 
+(id)arrayOfCKRecordsFromArray:(id)arg1 ;
+(id)arrayOfEncryptedRecordsFromArray:(id)arg1 ;
-(CKRecord *)record;
-(NSString *)cloudRecordName;
-(NSDate *)cloudRecordModificationDate;
-(id)initWithCKRecord:(id)arg1 isNewlyCreatedRecord:(BOOL)arg2 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)description;
@end

