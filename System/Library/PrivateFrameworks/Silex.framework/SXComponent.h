/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXComponent.h>
@class NSString, SXJSONArray, SXComponentAnimation, SXComponentClassification, SXJSONDictionary, SXComponentConditions;


@protocol SXComponent <NSObject>
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * layout; 
@property (nonatomic,readonly) NSString * style; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) id<SXComponentAnchor> anchor; 
@property (nonatomic,readonly) SXJSONArray * behaviors; 
@property (nonatomic,readonly) SXComponentAnimation * animation; 
@property (nonatomic,readonly) SXComponentClassification * classification; 
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (nonatomic,readonly) SXJSONDictionary * analytics; 
@property (nonatomic,readonly) SXComponentConditions * conditions; 
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) unsigned long long traits; 
@required
-(SXComponentConditions *)conditions;
-(SXJSONArray *)additions;
-(SXComponentClassification *)classification;
-(unsigned long long)contentRelevance;
-(int)role;
-(NSString *)identifier;
-(NSString *)style;
-(NSString *)layout;
-(NSString *)type;
-(SXJSONArray *)behaviors;
-(SXComponentAnimation *)animation;
-(unsigned long long)traits;
-(SXJSONDictionary *)analytics;
-(id<SXComponentAnchor>)anchor;

@end


@class NSString, SXJSONArray, SXComponentAnimation, SXComponentClassification, SXJSONDictionary, SXComponentConditions;

@interface SXComponent : SXJSONObject <SXComponent> {

	SXComponentAnimation* backingAnimation;
	SXComponentClassification* _classification;

}

@property (nonatomic,retain) SXComponentAnimation * backingAnimation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSString * layout; 
@property (nonatomic,readonly) NSString * style; 
@property (nonatomic,readonly) int role; 
@property (nonatomic,readonly) id<SXComponentAnchor> anchor; 
@property (nonatomic,readonly) SXJSONArray * behaviors; 
@property (nonatomic,readonly) SXComponentAnimation * animation; 
@property (nonatomic,readonly) SXComponentClassification * classification;              //@synthesize classification=_classification - In the implementation block
@property (nonatomic,readonly) SXJSONArray * additions; 
@property (nonatomic,readonly) SXJSONDictionary * analytics; 
@property (nonatomic,readonly) SXComponentConditions * conditions; 
@property (nonatomic,readonly) unsigned long long contentRelevance; 
@property (nonatomic,readonly) unsigned long long traits; 
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
+(Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2 ;
+(/*^block*/id)purgeClassBlockForPropertyWithName:(id)arg1 ;
-(unsigned long long)contentRelevance;
-(SXComponentConditions *)conditions;
-(SXJSONDictionary *)analytics;
-(SXJSONArray *)additions;
-(SXComponentAnimation *)animation;
-(SXJSONArray *)behaviors;
-(id<SXComponentAnchor>)anchor;
-(NSString *)style;
-(NSString *)layout;
-(NSString *)type;
-(NSString *)identifier;
-(SXComponentClassification *)classification;
-(SXComponentAnimation *)backingAnimation;
-(void)setBackingAnimation:(SXComponentAnimation *)arg1 ;
-(id)animationWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)contentRelevanceWithValue:(id)arg1 withType:(int)arg2 ;
-(int)role;
-(NSString *)description;
-(unsigned long long)traits;
@end

