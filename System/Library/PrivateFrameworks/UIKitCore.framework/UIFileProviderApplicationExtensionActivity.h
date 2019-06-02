/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIApplicationExtensionActivity.h>

@class LSPlugInKitProxy, NSArray;

@interface UIFileProviderApplicationExtensionActivity : UIApplicationExtensionActivity {

	LSPlugInKitProxy* _pluginProxy;
	NSArray* _groupContainerURLs;

}

@property (nonatomic,retain) LSPlugInKitProxy * pluginProxy;              //@synthesize pluginProxy=_pluginProxy - In the implementation block
@property (nonatomic,retain) NSArray * groupContainerURLs;                //@synthesize groupContainerURLs=_groupContainerURLs - In the implementation block
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)initWithApplicationExtension:(id)arg1 ;
-(NSArray *)groupContainerURLs;
-(LSPlugInKitProxy *)pluginProxy;
-(BOOL)_sharesGroupContainerWithURL:(id)arg1 ;
-(void)setPluginProxy:(LSPlugInKitProxy *)arg1 ;
-(void)setGroupContainerURLs:(NSArray *)arg1 ;
@end

