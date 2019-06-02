/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPModelKind.h>

@class MPModelTVEpisodeKind;

@interface MPModelTVSeasonKind : MPModelKind {

	MPModelTVEpisodeKind* _episodeKind;

}

@property (nonatomic,readonly) MPModelTVEpisodeKind * episodeKind;              //@synthesize episodeKind=_episodeKind - In the implementation block
+(id)kindWithEpisodeKind:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)humanDescription;
-(MPModelTVEpisodeKind *)episodeKind;
-(void)applyToView:(shared_ptr<mlcore::LibraryView>*)arg1 withContext:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

