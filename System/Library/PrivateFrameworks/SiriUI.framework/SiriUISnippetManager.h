/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:52 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AFClientPluginManager, NSDictionary, NSObject;

@interface SiriUISnippetManager : NSObject {

	AFClientPluginManager* _pluginManager;
	NSDictionary* _snippetExtensionsCache;
	NSObject*<OS_dispatch_queue> _snippetExtensionsQueue;

}
+(id)sharedInstance;
-(id)snippetViewControllerForSnippet:(id)arg1 ;
-(void)_prewarmSnippetExtensionsCacheSynchronously;
-(id)_snippetExtensionsCache;
-(BOOL)_compareObject:(id)arg1 toObject:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)_createDebugViewControllerForAceObject:(id)arg1 ;
-(id)filteredDisambiguationListItems:(id)arg1 ;
-(id)disambiguationItemForListItem:(id)arg1 disambiguationKey:(id)arg2 ;
-(BOOL)_listItem:(id)arg1 isEqualToListItem:(id)arg2 ;
-(BOOL)_listItem:(id)arg1 isPreferredOverListItem:(id)arg2 ;
-(void)preloadPluginBundles;
-(void)prewarmSnippetExtensionsCache;
-(id)extensionForSnippet:(id)arg1 ;
-(id)transcriptItemForObject:(id)arg1 ;
-(id)listItemToPickInAutodisambiguationForListItems:(id)arg1 ;
-(id)speakableProviderForObject:(id)arg1 ;
-(id)init;
@end

