/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPMediaItem;

@interface _MPModelLibraryKeepLocalChangeRequestUpdateItemOperation : MPAsyncOperation {

	MPMediaItem* _mediaItem;
	long long _keepLocal;

}

@property (nonatomic,retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
@property (assign,nonatomic) long long keepLocal;                  //@synthesize keepLocal=_keepLocal - In the implementation block
-(void)setKeepLocal:(long long)arg1 ;
-(long long)keepLocal;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(void)execute;
@end

