/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CKFetchRecordVersionsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchAssetContent;
	NSArray* _recordIDs;
	NSArray* _desiredKeys;
	NSString* _minimumVersionETag;

}

@property (nonatomic,retain) NSArray * recordIDs;                        //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSArray * desiredKeys;                      //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (nonatomic,retain) NSString * minimumVersionETag;              //@synthesize minimumVersionETag=_minimumVersionETag - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContent;               //@synthesize shouldFetchAssetContent=_shouldFetchAssetContent - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)desiredKeys;
-(NSArray *)recordIDs;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setRecordIDs:(NSArray *)arg1 ;
-(BOOL)shouldFetchAssetContent;
-(void)setShouldFetchAssetContent:(BOOL)arg1 ;
-(NSString *)minimumVersionETag;
-(void)setMinimumVersionETag:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end
