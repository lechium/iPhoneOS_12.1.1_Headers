/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 5:59:20 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class JTImage;


@protocol JTImageViewRendering <NSObject>
@property (nonatomic,retain) JTImage * jtImage; 
@property (nonatomic,readonly) long long renderingType; 
@property (assign,nonatomic) BOOL flipX; 
@property (assign,nonatomic) BOOL flipY; 
@property (assign,nonatomic) BOOL enableDebugDrawing; 
@required
-(void)setFlipY:(BOOL)arg1;
-(void)setFlipX:(BOOL)arg1;
-(BOOL)flipY;
-(BOOL)flipX;
-(void)setJtImage:(id)arg1;
-(JTImage *)jtImage;
-(long long)renderingType;
-(BOOL)enableDebugDrawing;
-(void)setEnableDebugDrawing:(BOOL)arg1;

@end

