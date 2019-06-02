/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PencilKit/PencilKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, PKInkBehavior;

@interface PKInk : NSObject <NSCopying> {

	NSString* _identifier;
	UIColor* _color;
	double _weight;
	PKInkBehavior* _behavior;
	unsigned long long _version;
	NSString* _variant;

}

@property (nonatomic,retain) PKInkBehavior * behavior;                  //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSString * variant;                      //@synthesize variant=_variant - In the implementation block
@property (assign,nonatomic) double weight;                             //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIColor * color;                         //@synthesize color=_color - In the implementation block
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3 ;
+(double)defaultWeightForIdentifier:(id)arg1 ;
+(double)defaultOpacityForIdentifier:(id)arg1 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 ;
+(id)inkWithIdentifier:(id)arg1 color:(id)arg2 variant:(id)arg3 ;
+(id)inkFromDictionary:(id)arg1 color:(id)arg2 identifier:(id)arg3 ;
+(id)inkFromInk:(id)arg1 color:(id)arg2 ;
+(id)inkFromInk:(id)arg1 withBehavior:(id)arg2 ;
+(unsigned)commandTypeForIdentifier:(id)arg1 wantsObjectErase:(BOOL)arg2 ;
+(id)identifierForCommandType:(unsigned)arg1 wantsObjectErase:(BOOL)arg2 ;
-(NSString *)variant;
-(id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 ;
-(id)initWithArchive:(const Ink*)arg1 serializationVersion:(unsigned long long)arg2 ;
-(void)saveToArchive:(Ink*)arg1 ;
-(id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 weight:(double)arg5 ;
-(id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 behavior:(id)arg5 ;
-(BOOL)isEqualInk:(id)arg1 ;
-(unsigned long long)hashValueForFloat:(double)arg1 ;
-(id)init;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)version;
-(UIColor *)color;
-(void)setBehavior:(PKInkBehavior *)arg1 ;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(PKInkBehavior *)behavior;
@end

