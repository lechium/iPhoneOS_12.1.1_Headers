/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, FCColor, FCColorGradient, NTPBDiscoverMoreVideosInfo, NSArray, NSDate, FCFeedEdition;


@protocol FCFeedGroupOutlining <NSObject>
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * sourceIdentifier; 
@property (nonatomic,readonly) long long groupType; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy,readonly) FCColor * titleColor; 
@property (nonatomic,copy,readonly) FCColorGradient * backgroundGradient; 
@property (nonatomic,copy,readonly) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo; 
@property (nonatomic,copy,readonly) NSArray * videoPlaylistHeadlines; 
@property (nonatomic,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) FCFeedEdition * edition; 
@property (nonatomic,readonly) unsigned long long options; 
@property (nonatomic,readonly) unsigned long long mergeID; 
@property (nonatomic,copy,readonly) NSArray * headlines; 
@property (nonatomic,copy,readonly) NSString * backingTagID; 
@required
-(FCFeedEdition *)edition;
-(NSString *)sourceIdentifier;
-(long long)groupType;
-(NSDate *)creationDate;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(unsigned long long)mergeID;
-(NSArray *)headlines;
-(NSArray *)videoPlaylistHeadlines;
-(NSString *)backingTagID;
-(NSString *)identifier;
-(NSString *)title;
-(NSString *)subtitle;
-(unsigned long long)options;
-(FCColor *)titleColor;
-(FCColorGradient *)backgroundGradient;

@end
