/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSController <PSStateRestoration>
@optional
+(void)validateSpecifier:(id)arg1;
+(void)formatSearchEntries:(id)arg1 parent:(id)arg2;
+(id)searchBundle;
-(void)pushController:(id)arg1;
-(void)pushController:(id)arg1 animate:(BOOL)arg2;
-(BOOL)prepareHandlingURLForSpecifierID:(id)arg1 resourceDictionary:(id)arg2 animatePush:(BOOL*)arg3;
-(void)highlightSpecifierWithID:(id)arg1;

@required
-(void)setParentController:(id)arg1;
-(id)parentController;
-(void)setRootController:(id)arg1;
-(id)rootController;
-(void)setSpecifier:(id)arg1;
-(id)specifier;
-(void)didLock;
-(void)willUnlock;
-(void)didUnlock;
-(void)didWake;
-(void)showController:(id)arg1;
-(void)showController:(id)arg1 animate:(BOOL)arg2;
-(void)handleURL:(id)arg1;
-(void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
-(id)readPreferenceValue:(id)arg1;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)statusBarWillAnimateByHeight:(double)arg1;
-(void)suspend;

@end

