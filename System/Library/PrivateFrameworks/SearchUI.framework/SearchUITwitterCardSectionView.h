/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>

@class UIView, TLKStackView, NSString;

@interface SearchUITwitterCardSectionView : SearchUICardSectionView <NUIContainerStackViewDelegate> {

	UIView* _pictureView;

}

@property (retain) TLKStackView * contentView; 
@property (retain) UIView * pictureView;                            //@synthesize pictureView=_pictureView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3 ;
-(id)setupContentView;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)setPictureView:(UIView *)arg1 ;
-(UIView *)pictureView;
@end
