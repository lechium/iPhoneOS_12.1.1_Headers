/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCPersonalizationFeature : NSObject <NSCopying> {

	NSString* _personalizationIdentifier;
	NSString* _fc_description;
	NSString* _tagID;

}

@property (nonatomic,retain) NSString * tagID;                                  //@synthesize tagID=_tagID - In the implementation block
@property (nonatomic,retain) NSString * personalizationIdentifier;              //@synthesize personalizationIdentifier=_personalizationIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * fc_description;                       //@synthesize fc_description=_fc_description - In the implementation block
+(id)featuresFromTagIDs:(id)arg1 ;
+(id)featuresFromPersonalizingArticle:(id)arg1 ;
+(id)featureForFreeValuedIdentifier:(id)arg1 ;
+(id)featureForIdentifier:(id)arg1 allowFreeValued:(BOOL)arg2 ;
+(id)featuresFromHeadline:(id)arg1 ;
+(id)featuresFromTodayPersonalizationEvent:(id)arg1 ;
+(id)featuresFromTag:(id)arg1 ;
+(id)featureFromTagID:(id)arg1 ;
+(id)featureForIdentifier:(id)arg1 ;
+(id)featureObserver;
-(NSString *)tagID;
-(void)setTagID:(NSString *)arg1 ;
-(NSString *)personalizationIdentifier;
-(id)fr_description;
-(void)setPersonalizationIdentifier:(NSString *)arg1 ;
-(NSString *)fc_description;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
@end

