/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/News/Tea.framework/Tea
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString, NSDate, TSAnalyticsReferral;

@interface TSArticleContext : NSObject {

	 url;
	 sourceApplication;
	 previousArticleID;
	 previousArticleVersion;
	 adPreviewSessionID;
	 adPreviewID;
	 maximumAdRequestsForCurrentAdPreviewID;
	 userActionDate;
	 presentationReason;
	 notificationID;
	 referral;

}

@property (readonly,nonatomic) NSURL * url; 
@property (readonly,nonatomic) NSString * sourceApplication; 
@property (readonly,nonatomic) NSString * previousArticleID; 
@property (readonly,nonatomic) NSString * previousArticleVersion; 
@property (readonly,nonatomic) NSString * adPreviewSessionID; 
@property (readonly,nonatomic) NSString * adPreviewID; 
@property (readonly,nonatomic) long long maximumAdRequestsForCurrentAdPreviewID; 
@property (readonly,nonatomic) NSDate * userActionDate; 
@property (readonly,nonatomic) long long presentationReason; 
@property (readonly,nonatomic) NSString * notificationID; 
@property (readonly,nonatomic) TSAnalyticsReferral * referral; 
-(NSString *)sourceApplication;
-(NSString *)previousArticleVersion;
-(long long)presentationReason;
-(NSString *)notificationID;
-(NSString *)adPreviewID;
-(NSString *)adPreviewSessionID;
-(long long)maximumAdRequestsForCurrentAdPreviewID;
-(TSAnalyticsReferral *)referral;
-(NSString *)previousArticleID;
-(NSDate *)userActionDate;
-(id)initWithUrl:(id)arg1 sourceApplication:(id)arg2 previousArticleID:(id)arg3 previousArticleVersion:(id)arg4 adPreviewSessionID:(id)arg5 adPreviewID:(id)arg6 maximumAdRequestsForCurrentAdPreviewID:(long long)arg7 userActionDate:(id)arg8 presentationReason:(long long)arg9 notificationID:(id)arg10 referral:(id)arg11 ;
-(id)init;
-(NSURL *)url;
@end

