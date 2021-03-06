/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeUI/STRootGroupSpecifierProvider.h>

@class PSSpecifier;

@interface STPasscodeGroupSpecifierProvider : STRootGroupSpecifierProvider {

	PSSpecifier* _togglePasscodeSpecifier;

}

@property (nonatomic,retain) PSSpecifier * togglePasscodeSpecifier;              //@synthesize togglePasscodeSpecifier=_togglePasscodeSpecifier - In the implementation block
-(void)setTogglePasscodeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)togglePasscodeSpecifier;
-(void)reloadTogglePasscodeSpecifier;
-(void)changeOrRemovePasscode:(id)arg1 ;
-(id)_removePasscodeAction;
-(void)_setManagedPasscode;
-(void)_removeManagedPasscode;
-(id)init;
-(BOOL)isHidden;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setCoordinator:(id)arg1 ;
@end

