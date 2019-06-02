/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUEditableCheckmarkDelegate.h>

@protocol HUChildServiceModuleControllerDelegate, HFServiceLikeBuilder;
@class HUChildServiceEditorItemModule, HFItemBuilder, NSMapTable, NSString;

@interface HUChildServiceItemModuleController : HUItemTableModuleController <HUEditableCheckmarkDelegate> {

	id<HUChildServiceModuleControllerDelegate> _delegate;
	HUChildServiceEditorItemModule* _childServiceItemModule;
	HFItemBuilder*<HFServiceLikeBuilder> _activelyEditingNameServiceBuilder;
	NSMapTable* _identifyButtonMap;

}

@property (nonatomic,retain) HUChildServiceEditorItemModule * childServiceItemModule;                             //@synthesize childServiceItemModule=_childServiceItemModule - In the implementation block
@property (nonatomic,retain) HFItemBuilder*<HFServiceLikeBuilder> activelyEditingNameServiceBuilder;              //@synthesize activelyEditingNameServiceBuilder=_activelyEditingNameServiceBuilder - In the implementation block
@property (nonatomic,retain) NSMapTable * identifyButtonMap;                                                      //@synthesize identifyButtonMap=_identifyButtonMap - In the implementation block
@property (assign,nonatomic,__weak) id<HUChildServiceModuleControllerDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)defaultTextForTextField:(id)arg1 item:(id)arg2 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)placeholderTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2 ;
-(void)textFieldDidEndEditing:(id)arg1 item:(id)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(BOOL)canSelectDisabledItem:(id)arg1 ;
-(id)initWithModule:(id)arg1 delegate:(id)arg2 ;
-(void)checkmarkTappedInCell:(id)arg1 forItem:(id)arg2 ;
-(HUChildServiceEditorItemModule *)childServiceItemModule;
-(void)_identifyButtonPressed:(id)arg1 forEvent:(id)arg2 ;
-(NSMapTable *)identifyButtonMap;
-(void)setActivelyEditingNameServiceBuilder:(HFItemBuilder*<HFServiceLikeBuilder>)arg1 ;
-(HFItemBuilder*<HFServiceLikeBuilder>)activelyEditingNameServiceBuilder;
-(void)setChildServiceItemModule:(HUChildServiceEditorItemModule *)arg1 ;
-(void)setIdentifyButtonMap:(NSMapTable *)arg1 ;
-(void)setDelegate:(id<HUChildServiceModuleControllerDelegate>)arg1 ;
-(id<HUChildServiceModuleControllerDelegate>)delegate;
@end
