/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SUMaskProvider;

@interface SUMaskedView : UIView {

	SUMaskProvider* _maskProvider;

}

@property (nonatomic,retain) SUMaskProvider * maskProvider;              //@synthesize maskProvider=_maskProvider - In the implementation block
-(void)setMaskProvider:(SUMaskProvider *)arg1 ;
-(SUMaskProvider *)maskProvider;
-(CGPathRef)copyMaskPath;
-(void)_reloadMask;
-(void)setFrame:(CGRect)arg1 ;
-(void)dealloc;
@end

