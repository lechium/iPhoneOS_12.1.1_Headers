/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CPSLinearFocusProviding.h>

@protocol CPSPageControlling;
@class UIButton, UILabel, NSNumberFormatter, NSString;

@interface CPSPagingControlView : UIView <CPSLinearFocusProviding> {

	unsigned long long _pageIndex;
	unsigned long long _pageCount;
	UIButton* _previousButton;
	UIButton* _nextButton;
	id<CPSPageControlling> _pagingDelegate;
	UILabel* _positionLabel;
	NSNumberFormatter* _numberFormatter;

}

@property (nonatomic,retain) UILabel * positionLabel;                                   //@synthesize positionLabel=_positionLabel - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                       //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (assign,nonatomic) unsigned long long pageIndex;                              //@synthesize pageIndex=_pageIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pageCount;                              //@synthesize pageCount=_pageCount - In the implementation block
@property (nonatomic,retain) UIButton * previousButton;                                 //@synthesize previousButton=_previousButton - In the implementation block
@property (nonatomic,retain) UIButton * nextButton;                                     //@synthesize nextButton=_nextButton - In the implementation block
@property (assign,nonatomic,__weak) id<CPSPageControlling> pagingDelegate;              //@synthesize pagingDelegate=_pagingDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)_linearFocusItems;
-(void)_handlePreviousButton:(id)arg1 ;
-(void)setPreviousButton:(UIButton *)arg1 ;
-(void)_handleNextButton:(id)arg1 ;
-(void)setPositionLabel:(UILabel *)arg1 ;
-(UIButton *)previousButton;
-(UILabel *)positionLabel;
-(void)_invokeDelegateForPageIndex:(unsigned long long)arg1 ;
-(id<CPSPageControlling>)pagingDelegate;
-(void)enablePageControlsIfNecessary;
-(void)setPagingDelegate:(id<CPSPageControlling>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(unsigned long long)pageCount;
-(void)setPageCount:(unsigned long long)arg1 ;
-(void)_update;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(UIButton *)nextButton;
-(void)setNextButton:(UIButton *)arg1 ;
@end

