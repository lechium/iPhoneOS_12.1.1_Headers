/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PUEditPluginHostViewControllerDataSource.h>
#import <libobjc.A.dylib/PUEditPluginHostViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIActivityGroupViewControllerDelegate.h>

@protocol PUEditPluginSessionDataSource, PUEditPluginSessionDelegate, PUEditableAsset;
@class PUEditPluginManager, UINavigationController, PUEditPlugin, UIViewController, NSString;

@interface PUEditPluginSession : NSObject <PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, UINavigationControllerDelegate, UIActivityGroupViewControllerDelegate> {

	PUEditPluginManager* _pluginManager;
	UINavigationController* _pluginNavigationController;
	BOOL _isAvailable;
	id<PUEditPluginSessionDataSource> _dataSource;
	id<PUEditPluginSessionDelegate> _delegate;
	id<PUEditableAsset> _asset;
	long long _adjustmentType;
	PUEditPlugin* _currentPlugin;
	UIViewController* __hostViewController;

}

@property (assign,setter=_setIsAvailable:,nonatomic) BOOL isAvailable;                                                  //@synthesize isAvailable=_isAvailable - In the implementation block
@property (setter=_setCurrentPlugin:,nonatomic,retain) PUEditPlugin * currentPlugin;                                    //@synthesize currentPlugin=_currentPlugin - In the implementation block
@property (assign,setter=_setAdjustmentType:,nonatomic) long long adjustmentType;                                       //@synthesize adjustmentType=_adjustmentType - In the implementation block
@property (setter=_setAsset:,nonatomic,retain) id<PUEditableAsset> asset;                                               //@synthesize asset=_asset - In the implementation block
@property (assign,setter=_setHostViewController:,nonatomic,__weak) UIViewController * _hostViewController;              //@synthesize _hostViewController=__hostViewController - In the implementation block
@property (assign,nonatomic,__weak) id<PUEditPluginSessionDataSource> dataSource;                                       //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<PUEditPluginSessionDelegate> delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)adjustmentType;
-(void)_setAsset:(id)arg1 ;
-(BOOL)isAvailable;
-(void)beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 ;
-(void)editPluginHostViewController:(id)arg1 loadItemProviderWithHandler:(/*^block*/id)arg2 ;
-(void)editPluginHostViewController:(id)arg1 didFinishWithCompletionType:(unsigned long long)arg2 ;
-(void)editPluginHostViewController:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)updatePluginManager;
-(void)presentAlertController:(id)arg1 ;
-(void)shouldLaunchPlugin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(PUEditPlugin *)currentPlugin;
-(unsigned long long)pluginManagerMediaType;
-(void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(/*^block*/id)arg2 ;
-(void)_pluginManagerPluginsDidChange:(id)arg1 ;
-(void)_updateAvailability;
-(void)_setIsAvailable:(BOOL)arg1 ;
-(void)_beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3 ;
-(void)_setHostViewController:(id)arg1 ;
-(UIViewController *)_hostViewController;
-(void)_launchPlugin:(id)arg1 afterDismissingViewController:(id)arg2 ;
-(id)_localizedEditorListTitle;
-(void)_setCurrentPlugin:(id)arg1 ;
-(void)_setAdjustmentType:(long long)arg1 ;
-(void)dismissSession;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<PUEditPluginSessionDelegate>)arg1 ;
-(id<PUEditPluginSessionDelegate>)delegate;
-(id<PUEditPluginSessionDataSource>)dataSource;
-(void)setDataSource:(id<PUEditPluginSessionDataSource>)arg1 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id<PUEditableAsset>)asset;
-(void)activityGroupViewController:(id)arg1 didSelectActivity:(id)arg2 ;
@end
