/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UITableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CNUINavigationListViewDataSource, CNUINavigationListViewDelegate;
@class UILongPressGestureRecognizer, UIGestureRecognizer, NSIndexPath, UISelectionFeedbackGenerator, _CNUINavigationListViewPermissiveGestureRecognizerDelegate, NSString;

@interface CNUINavigationListView : UITableView <UIGestureRecognizerDelegate> {

	id<CNUINavigationListViewDataSource> _navigationListViewDataSource;
	id<CNUINavigationListViewDelegate> _navigationListViewDelegate;
	UILongPressGestureRecognizer* _selectionGestureRecognizer;
	UIGestureRecognizer* _additionalSelectionGestureRecognizer;
	NSIndexPath* _trackedElementIndexPath;
	UISelectionFeedbackGenerator* _retargetBehavior;
	_CNUINavigationListViewPermissiveGestureRecognizerDelegate* _selectionGestureRecognizerDelegate;

}

@property (nonatomic,retain) UILongPressGestureRecognizer * selectionGestureRecognizer;                                                    //@synthesize selectionGestureRecognizer=_selectionGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * additionalSelectionGestureRecognizer;                                                   //@synthesize additionalSelectionGestureRecognizer=_additionalSelectionGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSIndexPath * trackedElementIndexPath;                                                                        //@synthesize trackedElementIndexPath=_trackedElementIndexPath - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * retargetBehavior;                                                              //@synthesize retargetBehavior=_retargetBehavior - In the implementation block
@property (nonatomic,retain) _CNUINavigationListViewPermissiveGestureRecognizerDelegate * selectionGestureRecognizerDelegate;              //@synthesize selectionGestureRecognizerDelegate=_selectionGestureRecognizerDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNUINavigationListViewDataSource> navigationListViewDataSource;                                     //@synthesize navigationListViewDataSource=_navigationListViewDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<CNUINavigationListViewDelegate> navigationListViewDelegate;                                         //@synthesize navigationListViewDelegate=_navigationListViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)disableHeaderAccessibilityElements;
-(void)setNavigationListViewDataSource:(id<CNUINavigationListViewDataSource>)arg1 ;
-(void)setNavigationListViewDelegate:(id<CNUINavigationListViewDelegate>)arg1 ;
-(void)startTrackingSelectionFromGestureRecognizer:(id)arg1 ;
-(void)handleSelectionGestureRecognizerUpdate:(id)arg1 ;
-(void)handlePanGestureRecognizerUpdate:(id)arg1 ;
-(UISelectionFeedbackGenerator *)retargetBehavior;
-(id)elementAtLocation:(CGPoint)arg1 ;
-(NSIndexPath *)trackedElementIndexPath;
-(void)startTrackingElementAtIndexPath:(id)arg1 ;
-(id)disclosureNavigationListViewCellForRowAtIndexPath:(id)arg1 ;
-(void)updateCellAccessoryControlState:(id)arg1 withTrackedLocation:(CGPoint)arg2 ;
-(void)stopTrackingElementAtIndexPath:(id)arg1 ;
-(UIGestureRecognizer *)additionalSelectionGestureRecognizer;
-(void)clearAdditionalSelectionGestureRecognizer;
-(void)notifyDelegateWithSelectionEventAtPoint:(CGPoint)arg1 trackedElementIndexPath:(id)arg2 ;
-(void)setTrackedElementIndexPath:(NSIndexPath *)arg1 ;
-(BOOL)location:(CGPoint)arg1 isInAccessoryControlTouchArea:(id)arg2 ;
-(id<CNUINavigationListViewDelegate>)navigationListViewDelegate;
-(void)setAdditionalSelectionGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(id)dequeueNavigationListViewCell;
-(id)dequeueDetailNavigationListViewCell;
-(id<CNUINavigationListViewDataSource>)navigationListViewDataSource;
-(void)setSelectionGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(void)setRetargetBehavior:(UISelectionFeedbackGenerator *)arg1 ;
-(_CNUINavigationListViewPermissiveGestureRecognizerDelegate *)selectionGestureRecognizerDelegate;
-(void)setSelectionGestureRecognizerDelegate:(_CNUINavigationListViewPermissiveGestureRecognizerDelegate *)arg1 ;
-(UILongPressGestureRecognizer *)selectionGestureRecognizer;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
@end
