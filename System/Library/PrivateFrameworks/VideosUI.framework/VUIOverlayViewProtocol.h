/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIImage;


@protocol VUIOverlayViewProtocol <NSObject>
@property (nonatomic,retain) UIImage * backgroundImageForMaterialRendering; 
@property (nonatomic,readonly) id<VUIOverlayLayoutProtocol> overlayLayout; 
@required
-(void)reset;
-(void)backgroundImageSizeDidChange:(CGSize)arg1;
-(UIImage *)backgroundImageForMaterialRendering;
-(void)setBackgroundImageForMaterialRendering:(id)arg1;
-(id<VUIOverlayLayoutProtocol>)overlayLayout;

@end
