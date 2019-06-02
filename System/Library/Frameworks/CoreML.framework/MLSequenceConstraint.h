/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MLFeatureDescription;

@interface MLSequenceConstraint : NSObject <MLFeatureValueConstraint, NSCopying> {

	MLFeatureDescription* _valueDescription;
	NSRange _countRange;

}

@property (nonatomic,readonly) MLFeatureDescription * valueDescription;              //@synthesize valueDescription=_valueDescription - In the implementation block
@property (nonatomic,readonly) NSRange countRange;                                   //@synthesize countRange=_countRange - In the implementation block
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(id)initWithValueDescription:(id)arg1 countRange:(NSRange)arg2 ;
-(NSRange)countRange;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MLFeatureDescription *)valueDescription;
@end
