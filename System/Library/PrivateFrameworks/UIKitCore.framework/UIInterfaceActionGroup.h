/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIInterfaceActionDisplayPropertyObserver.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIInterfaceAction, NSPointerArray, NSString, UIInterfaceActionVisualStyle;

@interface UIInterfaceActionGroup : NSObject <UIInterfaceActionDisplayPropertyObserver, NSCopying> {

	NSArray* _actions;
	UIInterfaceAction* _preferredAction;
	NSPointerArray* _weakDisplayPropertyObservers;
	NSString* _title;
	NSArray* _actionsBySection;
	UIInterfaceActionVisualStyle* _visualStyle;
	CGSize _leadingImageLayoutSize;
	CGSize _trailingImageLayoutSize;

}

@property (nonatomic,readonly) NSPointerArray * weakDisplayPropertyObservers;                                                     //@synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers - In the implementation block
@property (nonatomic,readonly) NSString * title;                                                                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * actionsBySection;                                                                        //@synthesize actionsBySection=_actionsBySection - In the implementation block
@property (nonatomic,readonly) CGSize leadingImageLayoutSize;                                                                     //@synthesize leadingImageLayoutSize=_leadingImageLayoutSize - In the implementation block
@property (nonatomic,readonly) CGSize trailingImageLayoutSize;                                                                    //@synthesize trailingImageLayoutSize=_trailingImageLayoutSize - In the implementation block
@property (setter=_setVisualStyle:,getter=_visualStyle,nonatomic,retain) UIInterfaceActionVisualStyle * visualStyle;              //@synthesize visualStyle=_visualStyle - In the implementation block
@property (nonatomic,readonly) NSArray * actions;                                                                                 //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) UIInterfaceAction * preferredAction;                                                                 //@synthesize preferredAction=_preferredAction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)changedProperties:(id)arg1 containsAny:(id)arg2 ;
+(id)actionGroupWithActions:(id)arg1 ;
+(id)actionGroupWithActionsBySection:(id)arg1 ;
-(NSString *)description;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)actions;
-(void)setPreferredAction:(UIInterfaceAction *)arg1 ;
-(void)_notifyObserversVisualStyleDidChange;
-(void)_notifyObserversDidChangeActionProperty:(id)arg1 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2 ;
-(void)interfaceAction:(id)arg1 reloadDisplayedContentActionProperties:(id)arg2 ;
-(void)_setVisualStyle:(id)arg1 ;
-(void)setLeadingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)leadingImageLayoutSize;
-(void)setTrailingImageLayoutSize:(CGSize)arg1 ;
-(CGSize)trailingImageLayoutSize;
-(NSPointerArray *)weakDisplayPropertyObservers;
-(id)_visualStyle;
-(id)initWithTitle:(id)arg1 actionsBySection:(id)arg2 ;
-(void)_beginObservingActions;
-(void)_reloadImageLayoutSizesUsingExistingActionImages;
-(id)_deepCopyOfActionsBySection;
-(void)_updateActionImageLayoutSizes;
-(void)_performWithActionObservingDisabled:(/*^block*/id)arg1 ;
-(void)_endObservingActions;
-(void)_addActionGroupDisplayPropertyObserver:(id)arg1 ;
-(void)_removeActionGroupDisplayPropertyObserver:(id)arg1 ;
-(UIInterfaceAction *)preferredAction;
-(NSArray *)actionsBySection;
@end

