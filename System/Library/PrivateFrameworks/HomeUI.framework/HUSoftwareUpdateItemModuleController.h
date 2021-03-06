/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableModuleController.h>
#import <libobjc.A.dylib/HUSoftwareUpdateUIPresentationDelegate.h>

@protocol HUSoftwareUpdateItemModuleControllerDelegate;
@class HUSoftwareUpdateItemModule, NSString;

@interface HUSoftwareUpdateItemModuleController : HUItemTableModuleController <HUSoftwareUpdateUIPresentationDelegate> {

	id<HUSoftwareUpdateItemModuleControllerDelegate> _delegate;

}

@property (nonatomic,readonly) HUSoftwareUpdateItemModule * module; 
@property (nonatomic,__weak,readonly) id<HUSoftwareUpdateItemModuleControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithModule:(id)arg1 ;
-(Class)cellClassForItem:(id)arg1 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)didSelectItem:(id)arg1 ;
-(id)softwareUpdateUIManager:(id)arg1 dismissViewController:(id)arg2 ;
-(id)softwareUpdateUIManager:(id)arg1 presentViewController:(id)arg2 ;
-(BOOL)canSelectItem:(id)arg1 ;
-(id)initWithModule:(id)arg1 delegate:(id)arg2 ;
-(void)_startUpdateOnAccessories:(id)arg1 ;
-(id<HUSoftwareUpdateItemModuleControllerDelegate>)delegate;
@end

