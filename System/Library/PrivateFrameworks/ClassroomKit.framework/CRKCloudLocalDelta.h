/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableSet, NSSet;

@interface CRKCloudLocalDelta : NSObject <NSSecureCoding> {

	BOOL _atomic;
	NSString* _identifier;
	NSMutableSet* _mutableAssetIdentifiers;
	NSMutableSet* _mutableCreateRecords;
	NSMutableSet* _mutableDeleteRecordIds;
	NSMutableSet* _mutableUpdateRecords;

}

@property (assign,getter=isAtomic,nonatomic) BOOL atomic;                         //@synthesize atomic=_atomic - In the implementation block
@property (nonatomic,retain) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableAssetIdentifiers;              //@synthesize mutableAssetIdentifiers=_mutableAssetIdentifiers - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableCreateRecords;                 //@synthesize mutableCreateRecords=_mutableCreateRecords - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableDeleteRecordIds;               //@synthesize mutableDeleteRecordIds=_mutableDeleteRecordIds - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableUpdateRecords;                 //@synthesize mutableUpdateRecords=_mutableUpdateRecords - In the implementation block
@property (nonatomic,copy,readonly) NSSet * createRecords; 
@property (nonatomic,copy,readonly) NSSet * updateRecords; 
@property (nonatomic,copy,readonly) NSSet * deleteRecordIds; 
@property (nonatomic,readonly) NSSet * assetIdentifiers; 
@property (getter=isEmpty,nonatomic,readonly) BOOL empty; 
@property (nonatomic,readonly) NSSet * createRecordIds; 
@property (nonatomic,readonly) NSSet * updateRecordIds; 
+(id)instanceWithCreateRecords:(id)arg1 updateRecords:(id)arg2 deleteRecordIds:(id)arg3 isAtomic:(BOOL)arg4 ;
+(BOOL)supportsSecureCoding;
-(void)setAtomic:(BOOL)arg1 ;
-(void)addDeleteRecordId:(id)arg1 ;
-(void)addCreateRecord:(id)arg1 ;
-(NSSet *)assetIdentifiers;
-(void)addAssetIdentifiers:(id)arg1 ;
-(void)addUpdateRecord:(id)arg1 ;
-(void)mergeDelta:(id)arg1 ;
-(NSMutableSet *)mutableCreateRecords;
-(NSMutableSet *)mutableUpdateRecords;
-(NSMutableSet *)mutableDeleteRecordIds;
-(NSMutableSet *)mutableAssetIdentifiers;
-(id)recordsInSet:(id)arg1 matchingIds:(id)arg2 ;
-(void)setMutableCreateRecords:(NSMutableSet *)arg1 ;
-(void)setMutableUpdateRecords:(NSMutableSet *)arg1 ;
-(void)setMutableDeleteRecordIds:(NSMutableSet *)arg1 ;
-(id)createRecordsMatchingIds:(id)arg1 ;
-(id)updateRecordsMatchingIds:(id)arg1 ;
-(void)removeCreatesMatchingIds:(id)arg1 ;
-(void)removeUpdatesMatchingIds:(id)arg1 ;
-(NSSet *)createRecordIds;
-(NSSet *)updateRecordIds;
-(void)removeDeleteIdsMatchingIds:(id)arg1 ;
-(BOOL)isAtomic;
-(NSSet *)createRecords;
-(NSSet *)updateRecords;
-(NSSet *)deleteRecordIds;
-(void)setCreateRecords:(NSSet *)arg1 ;
-(void)setUpdateRecords:(NSSet *)arg1 ;
-(void)setDeleteRecordIds:(NSSet *)arg1 ;
-(void)setMutableAssetIdentifiers:(NSMutableSet *)arg1 ;
-(id)init;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)isEmpty;
@end

