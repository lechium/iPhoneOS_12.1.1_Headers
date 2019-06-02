/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 5:59:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <CameraEffectsKit/JTEffect.h>

@class UIImage;

@interface JTAnimojiEffect : JTEffect

@property (nonatomic,readonly) UIImage * thumbnail; 
+(BOOL)isAvatarKitAvailable;
+(id)animojiIDs;
+(BOOL)supportsSecureCoding;
-(id)renderEffect;
-(id)initWithEffectID:(id)arg1 ;
-(id)_cachedRenderEffect;
-(CGAffineTransform)transform:(CGRect)arg1 basisOrigin:(int)arg2 ;
-(CGRect)_convertRenderEffectRect:(CGRect)arg1 toBasisRect:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 toBasisRect:(CGRect)arg2 basisOrigin:(int)arg3 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 numPoints:(unsigned long long)arg2 toBasisRect:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(void)_convertRenderEffectPoints:(CGPoint*)arg1 numPoints:(unsigned long long)arg2 fromBasisRect:(CGRect)arg3 basisOrigin:(int)arg4 ;
-(CGAffineTransform)_affineTransformFromEffectRect:(CGRect)arg1 toSize:(CGSize)arg2 basisOrigin:(int)arg3 ;
-(id)displayName;
-(UIImage *)thumbnail;
@end

