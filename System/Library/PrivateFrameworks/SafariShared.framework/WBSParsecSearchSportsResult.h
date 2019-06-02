/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSParsecLegacySearchResult.h>
#import <libobjc.A.dylib/WBSParsecSearchSportsResult.h>

@class WBSParsecSportsScoreSummary, WBSParsecSearchSportsAttributionExtraCompletionItem, NSArray, NSString;

@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult <WBSParsecSearchSportsResult> {

	WBSParsecSportsScoreSummary* _scoreSummary;
	WBSParsecSearchSportsAttributionExtraCompletionItem* _extraCompletionItem;

}

@property (nonatomic,copy,readonly) NSArray * images; 
@property (nonatomic,copy,readonly) NSArray * individualScores; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) WBSParsecSearchSportsAttributionExtraCompletionItem * extraCompletionItem;              //@synthesize extraCompletionItem=_extraCompletionItem - In the implementation block
+(id)_specializedSchema;
-(NSArray *)individualScores;
-(WBSParsecSearchSportsAttributionExtraCompletionItem *)extraCompletionItem;
-(NSString *)subtitle;
-(NSArray *)images;
-(id)initWithDictionary:(id)arg1 ;
@end

