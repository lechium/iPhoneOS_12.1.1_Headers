/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:17 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CTCarrierSpaceUsagePlanItemData, CTCarrierSpaceUsagePlanItemMessages, CTCarrierSpaceUsagePlanItemVoice, NSDate;

@interface CTCarrierSpaceUsagePlanMetrics : NSObject <NSSecureCoding> {

	BOOL _currentUsedPlan;
	BOOL _throttled;
	NSString* _planLabel;
	long long _planCategory;
	CTCarrierSpaceUsagePlanItemData* _dataUsage;
	CTCarrierSpaceUsagePlanItemMessages* _messages;
	CTCarrierSpaceUsagePlanItemVoice* _voice;
	NSString* _remainingBalance;
	NSDate* _lastUpdatedAt;

}

@property (nonatomic,retain) NSString * planLabel;                                        //@synthesize planLabel=_planLabel - In the implementation block
@property (assign,nonatomic) long long planCategory;                                      //@synthesize planCategory=_planCategory - In the implementation block
@property (assign,nonatomic) BOOL currentUsedPlan;                                        //@synthesize currentUsedPlan=_currentUsedPlan - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceUsagePlanItemData * dataUsage;                 //@synthesize dataUsage=_dataUsage - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceUsagePlanItemMessages * messages;              //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) CTCarrierSpaceUsagePlanItemVoice * voice;                    //@synthesize voice=_voice - In the implementation block
@property (nonatomic,retain) NSString * remainingBalance;                                 //@synthesize remainingBalance=_remainingBalance - In the implementation block
@property (assign,nonatomic) BOOL throttled;                                              //@synthesize throttled=_throttled - In the implementation block
@property (nonatomic,retain) NSDate * lastUpdatedAt;                                      //@synthesize lastUpdatedAt=_lastUpdatedAt - In the implementation block
+(BOOL)supportsSecureCoding;
-(CTCarrierSpaceUsagePlanItemVoice *)voice;
-(CTCarrierSpaceUsagePlanItemData *)dataUsage;
-(void)setVoice:(CTCarrierSpaceUsagePlanItemVoice *)arg1 ;
-(CTCarrierSpaceUsagePlanItemMessages *)messages;
-(BOOL)throttled;
-(void)setThrottled:(BOOL)arg1 ;
-(void)setMessages:(CTCarrierSpaceUsagePlanItemMessages *)arg1 ;
-(long long)planCategory;
-(NSString *)planLabel;
-(NSDate *)lastUpdatedAt;
-(NSString *)remainingBalance;
-(void)setPlanLabel:(NSString *)arg1 ;
-(BOOL)currentUsedPlan;
-(void)setPlanCategory:(long long)arg1 ;
-(void)setCurrentUsedPlan:(BOOL)arg1 ;
-(void)setDataUsage:(CTCarrierSpaceUsagePlanItemData *)arg1 ;
-(void)setRemainingBalance:(NSString *)arg1 ;
-(void)setLastUpdatedAt:(NSDate *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

