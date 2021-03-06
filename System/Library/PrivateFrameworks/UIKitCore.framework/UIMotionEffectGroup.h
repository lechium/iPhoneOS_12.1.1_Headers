/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIMotionEffect.h>

@class NSArray;

@interface UIMotionEffectGroup : UIMotionEffect {

	NSArray* _motionEffects;

}

@property (nonatomic,copy) NSArray * motionEffects;              //@synthesize motionEffects=_motionEffects - In the implementation block
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)motionEffects;
-(void)setMotionEffects:(NSArray *)arg1 ;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
@end

