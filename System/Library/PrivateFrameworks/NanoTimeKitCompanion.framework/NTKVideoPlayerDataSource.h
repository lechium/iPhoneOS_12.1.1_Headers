/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, NTKVideoPlayerListing;

@interface NTKVideoPlayerDataSource : NSObject {

	UIImage* _posterImage;
	NTKVideoPlayerListing* _currentListing;

}

@property (nonatomic,retain) NTKVideoPlayerListing * currentListing;              //@synthesize currentListing=_currentListing - In the implementation block
@property (nonatomic,retain) UIImage * posterImage;                               //@synthesize posterImage=_posterImage - In the implementation block
-(void)setPosterImage:(UIImage *)arg1 ;
-(UIImage *)posterImage;
-(NTKVideoPlayerListing *)currentListing;
-(void)setCurrentListing:(NTKVideoPlayerListing *)arg1 ;
-(void)advanceToNextListing:(unsigned long long)arg1 ;
-(id)listingsToQueueAfterCurrent;
-(id)listingToQueueOncePlaybackStarts;
-(id)init;
@end

