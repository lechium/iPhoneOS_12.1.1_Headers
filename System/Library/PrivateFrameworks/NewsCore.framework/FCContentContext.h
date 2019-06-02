/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCNetworkReachabilityRequirementObserving.h>
#import <libobjc.A.dylib/FCCoreConfigurationObserving.h>
#import <libobjc.A.dylib/FCContentContext.h>

@protocol FCCoreConfigurationManager, FCPPTContext, FCBackgroundTaskable, FCWebArchiveSource, FCNetworkReachabilityRequirement;
@class FCArticleController, FCAssetManager, FCFlintResourceManager, FCTagController, FCNetworkBehaviorMonitor, FCContextConfiguration, NSString, NSURL, FCContentContextInternal;

@interface FCContentContext : NSObject <FCNetworkReachabilityRequirementObserving, FCCoreConfigurationObserving, FCContentContext> {

	id<FCCoreConfigurationManager> _configurationManager;
	FCArticleController* _articleController;
	FCAssetManager* _assetManager;
	FCFlintResourceManager* _flintResourceManager;
	FCTagController* _tagController;
	FCNetworkBehaviorMonitor* _networkBehaviorMonitor;
	id<FCPPTContext> _pptContext;
	id<FCBackgroundTaskable> _backgroundTaskable;
	id<FCWebArchiveSource> _webArchiveSource;
	FCContextConfiguration* _contextConfiguration;
	NSString* _contentDirectory;
	NSURL* _assetCacheDirectoryURL;
	NSURL* _webArchiveCacheDirectoryURL;
	FCContentContextInternal* _internalContentContext;
	id<FCNetworkReachabilityRequirement> _supportedCountryNetworkReachabilityRequirement;

}

@property (nonatomic,copy) FCContextConfiguration * contextConfiguration;                                                      //@synthesize contextConfiguration=_contextConfiguration - In the implementation block
@property (nonatomic,copy) NSString * contentDirectory;                                                                        //@synthesize contentDirectory=_contentDirectory - In the implementation block
@property (nonatomic,retain) NSURL * assetCacheDirectoryURL;                                                                   //@synthesize assetCacheDirectoryURL=_assetCacheDirectoryURL - In the implementation block
@property (nonatomic,retain) NSURL * webArchiveCacheDirectoryURL;                                                              //@synthesize webArchiveCacheDirectoryURL=_webArchiveCacheDirectoryURL - In the implementation block
@property (nonatomic,retain) FCContentContextInternal * internalContentContext;                                                //@synthesize internalContentContext=_internalContentContext - In the implementation block
@property (nonatomic,retain) id<FCNetworkReachabilityRequirement> supportedCountryNetworkReachabilityRequirement;              //@synthesize supportedCountryNetworkReachabilityRequirement=_supportedCountryNetworkReachabilityRequirement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * contentStoreFrontID; 
@property (nonatomic,copy,readonly) NSString * supportedContentStoreFrontID; 
@property (nonatomic,readonly) id<FCCoreConfigurationManager> configurationManager;                                            //@synthesize configurationManager=_configurationManager - In the implementation block
@property (nonatomic,readonly) id<FCNewsAppConfigurationManager> appConfigurationManager; 
@property (nonatomic,readonly) FCAssetManager * assetManager;                                                                  //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,readonly) FCArticleController * articleController;                                                        //@synthesize articleController=_articleController - In the implementation block
@property (nonatomic,readonly) FCTagController * tagController;                                                                //@synthesize tagController=_tagController - In the implementation block
@property (nonatomic,readonly) FCFlintResourceManager * flintResourceManager;                                                  //@synthesize flintResourceManager=_flintResourceManager - In the implementation block
@property (nonatomic,readonly) FCNetworkBehaviorMonitor * networkBehaviorMonitor;                                              //@synthesize networkBehaviorMonitor=_networkBehaviorMonitor - In the implementation block
@property (nonatomic,retain) id<FCWebArchiveSource> webArchiveSource;                                                          //@synthesize webArchiveSource=_webArchiveSource - In the implementation block
@property (nonatomic,readonly) id<FCPPTContext> pptContext;                                                                    //@synthesize pptContext=_pptContext - In the implementation block
@property (nonatomic,__weak,readonly) id<FCBackgroundTaskable> backgroundTaskable;                                             //@synthesize backgroundTaskable=_backgroundTaskable - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentEnvironmentToken; 
+(void)initialize;
-(NSString *)contentStoreFrontID;
-(id<FCCoreConfigurationManager>)configurationManager;
-(void)configurationManager:(id)arg1 configurationDidChange:(id)arg2 ;
-(FCTagController *)tagController;
-(NSString *)contentDirectory;
-(void)enableFlushingWithFlushingThreshold:(unsigned long long)arg1 ;
-(FCContentContextInternal *)internalContentContext;
-(id<FCPPTContext>)pptContext;
-(FCArticleController *)articleController;
-(FCContextConfiguration *)contextConfiguration;
-(NSString *)supportedContentStoreFrontID;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentHostDirectory:(id)arg3 networkBehaviorMonitor:(id)arg4 desiredHeadlineFieldOptions:(unsigned long long)arg5 feedUsage:(long long)arg6 backgroundTaskable:(id)arg7 pptContext:(id)arg8 ;
-(id)initWithConfiguration:(id)arg1 configurationManager:(id)arg2 contentDatabase:(id)arg3 contentHostDirectory:(id)arg4 networkBehaviorMonitor:(id)arg5 setupExcerptURLProtocol:(BOOL)arg6 desiredHeadlineFieldOptions:(unsigned long long)arg7 feedUsage:(long long)arg8 backgroundTaskable:(id)arg9 pptContext:(id)arg10 ;
-(void)ppt_overrideFeedEndpoint:(long long)arg1 ;
-(NSString *)contentEnvironmentToken;
-(FCFlintResourceManager *)flintResourceManager;
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)news_core_ConfigurationManager;
-(NSURL *)assetCacheDirectoryURL;
-(NSURL *)webArchiveCacheDirectoryURL;
-(id<FCWebArchiveSource>)webArchiveSource;
-(void)setWebArchiveSource:(id<FCWebArchiveSource>)arg1 ;
-(id)recordSourceWithSchema:(id)arg1 ;
-(id)recordTreeSourceWithRecordSources:(id)arg1 ;
-(FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
-(id<FCBackgroundTaskable>)backgroundTaskable;
-(void)networkReachabilityRequirementDidBecomeDirty:(id)arg1 ;
-(void)_updateReachabilityGivenRequirements;
-(id<FCNetworkReachabilityRequirement>)supportedCountryNetworkReachabilityRequirement;
-(void)setWebArchiveCacheDirectoryURL:(NSURL *)arg1 ;
-(id)webArchiveSourceAllowingNil;
-(void)setContextConfiguration:(FCContextConfiguration *)arg1 ;
-(void)setContentDirectory:(NSString *)arg1 ;
-(void)setAssetCacheDirectoryURL:(NSURL *)arg1 ;
-(void)setInternalContentContext:(FCContentContextInternal *)arg1 ;
-(void)setSupportedCountryNetworkReachabilityRequirement:(id<FCNetworkReachabilityRequirement>)arg1 ;
-(void)dealloc;
-(FCAssetManager *)assetManager;
@end
