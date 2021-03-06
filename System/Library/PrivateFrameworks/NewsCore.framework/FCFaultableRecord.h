/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/FCKeyValueStoreCoding.h>

@class PBCodable, NSData, NTPBRecordBase, NSString;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {

	os_unfair_lock_s _recordLock;
	PBCodable* _record;
	NSData* _recordData;
	NTPBRecordBase* _recordBase;

}

@property (nonatomic,retain) NSData * recordData;                      //@synthesize recordData=_recordData - In the implementation block
@property (nonatomic,retain) NTPBRecordBase * recordBase;              //@synthesize recordBase=_recordBase - In the implementation block
@property (nonatomic,retain) PBCodable * record;                       //@synthesize record=_record - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s recordLock;              //@synthesize recordLock=_recordLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)keyValuePairType;
+(id)readValueFromKeyValuePair:(id)arg1 ;
+(id)faultableRecordWithRecord:(id)arg1 ;
+(id)faultableRecordWithRecordData:(id)arg1 ;
-(PBCodable *)record;
-(void)writeToKeyValuePair:(id)arg1 ;
-(NTPBRecordBase *)recordBase;
-(void)setRecordData:(NSData *)arg1 ;
-(NSData *)recordData;
-(void)setRecordBase:(NTPBRecordBase *)arg1 ;
-(os_unfair_lock_s)recordLock;
-(void)setRecordLock:(os_unfair_lock_s)arg1 ;
-(void)setRecord:(PBCodable *)arg1 ;
-(id)init;
@end

