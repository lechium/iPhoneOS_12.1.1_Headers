/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKUILibraryInterface <NSObject>
@optional
-(void)removeMediaItemsForLibraryItems:(id)arg1;
-(BOOL)performActionForLibraryItem:(id)arg1;
-(id)exposedPlatformItemKinds;
-(id)stateForLibraryItemAfterLibraryIntegration:(id)arg1;

@required
-(id)stateForLibraryItem:(id)arg1;
-(void)enumerateStatesForLibraryItems:(id)arg1 usingBlock:(/*^block*/id)arg2;

@end

