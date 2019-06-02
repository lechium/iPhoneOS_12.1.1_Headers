/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPModelObject.h>

@class NSString, NSURL, MPModelPodcastAuthor;

@interface MPModelPodcast : MPModelObject

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSURL * feedURL; 
@property (nonatomic,copy) NSURL * shareURL; 
@property (assign,nonatomic) BOOL supportsSubscription; 
@property (nonatomic,retain) MPModelPodcastAuthor * author; 
@property (nonatomic,copy) id artworkCatalogBlock; 
+(id)__title_KEY;
+(id)__artworkCatalogBlock_KEY;
+(id)kindWithEpisodeKind:(id)arg1 ;
+(id)__feedURL_KEY;
+(id)__shareURL_KEY;
+(id)__supportsSubscription_KEY;
+(id)__author_KEY;
-(id)artworkCatalog;
-(id)humanDescription;
@end

