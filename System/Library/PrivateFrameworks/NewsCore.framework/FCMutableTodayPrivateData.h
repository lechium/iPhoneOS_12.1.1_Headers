/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCTodayPrivateData.h>
#import <libobjc.A.dylib/FCMutableTodayPrivateData.h>
@class NSSet, NSArray, NSDictionary, NSNumber;


@protocol FCMutableTodayPrivateData <FCTodayPrivateData>
@property (nonatomic,copy) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy) NSSet * mutedTagIDs; 
@property (nonatomic,copy) NSSet * autoFavoriteTagIDs; 
@property (nonatomic,copy) NSSet * purchasedTagIDs; 
@property (nonatomic,copy) NSArray * rankedPersonalSubscribedTagIDs; 
@property (nonatomic,copy) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy) NSNumber * onboardingVersion; 
@required
-(NSSet *)mutedTagIDs;
-(id<FCDerivedPersonalizationData><NSCoding>)derivedPersonalizationData;
-(NSSet *)autoFavoriteTagIDs;
-(NSSet *)purchasedTagIDs;
-(NSArray *)rankedPersonalSubscribedTagIDs;
-(NSArray *)recentlySeenHistoryItems;
-(NSDictionary *)recentlyReadHistoryItems;
-(NSNumber *)onboardingVersion;
-(void)setDerivedPersonalizationData:(id)arg1;
-(void)setMutedTagIDs:(id)arg1;
-(void)setAutoFavoriteTagIDs:(id)arg1;
-(void)setPurchasedTagIDs:(id)arg1;
-(void)setRankedPersonalSubscribedTagIDs:(id)arg1;
-(void)setRecentlySeenHistoryItems:(id)arg1;
-(void)setRecentlyReadHistoryItems:(id)arg1;
-(void)setOnboardingVersion:(id)arg1;

@end


@class NSSet, NSArray, NSDictionary, NSNumber, NSMutableDictionary, NSString;

@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>

@property (nonatomic,readonly) NSMutableDictionary * dictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) id<FCDerivedPersonalizationData><NSCoding> derivedPersonalizationData; 
@property (nonatomic,copy,readonly) NSSet * mutedTagIDs; 
@property (nonatomic,copy,readonly) NSSet * autoFavoriteTagIDs; 
@property (nonatomic,copy,readonly) NSSet * purchasedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * rankedPersonalSubscribedTagIDs; 
@property (nonatomic,copy,readonly) NSArray * recentlySeenHistoryItems; 
@property (nonatomic,copy,readonly) NSDictionary * recentlyReadHistoryItems; 
@property (nonatomic,copy,readonly) NSNumber * onboardingVersion; 
-(void)_deleteObjectsForOldKeys;
-(void)setDerivedPersonalizationData:(id<FCDerivedPersonalizationData><NSCoding>)arg1 ;
-(void)setMutedTagIDs:(NSSet *)arg1 ;
-(void)setAutoFavoriteTagIDs:(NSSet *)arg1 ;
-(void)setPurchasedTagIDs:(NSSet *)arg1 ;
-(void)setRankedPersonalSubscribedTagIDs:(NSArray *)arg1 ;
-(void)setRecentlySeenHistoryItems:(NSArray *)arg1 ;
-(void)setRecentlyReadHistoryItems:(NSDictionary *)arg1 ;
-(void)setOnboardingVersion:(NSNumber *)arg1 ;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
@end

