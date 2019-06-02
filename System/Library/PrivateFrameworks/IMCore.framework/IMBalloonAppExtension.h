/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:45 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMBalloonPlugin.h>

@class NSExtension, LSPlugInKitProxy, NSUUID, NSNumber;

@interface IMBalloonAppExtension : IMBalloonPlugin {

	BOOL _canSendDataPayloads;
	BOOL _shouldBalloonHideAppIcon;
	NSExtension* _extension;
	LSPlugInKitProxy* _proxy;
	NSUUID* _requestIdentifier;

}

@property (nonatomic,retain) LSPlugInKitProxy * proxy;                      //@synthesize proxy=_proxy - In the implementation block
@property (assign) NSUUID * requestIdentifier;                              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (assign,nonatomic) BOOL canSendDataPayloads;                      //@synthesize canSendDataPayloads=_canSendDataPayloads - In the implementation block
@property (assign,nonatomic) BOOL shouldBalloonHideAppIcon;                 //@synthesize shouldBalloonHideAppIcon=_shouldBalloonHideAppIcon - In the implementation block
@property (nonatomic,retain,readonly) NSExtension * extension;              //@synthesize extension=_extension - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * itemID; 
@property (nonatomic,retain,readonly) id<PKPlugIn> plugin; 
@property (nonatomic,readonly) BOOL isLaunchProhibited; 
-(NSUUID *)requestIdentifier;
-(id)_initWithPluginBundle:(id)arg1 extension:(id)arg2 pluginKitProxyClass:(Class)arg3 ;
-(id)extensionConnection;
-(id)proxyWithErrorHandle:(/*^block*/id)arg1 ;
-(BOOL)shouldBalloonHideAppIcon;
-(id)initWithPluginBundle:(id)arg1 extension:(id)arg2 ;
-(id)initWithPluginBundle:(id)arg1 appBundle:(id)arg2 ;
-(void)setCanSendDataPayloads:(BOOL)arg1 ;
-(void)setShouldBalloonHideAppIcon:(BOOL)arg1 ;
-(BOOL)isLaunchProhibited;
-(NSNumber *)itemID;
-(BOOL)isBetaPlugin;
-(id)initWithPluginBundle:(id)arg1 pluginKitProxy:(id)arg2 extension:(id)arg3 ;
-(BOOL)canSendDataPayloads;
-(void)setProxy:(LSPlugInKitProxy *)arg1 ;
-(id)version;
-(void)setRequestIdentifier:(NSUUID *)arg1 ;
-(NSExtension *)extension;
-(LSPlugInKitProxy *)proxy;
-(id<PKPlugIn>)plugin;
@end

