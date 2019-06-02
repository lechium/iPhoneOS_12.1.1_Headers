/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <Widgets/WGWidgetListViewController.h>
#import <libobjc.A.dylib/WGWidgetListFooterViewDelegate.h>

@class WGCollapsingView, WGWidgetListFooterView, NSString;

@interface WGMajorListViewController : WGWidgetListViewController <WGWidgetListFooterViewDelegate> {

	WGCollapsingView* _collapsingView;
	WGWidgetListFooterView* _footerView;

}

@property (nonatomic,readonly) WGWidgetListFooterView * footerView;              //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeVisibleInGroup:(id)arg3 ;
-(void)widgetDiscoveryController:(id)arg1 widgetWithIdentifier:(id)arg2 shouldBecomeHiddenInGroup:(id)arg3 ;
-(void)orderOfVisibleWidgetsDidChange:(id)arg1 ;
-(id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1 ;
-(void)_configureStackView;
-(void)setShouldBlurContent:(BOOL)arg1 ;
-(id)_group;
-(void)widgetListFooterViewAvailableNewWidgetsUpdated:(id)arg1 ;
-(void)presentEditView:(id)arg1 ;
-(void)_updateFooterViewShouldBlurContent;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(WGWidgetListFooterView *)footerView;
@end

