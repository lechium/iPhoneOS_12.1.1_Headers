/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSMutableArray;

@interface PKCatalogGroup : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUbiquitous;
	NSNumber* _groupID;
	NSMutableArray* _uniqueIDs;

}

@property (nonatomic,retain) NSNumber * groupID;                      //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,retain) NSMutableArray * uniqueIDs;              //@synthesize uniqueIDs=_uniqueIDs - In the implementation block
@property (assign,nonatomic) BOOL isUbiquitous;                       //@synthesize isUbiquitous=_isUbiquitous - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqualToGroup:(id)arg1 ;
-(NSMutableArray *)uniqueIDs;
-(void)setUniqueIDs:(NSMutableArray *)arg1 ;
-(void)setIsUbiquitous:(BOOL)arg1 ;
-(NSNumber *)groupID;
-(void)setGroupID:(NSNumber *)arg1 ;
-(BOOL)isUbiquitous;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

