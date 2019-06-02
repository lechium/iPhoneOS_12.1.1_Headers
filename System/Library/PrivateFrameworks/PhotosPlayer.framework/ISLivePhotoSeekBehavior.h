/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISBehavior.h>

@interface ISLivePhotoSeekBehavior : ISBehavior {

	BOOL _isSeeking;
	BOOL _needsSeek;
	BOOL _needsTransitionToVideo;
	/*^block*/id _seekCompletionHandler;
	SCD_Struct_IS4 _seekTime;

}

@property (assign,nonatomic) SCD_Struct_IS4 seekTime;              //@synthesize seekTime=_seekTime - In the implementation block
@property (nonatomic,copy) id seekCompletionHandler;               //@synthesize seekCompletionHandler=_seekCompletionHandler - In the implementation block
-(SCD_Struct_IS4)seekTime;
-(void)setSeekTime:(SCD_Struct_IS4)arg1 ;
-(void)activeDidChange;
-(void)_seekIfNeeded;
-(void)_callSeekCompletionHandler:(BOOL)arg1 ;
-(void)_handleDidSeekToSeekTime:(BOOL)arg1 ;
-(id)seekCompletionHandler;
-(void)setSeekCompletionHandler:(id)arg1 ;
-(id)initWithInitialLayoutInfo:(id)arg1 seekTime:(SCD_Struct_IS4)arg2 ;
-(long long)behaviorType;
@end
