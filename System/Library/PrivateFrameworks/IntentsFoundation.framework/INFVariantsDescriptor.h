/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsFoundation/IntentsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface INFVariantsDescriptor : NSObject <NSCopying> {

	unsigned long long _plurality;
	unsigned long long _gender;

}

@property (assign) unsigned long long plurality;                      //@synthesize plurality=_plurality - In the implementation block
@property (assign) unsigned long long gender;                         //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) NSString * dictionaryKey; 
+(id)variantWithVariants:(unsigned long long)arg1 ;
+(id)variant;
-(id)initWithVariants:(unsigned long long)arg1 ;
-(id)append:(id)arg1 toString:(id)arg2 ;
-(void)setPlurality:(unsigned long long)arg1 ;
-(unsigned long long)plurality;
-(id)variantByRemovingOneAttribute;
-(NSString *)dictionaryKey;
-(void)setGender:(unsigned long long)arg1 ;
-(unsigned long long)gender;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
