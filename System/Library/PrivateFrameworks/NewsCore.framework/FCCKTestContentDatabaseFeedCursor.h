/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface FCCKTestContentDatabaseFeedCursor : NSObject <NSCopying, NSSecureCoding> {

	NSNumber* _order;
	NSNumber* _subOrder;

}

@property (nonatomic,copy) NSNumber * order;                 //@synthesize order=_order - In the implementation block
@property (nonatomic,copy) NSNumber * subOrder;              //@synthesize subOrder=_subOrder - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)subOrder;
-(void)setSubOrder:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOrder:(NSNumber *)arg1 ;
-(NSNumber *)order;
@end

