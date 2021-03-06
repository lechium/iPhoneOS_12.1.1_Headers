/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSArray;

@interface PKCloudRecordArray : NSObject <NSSecureCoding> {

	NSMutableArray* _cloudRecords;

}

@property (nonatomic,readonly) NSArray * cloudRecords; 
+(BOOL)supportsSecureCoding;
-(id)_descriptionWithDetailedOutput:(BOOL)arg1 includeItem:(BOOL)arg2 ;
-(id)descriptionWithItem:(BOOL)arg1 ;
-(NSArray *)cloudRecords;
-(id)filteredCloudRecordArrayWithPredicate:(id)arg1 ;
-(id)allRecordNames;
-(void)addValuesFromCloudRecordArray:(id)arg1 ;
-(id)allItems;
-(void)addCloudRecord:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

