/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface FMMixParameters : NSObject {

	NSMutableArray* _volumeKeyFrames;

}

@property (nonatomic,retain) NSArray * volumeKeyFrames;              //@synthesize volumeKeyFrames=_volumeKeyFrames - In the implementation block
-(BOOL)appendVolumeKeyframe:(id)arg1 ;
-(NSArray *)volumeKeyFrames;
-(id)lastVolumeKeyFrame;
-(void)setVolumeKeyFrames:(NSArray *)arg1 ;
-(float)volumeValueAtTime:(long long)arg1 ;
-(void)insertVolumeKeyframe:(id)arg1 ;
-(BOOL)volumeKeyframesAreValid;
-(BOOL)removeRedundantVolumeKeyFrames;
-(id)init;
-(id)description;
@end
