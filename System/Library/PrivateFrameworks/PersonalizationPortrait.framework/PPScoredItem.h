/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:34 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersonalizationPortrait/PersonalizationPortrait-Structs.h>
#import <ProactiveSupport/_PASZonedObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSSecureCoding;
@class NSObject;

@interface PPScoredItem : _PASZonedObject <NSCopying, NSSecureCoding> {

	NSObject*<NSCopying>*<NSSecureCoding> _item;
	double _score;

}

@property (nonatomic,readonly) NSObject*<NSCopying>*<NSSecureCoding> item;              //@synthesize item=_item - In the implementation block
@property (nonatomic,readonly) double score;                                            //@synthesize score=_score - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)score;
-(BOOL)isEqualToScoredItem:(id)arg1 ;
-(id)initWithItem:(id)arg1 score:(double)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<NSCopying>*<NSSecureCoding>)item;
@end
