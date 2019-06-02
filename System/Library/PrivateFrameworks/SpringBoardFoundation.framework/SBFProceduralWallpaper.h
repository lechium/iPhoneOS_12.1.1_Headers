/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBFProceduralWallpaper.h>

@protocol SBFProceduralWallpaper <NSObject>
@property (assign,nonatomic) id<SBFProceduralWallpaperDelegate> delegate; 
@optional
+(id)presetWallpaperOptions;
+(id)thumbnailImageForOptions:(id)arg1;
+(BOOL)colorChangesSignificantly;
+(id)thumbnailImageName;
+(id)representativeThumbnailImageName;
-(void)setWallpaperOptions:(id)arg1;
-(void)stopGeneratingBlurs;
-(void)stopComputingAverageColor;
-(void)setWallpaperVariant:(long long)arg1;
-(id)averageColorForRect:(CGRect)arg1;
-(id)averageLifetimeColor;
-(void)startGeneratingBlursForRect:(CGRect)arg1;
-(IOSurfaceRef)copySnapshotImageForRect:(inout CGRect*)arg1;
-(IOSurfaceRef)copyBlurForRect:(inout CGRect*)arg1;
-(void)startComputingAverageColorForRect:(CGRect)arg1;
-(void)setDelegate:(id)arg1;
-(id<SBFProceduralWallpaperDelegate>)delegate;

@required
+(id)identifier;
-(id)view;
-(void)setAnimating:(BOOL)arg1;

@end


@class NSString;

@interface SBFProceduralWallpaper : UIView <SBFProceduralWallpaper>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<SBFProceduralWallpaperDelegate> delegate; 
+(id)identifier;
-(id)view;
-(void)setAnimating:(BOOL)arg1 ;
@end

