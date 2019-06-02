/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REIndentedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface RECondition : NSObject <REIndentedDescription, NSCopying>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)falseCondition;
+(id)conditionHasValueForFeature:(id)arg1 ;
+(id)trueCondition;
+(id)conditionForFeature:(id)arg1 relation:(long long)arg2 floatValue:(float)arg3 ;
+(id)andConditions:(id)arg1 ;
+(id)orConditions:(id)arg1 ;
+(id)notCondition:(id)arg1 ;
+(id)conditionForFeature:(id)arg1 hasBoolValue:(BOOL)arg2 ;
+(id)conditionForFeature:(id)arg1 hasIntegerValue:(long long)arg2 ;
+(id)conditionForFeature:(id)arg1 relation:(long long)arg2 feature:(id)arg3 ;
+(id)conditionForFeature:(id)arg1 relation:(long long)arg2 integerValue:(long long)arg3 ;
+(id)conditionForFeature:(id)arg1 hasValue:(id)arg2 ;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(id)_notCondition;
-(BOOL)_acceptsFeatureMap:(id)arg1 ;
-(id)_inflectionFeatureValuePairs;
-(id)_dependentFeatures;
-(BOOL)_requiresTwoFeatures;
-(BOOL)_validForRanking;
-(BOOL)_acceptsLeftFeatureMap:(id)arg1 rightFeatureMap:(id)arg2 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

