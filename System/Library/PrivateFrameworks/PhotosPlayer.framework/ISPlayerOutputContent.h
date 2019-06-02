/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISWrappedAVPlayer;

@interface ISPlayerOutputContent : NSObject {

	BOOL _photoIsOriginal;
	int _photoEXIFOrientation;
	CGImageRef _photo;
	ISWrappedAVPlayer* _videoPlayer;
	CGSize _videoSize;

}

@property (nonatomic,readonly) CGImageRef photo;                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) BOOL photoIsOriginal;                         //@synthesize photoIsOriginal=_photoIsOriginal - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                     //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;              //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,readonly) CGSize videoSize;                             //@synthesize videoSize=_videoSize - In the implementation block
-(CGImageRef)photo;
-(ISWrappedAVPlayer *)videoPlayer;
-(CGSize)videoSize;
-(BOOL)photoIsOriginal;
-(int)photoEXIFOrientation;
-(id)initWithPhoto:(CGImageRef)arg1 photoIsOriginal:(BOOL)arg2 photoEXIFOrientation:(int)arg3 videoPlayer:(id)arg4 videoSize:(CGSize)arg5 ;
-(void)dealloc;
-(id)description;
@end

