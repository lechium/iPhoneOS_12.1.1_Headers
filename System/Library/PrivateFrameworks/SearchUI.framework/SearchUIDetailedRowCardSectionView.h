/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:32 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerStackViewDelegate.h>

@class SearchUIImageView, UIButton, TLKDetailsView, TLKStackView, NSMutableDictionary, SearchUIAccessoryViewController, NSString;

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView <NUIContainerStackViewDelegate> {

	SearchUIImageView* _thumbnailView;
	UIButton* _buttonView;
	TLKDetailsView* _detailsView;
	TLKStackView* _innerStackView;
	NSMutableDictionary* _accessoryViewControllers;
	SearchUIAccessoryViewController* _accessoryViewControllerForSection;

}

@property (retain) TLKStackView * contentView; 
@property (retain) SearchUIImageView * thumbnailView;                                                //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (retain) UIButton * buttonView;                                                            //@synthesize buttonView=_buttonView - In the implementation block
@property (retain) TLKDetailsView * detailsView;                                                     //@synthesize detailsView=_detailsView - In the implementation block
@property (retain) TLKStackView * innerStackView;                                                    //@synthesize innerStackView=_innerStackView - In the implementation block
@property (retain) NSMutableDictionary * accessoryViewControllers;                                   //@synthesize accessoryViewControllers=_accessoryViewControllers - In the implementation block
@property (retain) SearchUIAccessoryViewController * accessoryViewControllerForSection;              //@synthesize accessoryViewControllerForSection=_accessoryViewControllerForSection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dragTitleForCardSection:(id)arg1 ;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(void)addViewIfNecessary:(id)arg1 toStackView:(id)arg2 removeFromStackView:(id)arg3 ;
-(void)setButtonView:(UIButton *)arg1 ;
-(SearchUIImageView *)thumbnailView;
-(void)setThumbnailView:(SearchUIImageView *)arg1 ;
-(UIButton *)buttonView;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setAccessoryViewControllers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)accessoryViewControllers;
-(BOOL)arrangedViewMustCenter:(id)arg1 ;
-(long long)containerStackView:(id)arg1 alignmentForArrangedSubview:(id)arg2 ;
-(void)setInnerStackView:(TLKStackView *)arg1 ;
-(TLKStackView *)innerStackView;
-(void)setAccessoryViewControllerForSection:(SearchUIAccessoryViewController *)arg1 ;
-(SearchUIAccessoryViewController *)accessoryViewControllerForSection;
-(void)setDetailsView:(TLKDetailsView *)arg1 ;
-(TLKDetailsView *)detailsView;
-(void)buttonPressed;
@end
