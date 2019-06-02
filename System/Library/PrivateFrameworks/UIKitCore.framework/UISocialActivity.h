/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:35 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIApplicationExtensionActivity.h>
#import <UIKit/UIManagedConfigurationRestrictableActivity.h>

@class NSString, SLComposeViewController;

@interface UISocialActivity : UIApplicationExtensionActivity <UIManagedConfigurationRestrictableActivity> {

	BOOL _sourceIsManaged;
	NSString* _sourceApplicationBundleID;
	NSString* _builtinActivityType;
	SLComposeViewController* _socialComposeViewController;

}

@property (nonatomic,copy) NSString * builtinActivityType;                                       //@synthesize builtinActivityType=_builtinActivityType - In the implementation block
@property (nonatomic,retain) SLComposeViewController * socialComposeViewController;              //@synthesize socialComposeViewController=_socialComposeViewController - In the implementation block
@property (assign,nonatomic) BOOL sourceIsManaged;                                               //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;                                 //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
+(long long)activityCategory;
+(id)_activityExtensionItemsForActivityItemValues:(id)arg1 extensionItemDataRequest:(id)arg2 ;
-(id)debugDescription;
-(void)_cleanup;
-(CGSize)_thumbnailSize;
-(id)activityType;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)setSourceIsManaged:(BOOL)arg1 ;
-(id)activityViewController;
-(BOOL)sourceIsManaged;
-(id)initWithActivityType:(id)arg1 ;
-(void)prepareWithActivityExtensionItemData:(id)arg1 ;
-(id)initWithApplicationExtension:(id)arg1 ;
-(BOOL)_canBeExcludeWhenMatchingWithContext:(id)arg1 ;
-(BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(void)setBuiltinActivityType:(NSString *)arg1 ;
-(NSString *)builtinActivityType;
-(void)_prepareComposeViewController:(id)arg1 withInjectedExtensionItems:(id)arg2 ;
-(void)_prepareComposeViewController:(id)arg1 withActivityExtensionItems:(id)arg2 ;
-(void)setSocialComposeViewController:(SLComposeViewController *)arg1 ;
-(SLComposeViewController *)socialComposeViewController;
-(void)_willBePerformedOrPresented;
-(BOOL)_wantsThumbnailItemData;
-(BOOL)_wantsAttachmentURLItemData;
@end
