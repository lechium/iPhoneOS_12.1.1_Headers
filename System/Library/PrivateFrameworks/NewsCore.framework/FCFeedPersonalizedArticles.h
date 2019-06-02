/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMapTable;

@interface FCFeedPersonalizedArticles : NSObject {

	NSArray* _articlesToShow;
	NSArray* _articlesToHide;
	NSMapTable* _scoreProfiles;

}

@property (nonatomic,retain) NSArray * articlesToShow;                //@synthesize articlesToShow=_articlesToShow - In the implementation block
@property (nonatomic,retain) NSArray * articlesToHide;                //@synthesize articlesToHide=_articlesToHide - In the implementation block
@property (nonatomic,retain) NSMapTable * scoreProfiles;              //@synthesize scoreProfiles=_scoreProfiles - In the implementation block
-(NSArray *)articlesToShow;
-(void)setArticlesToShow:(NSArray *)arg1 ;
-(NSArray *)articlesToHide;
-(void)setArticlesToHide:(NSArray *)arg1 ;
-(NSMapTable *)scoreProfiles;
-(void)setScoreProfiles:(NSMapTable *)arg1 ;
@end

