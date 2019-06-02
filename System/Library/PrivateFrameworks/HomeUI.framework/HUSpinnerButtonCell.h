/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUButtonCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class UIActivityIndicatorView, NSString, HFItem;

@interface HUSpinnerButtonCell : HUButtonCell <HUCellProtocol> {

	BOOL _showSpinner;
	BOOL _useFullWidthSeparator;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                                 //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign,nonatomic) BOOL useFullWidthSeparator;                                       //@synthesize useFullWidthSeparator=_useFullWidthSeparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item; 
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
-(void)setShowSpinner:(BOOL)arg1 ;
-(BOOL)showSpinner;
-(void)setUseFullWidthSeparator:(BOOL)arg1 ;
-(void)createSpinner;
-(BOOL)useFullWidthSeparator;
-(void)prepareForReuse;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(CGRect)_separatorFrame;
@end

