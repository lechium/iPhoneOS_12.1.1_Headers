/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MKActionRowItemViewDelegate.h>
#import <libobjc.A.dylib/MKModuleViewControllerProtocol.h>

@class NSArray, MKPlaceSectionItemView, UILayoutGuide, MKPlaceActionManager, NSString;

@interface MKPlaceCardActionsRowViewController : UIViewController <MKActionRowItemViewDelegate, MKModuleViewControllerProtocol> {

	NSArray* _actionButtons;
	NSArray* _constraints;
	NSArray* _actionRowsArray;
	unsigned long long _maxButtonsPerRow;
	MKPlaceSectionItemView* _hairlineView;
	unsigned long long _style;
	UILayoutGuide* _marginLayoutguide;
	NSArray* _items;
	MKPlaceActionManager* _actionManager;

}

@property (nonatomic,copy) NSArray * items;                                            //@synthesize items=_items - In the implementation block
@property (assign,nonatomic,__weak) MKPlaceActionManager * actionManager;              //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)createConstraints;
-(void)actionRowSelected:(id)arg1 ;
-(void)createActions;
-(unsigned long long)maxButtonsPerRow;
-(void)createActionViews;
-(void)layoutButtons;
-(void)setActionManager:(MKPlaceActionManager *)arg1 ;
-(MKPlaceActionManager *)actionManager;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
@end

