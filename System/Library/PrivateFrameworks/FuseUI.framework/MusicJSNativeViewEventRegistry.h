/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/MusicJSNativeViewEventRegistry.h>

@protocol MusicJSNativeViewEventRegistry <JSExport>
@required
-(void)addNativeViewAppearanceListener:(id)arg1 :(id)arg2 :(id)arg3;
-(void)removeNativeViewAppearanceListener:(id)arg1 :(id)arg2 :(id)arg3;

@end


@class NSMapTable, NSMutableDictionary, NSMutableSet;

@interface MusicJSNativeViewEventRegistry : IKJSObject <MusicJSNativeViewEventRegistry> {

	NSMapTable* _accessBlockQueuesMap;
	NSMutableDictionary* _eventListenersMap;
	NSMapTable* _eventRequestQueuesMap;
	NSMutableSet* _viewControllersBeingRegistered;

}
-(void)dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)registerExistingJSNativeViewController:(id)arg1 forViewController:(id)arg2 ;
-(void)requestAccessToJSNativeViewControllerForViewController:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)dispatchNativeViewEventOfType:(long long)arg1 forViewController:(id)arg2 ;
-(unsigned long long)_indexOfEventListener:(id)arg1 forNativeViewIdentifier:(id)arg2 eventType:(id)arg3 returningContainerMutableArray:(id*)arg4 ;
-(id)_keyForNativeViewIdentifier:(id)arg1 eventType:(id)arg2 ;
-(id)_existingRegisteredJSNativeViewControllerForViewController:(id)arg1 ;
-(void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forJSNativeViewController:(id)arg3 appContext:(id)arg4 jsContext:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_registerViewController:(id)arg1 withExistingJSNativeViewController:(id)arg2 ;
-(BOOL)_shouldUseInternalEventRegistryListenersToDispatchNativeViewEventOfType:(long long)arg1 ;
-(id)_descriptionForNativeViewEventType:(long long)arg1 ;
-(void)_flushNativeViewEventRequestQueue:(id)arg1 forViewController:(id)arg2 ;
-(void)_flushAccessBlockQueue:(id)arg1 forViewController:(id)arg2 ;
-(void)addNativeViewAppearanceListener:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)removeNativeViewAppearanceListener:(id)arg1 :(id)arg2 :(id)arg3 ;
@end

