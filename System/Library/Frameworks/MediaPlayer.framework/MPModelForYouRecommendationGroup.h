/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSURL, NSDate, NSString, MPSectionedCollection, NSArray;

@interface MPModelForYouRecommendationGroup : MPModelObject {

	NSURL* _refreshURL;

}

@property (assign,nonatomic) unsigned long long groupType; 
@property (nonatomic,retain) NSDate * lastUpdatedDate; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) MPSectionedCollection * sectionedItems; 
@property (assign,nonatomic) long long sectionIndex; 
@property (nonatomic,copy) NSArray * subgroups; 
@property (nonatomic,copy) NSURL * loadAdditionalContentURL; 
@property (nonatomic,copy) NSURL * refreshURL; 
+(id)__title_KEY;
+(id)__groupType_KEY;
+(id)__lastUpdatedDate_KEY;
+(id)__sectionedItems_KEY;
+(id)__sectionIndex_KEY;
+(id)__subgroups_KEY;
+(id)__loadAdditionalContentURL_KEY;
+(id)__refreshURL_KEY;
-(void)setRefreshURL:(NSURL *)arg1 ;
-(NSURL *)refreshURL;
-(id)itemAtIndex:(long long)arg1 ;
-(long long)numberOfItems;
@end

