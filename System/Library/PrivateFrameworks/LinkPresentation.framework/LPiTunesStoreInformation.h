/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SKCloudServiceController, NSMapTable, NSString;

@interface LPiTunesStoreInformation : NSObject {

	SKCloudServiceController* _cloudServiceController;
	NSMapTable* _changeHandlers;
	unsigned long long _capabilities;
	BOOL _hasUpdatedCapabilities;
	NSString* _storefrontIdentifier;

}

@property (readonly) unsigned long long capabilities; 
@property (copy,readonly) NSString * storefrontIdentifier; 
+(id)shared;
+(unsigned long long)_convertCapabilities:(unsigned long long)arg1 ;
+(id)_convertNewStorefrontIdentifier:(id)arg1 ;
-(NSString *)storefrontIdentifier;
-(void)_setCapabilities:(unsigned long long)arg1 ;
-(void)registerForStoreAvailablityChangesWithToken:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)unregisterForStoreAvailablityChangesWithToken:(id)arg1 ;
-(unsigned long long)userStateForMediaStorefrontIdentifier:(id)arg1 ;
-(void)_setStorefrontIdentifier:(id)arg1 ;
-(void)_storefrontDidChangeNotification;
-(void)_capabilitiesDidChangeNotification;
-(void)_notifyChangeHandlers;
-(unsigned long long)capabilities;
-(id)init;
@end

