/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString, FCColor, FCColorGradient, NTPBDiscoverMoreVideosInfo;

@interface FCVideoArticlesOperationResult : NSObject {

	NSArray* _headlines;
	NSString* _channelID;
	NSString* _titleText;
	FCColor* _titleColor;
	NSString* _subtitleText;
	FCColorGradient* _backgroundColorGradient;
	NTPBDiscoverMoreVideosInfo* _discoverMoreVideosInfo;
	NSString* _mutingChannelID;

}

@property (nonatomic,retain) NSArray * headlines;                                            //@synthesize headlines=_headlines - In the implementation block
@property (nonatomic,copy) NSString * channelID;                                             //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                             //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) FCColor * titleColor;                                             //@synthesize titleColor=_titleColor - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                          //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,copy) FCColorGradient * backgroundColorGradient;                        //@synthesize backgroundColorGradient=_backgroundColorGradient - In the implementation block
@property (nonatomic,copy) NTPBDiscoverMoreVideosInfo * discoverMoreVideosInfo;              //@synthesize discoverMoreVideosInfo=_discoverMoreVideosInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * mutingChannelID;                              //@synthesize mutingChannelID=_mutingChannelID - In the implementation block
-(NSString *)titleText;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)channelID;
-(NTPBDiscoverMoreVideosInfo *)discoverMoreVideosInfo;
-(NSArray *)headlines;
-(NSString *)mutingChannelID;
-(FCColorGradient *)backgroundColorGradient;
-(void)setHeadlines:(NSArray *)arg1 ;
-(void)setChannelID:(NSString *)arg1 ;
-(id)initWithVideoGroupConfig:(id)arg1 headlines:(id)arg2 ;
-(void)setBackgroundColorGradient:(FCColorGradient *)arg1 ;
-(void)setDiscoverMoreVideosInfo:(NTPBDiscoverMoreVideosInfo *)arg1 ;
-(FCColor *)titleColor;
-(void)setTitleColor:(FCColor *)arg1 ;
-(void)setTitleText:(NSString *)arg1 ;
@end

