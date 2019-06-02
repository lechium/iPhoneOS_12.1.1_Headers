/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@protocol HUMediaAccessControlEditorModuleControllerDelegate;
@class HFMediaAccessControlEditorItemModule, NSString;

@interface HUMediaAccessControlEditorModuleController : HUItemTableModuleController <UITextFieldDelegate, HUSwitchCellDelegate> {

	id<HUMediaAccessControlEditorModuleControllerDelegate> _delegate;

}

@property (nonatomic,__weak,readonly) HFMediaAccessControlEditorItemModule * module; 
@property (assign,nonatomic,__weak) id<HUMediaAccessControlEditorModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 ;
-(id)updateAccessControlDescriptor:(id)arg1 ;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setDelegate:(id<HUMediaAccessControlEditorModuleControllerDelegate>)arg1 ;
-(id<HUMediaAccessControlEditorModuleControllerDelegate>)delegate;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
@end

