/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:46 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKPlugIn;
@class NSBundle, NSNumber, NSString;

@interface IMBalloonApp : NSObject {

	BOOL _isBetaPlugin;
	BOOL _isLaunchProhibited;
	BOOL _isStickerPackOnly;
	BOOL _showInBrowser;
	BOOL _shouldBalloonHideAppIcon;
	BOOL _shouldHideAppSwitcher;
	BOOL _canSendDataPayloads;
	BOOL _pluginLoaded;
	Class _browserClass;
	Class _dataSourceClass;
	Class _customTypingIndicatorLayerClass;
	Class _bubbleClass;
	Class _entryClass;
	NSBundle* _appBundle;
	NSBundle* _pluginBundle;
	NSNumber* _itemID;
	NSString* _browserDisplayName;
	NSString* _identifier;
	NSString* _version;
	id<PKPlugIn> _plugin;
	unsigned long long _presentationContexts;

}

@property (assign,nonatomic) BOOL canSendDataPayloads;                             //@synthesize canSendDataPayloads=_canSendDataPayloads - In the implementation block
@property (assign,nonatomic) BOOL isLaunchProhibited;                              //@synthesize isLaunchProhibited=_isLaunchProhibited - In the implementation block
@property (assign,nonatomic) BOOL showInBrowser;                                   //@synthesize showInBrowser=_showInBrowser - In the implementation block
@property (assign,nonatomic) BOOL isEnabled; 
@property (assign,nonatomic) BOOL shouldBalloonHideAppIcon;                        //@synthesize shouldBalloonHideAppIcon=_shouldBalloonHideAppIcon - In the implementation block
@property (assign,nonatomic) BOOL shouldHideAppSwitcher;                           //@synthesize shouldHideAppSwitcher=_shouldHideAppSwitcher - In the implementation block
@property (nonatomic,retain) Class browserClass;                                   //@synthesize browserClass=_browserClass - In the implementation block
@property (nonatomic,retain) Class bubbleClass;                                    //@synthesize bubbleClass=_bubbleClass - In the implementation block
@property (nonatomic,retain) Class customTypingIndicatorLayerClass;                //@synthesize customTypingIndicatorLayerClass=_customTypingIndicatorLayerClass - In the implementation block
@property (nonatomic,retain) Class dataSourceClass;                                //@synthesize dataSourceClass=_dataSourceClass - In the implementation block
@property (nonatomic,retain) Class entryClass;                                     //@synthesize entryClass=_entryClass - In the implementation block
@property (nonatomic,retain) NSBundle * appBundle;                                 //@synthesize appBundle=_appBundle - In the implementation block
@property (nonatomic,retain) NSBundle * pluginBundle;                              //@synthesize pluginBundle=_pluginBundle - In the implementation block
@property (nonatomic,retain) NSNumber * itemID;                                    //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain) NSString * browserDisplayName;                        //@synthesize browserDisplayName=_browserDisplayName - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) id<PKPlugIn> plugin;                                  //@synthesize plugin=_plugin - In the implementation block
@property (assign,nonatomic) unsigned long long presentationContexts;              //@synthesize presentationContexts=_presentationContexts - In the implementation block
@property (assign,nonatomic) BOOL pluginLoaded;                                    //@synthesize pluginLoaded=_pluginLoaded - In the implementation block
@property (nonatomic,readonly) BOOL isBetaPlugin;                                  //@synthesize isBetaPlugin=_isBetaPlugin - In the implementation block
@property (nonatomic,readonly) BOOL isStickerPackOnly;                             //@synthesize isStickerPackOnly=_isStickerPackOnly - In the implementation block
@property (nonatomic,readonly) NSString * version;                                 //@synthesize version=_version - In the implementation block
+(id)appWithPluginBundle:(id)arg1 ;
+(id)appWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
+(id)appWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
+(unsigned long long)presentationContextsForInfoPlistArray:(id)arg1 isStickerPackOnly:(BOOL)arg2 ;
+(id)_unremovableDisabledApps;
+(void)_setUnremovableDisabledApps:(id)arg1 ;
+(id)appWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(void)setPluginLoaded:(BOOL)arg1 ;
-(void)setShowInBrowser:(BOOL)arg1 ;
-(void)setBubbleClass:(Class)arg1 ;
-(void)setBrowserClass:(Class)arg1 ;
-(void)setCustomTypingIndicatorLayerClass:(Class)arg1 ;
-(void)setEntryClass:(Class)arg1 ;
-(BOOL)isStickerPackOnly;
-(Class)entryClass;
-(BOOL)pluginLoaded;
-(void)setBrowserDisplayName:(NSString *)arg1 ;
-(void)setPresentationContexts:(unsigned long long)arg1 ;
-(id)extensionConnection;
-(id)proxyWithErrorHandle:(/*^block*/id)arg1 ;
-(BOOL)shouldBalloonHideAppIcon;
-(id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
-(void)setCanSendDataPayloads:(BOOL)arg1 ;
-(void)setShouldBalloonHideAppIcon:(BOOL)arg1 ;
-(void)setShouldHideAppSwitcher:(BOOL)arg1 ;
-(void)_loadBundle;
-(void)setIsLaunchProhibited:(BOOL)arg1 ;
-(void)setAppBundle:(NSBundle *)arg1 ;
-(void)setPluginBundle:(NSBundle *)arg1 ;
-(void)setDataSourceClass:(Class)arg1 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(NSString *)browserDisplayName;
-(Class)customTypingIndicatorLayerClass;
-(Class)dataSourceClass;
-(Class)bubbleClass;
-(BOOL)shouldHideAppSwitcher;
-(BOOL)isLaunchProhibited;
-(BOOL)showInBrowser;
-(unsigned long long)presentationContexts;
-(Class)browserClass;
-(NSBundle *)appBundle;
-(NSBundle *)pluginBundle;
-(NSNumber *)itemID;
-(BOOL)isBetaPlugin;
-(BOOL)canSendDataPayloads;
-(NSString *)identifier;
-(BOOL)isEnabled;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)version;
-(void)setIsEnabled:(BOOL)arg1 ;
-(id<PKPlugIn>)plugin;
-(void)setPlugin:(id<PKPlugIn>)arg1 ;
@end

