/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariFoundation.framework/SafariFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSSet, NSMutableOrderedSet, NSExtension;

@interface SFCredentialProviderExtensionManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id _extensionMatchingToken;
	NSSet* _extensions;
	NSMutableOrderedSet* _observers;
	BOOL _errorEncounteredDuringLastExtensionDiscovery;

}

@property (nonatomic,readonly) NSSet * extensions; 
@property (nonatomic,readonly) NSExtension * primaryExtension; 
@property (nonatomic,readonly) NSExtension * primaryExtensionSync; 
+(id)sharedManager;
-(void)_updateExtensions:(id)arg1 ;
-(id)_extensions;
-(void)_endExtensionDiscovery;
-(NSExtension *)primaryExtensionSync;
-(void)getPrimaryExtensionWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)extensionIsEnabled:(id)arg1 ;
-(void)setExtension:(id)arg1 isEnabled:(BOOL)arg2 ;
-(id)displayNameForExtension:(id)arg1 ;
-(NSExtension *)primaryExtension;
-(void)_notifyObservers:(id)arg1 ;
-(BOOL)shouldShowConfigurationUIForEnablingExtension:(id)arg1 ;
-(void)_beginExtensionDiscovery;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSSet *)extensions;
@end

