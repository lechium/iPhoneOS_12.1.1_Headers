/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class WKUserContentController, NSSet, NSMutableSet, NSMutableDictionary, NSObject;

@interface SFContentBlockerManager : NSObject {

	id _extensionMatchingContext;
	WKUserContentController* _userContentController;
	NSSet* _extensions;
	NSMutableSet* _observers;
	BOOL _lastExtensionDiscoveryHadError;
	NSMutableDictionary* _extensionsRecompiledAfterBackup;
	NSObject*<OS_dispatch_queue> _recompilationInformationAccessQueue;

}

@property (nonatomic,readonly) NSSet * extensions; 
@property (nonatomic,readonly) WKUserContentController * userContentController; 
+(id)_contentBlockerLoaderConnection;
+(void)reloadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)getStateOfContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)contentBlockerStore;
+(void)_createContentExtensionsDirectoryWithURL:(id)arg1 ;
+(id)sharedManager;
-(void)_loadContentBlockerWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(WKUserContentController *)userContentController;
-(void)_beginContentBlockerDiscovery;
-(id)_findNewExtensionsAdded:(id)arg1 toExistingExtensions:(id)arg2 ;
-(void)_recompileEnabledContentBlockersIfNeeded:(id)arg1 ;
-(void)_saveContentBlockerRecompilationInformation;
-(void)_loadContentBlockerRecompilationInformationIfNeeded;
-(BOOL)_hasRecompilationBeenAttemptedForExtension:(id)arg1 ;
-(BOOL)extensionIsEnabled:(id)arg1 ;
-(void)_noteRecompilationWasAttemptedForExtension:(id)arg1 ;
-(void)reloadUserContentController;
-(void)setExtension:(id)arg1 isEnabled:(BOOL)arg2 ;
-(id)displayNameForExtension:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSSet *)extensions;
@end

