/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSMutableArray, SUScriptColor, NSArray, NSNumber, SUScriptDictionary, NSString;

@interface SUScriptDevice : SUScriptObject {

	NSMutableArray* _scriptFunctions;

}

@property (readonly) id accessibilityBoldTextEnabled; 
@property (readonly) id accessibilityButtonShapesEnabled; 
@property (readonly) id accessibilityDarkenSystemColors; 
@property (readonly) id accessibilityEnhanceBackgroundContrast; 
@property (readonly) id accessibilityReduceMotion; 
@property (readonly) id accessibilitySingleColorSelected; 
@property (readonly) SUScriptColor * accessibilitySingleColor; 
@property (readonly) id accessibilityUseDarkerKeyboard; 
@property (readonly) long long activeNetworkType; 
@property (readonly) NSArray * automaticDownloadMediaTypes; 
@property (readonly) unsigned deviceTypeIdentifier; 
@property (readonly) NSNumber * diskSpaceAvailable; 
@property (readonly) SUScriptDictionary * diskUsageDictionary; 
@property (readonly) long long hardwareType; 
@property (readonly) NSNumber * mainScreenScale; 
@property (readonly) NSNumber * metricsPostFrequencyOverride; 
@property (readonly) id needsToneRegrantOption; 
@property (readonly) NSString * capabilityNameEmail; 
@property (readonly) NSString * capabilityNameExplicitMedia; 
@property (readonly) NSString * capabilityNameHDVideo; 
@property (readonly) NSString * capabilityNameHDVideo1080p; 
@property (readonly) NSString * capabilityNameHDVideo720p; 
@property (readonly) NSString * capabilityNamePodcasts; 
@property (readonly) NSString * capabilityNameWiFi; 
@property (readonly) long long freeSpaceEffortLevelDoNothing; 
@property (readonly) long long freeSpaceEffortLevelAutomaticOnly; 
@property (readonly) long long freeSpaceEffortLevelManualSpaceManagement; 
@property (readonly) long long freeSpaceEffortLevelPromptUser; 
@property (readonly) NSString * freeSpaceOptionEffortLevel; 
@property (readonly) long long hardwareTypeAppleTVJ33; 
@property (readonly) long long hardwareTypeAppleTVK66; 
@property (readonly) long long hardwareTypeIPadJ1; 
@property (readonly) long long hardwareTypeIPadJ2; 
@property (readonly) long long hardwareTypeIPadJ2a; 
@property (readonly) long long hardwareTypeIPadK93; 
@property (readonly) long long hardwareTypeIPadK93a; 
@property (readonly) long long hardwareTypeIPadK94; 
@property (readonly) long long hardwareTypeIPadK95; 
@property (readonly) long long hardwareTypeIPhoneM68; 
@property (readonly) long long hardwareTypeIPhoneN82; 
@property (readonly) long long hardwareTypeIPhoneN88; 
@property (readonly) long long hardwareTypeIPhoneN90; 
@property (readonly) long long hardwareTypeIPhoneN92; 
@property (readonly) long long hardwareTypeIPhoneN94; 
@property (readonly) long long hardwareTypeIPodTouchN45; 
@property (readonly) long long hardwareTypeIPodTouchN18; 
@property (readonly) long long hardwareTypeIPodTouchN72; 
@property (readonly) long long hardwareTypeIPodTouchN81; 
@property (readonly) long long hardwareTypeIPodTouchN81a; 
@property (readonly) long long hardwareTypeUnknown; 
@property (readonly) long long hardwareTypeWildcatK48; 
@property (readonly) long long networkTypeNone; 
@property (readonly) long long networkType2G; 
@property (readonly) long long networkType3G; 
@property (readonly) long long networkType4G; 
@property (readonly) long long networkType5G; 
@property (readonly) long long networkType6G; 
@property (readonly) long long networkType7G; 
@property (readonly) long long networkType8G; 
@property (readonly) long long networkType9G; 
@property (readonly) long long networkTypeWiFi; 
@property (readonly) NSString * orientationStringLandscapeLeft; 
@property (readonly) NSString * orientationStringLandscapeRight; 
@property (readonly) NSString * orientationStringPortrait; 
@property (readonly) NSString * orientationStringPortraitUpsideDown; 
@property (readonly) long long restrictionBoolNo; 
@property (readonly) long long restrictionBoolNoData; 
@property (readonly) long long restrictionBoolYes; 
@property (readonly) NSString * restrictionAccountModificationAllowed; 
@property (readonly) NSString * restrictionAllowGlobalBackgroundFetchWhenRoaming; 
@property (readonly) NSString * restrictionAllowVoiceDialing; 
@property (readonly) NSString * restrictionAppInstallationAllowed; 
@property (readonly) NSString * restrictionAppRemovalAllowed; 
@property (readonly) NSString * restrictionBookStoreAllowed; 
@property (readonly) NSString * restrictionBookStoreEroticaAllowed; 
@property (readonly) NSString * restrictionCameraAllowed; 
@property (readonly) NSString * restrictionCellularHDUploadsAllowed; 
@property (readonly) NSString * restrictionITunesAllowed; 
@property (readonly) NSString * restrictionITunesSocialAllowed; 
@property (readonly) NSString * restrictionMultiplayerGamingAllowed; 
@property (readonly) NSString * restrictionSafariAllowed; 
@property (readonly) NSString * restrictionScreenShotAllowed; 
@property (readonly) NSString * restrictionVideoConferencingAllowed; 
@property (readonly) NSString * restrictionYouTubeAllowed; 
@property (readonly) NSString * restrictionTypeApplications; 
@property (readonly) NSString * restrictionTypeMovies; 
@property (readonly) NSString * restrictionTypeTelevision; 
@property (readonly) NSString * UTIImage; 
@property (readonly) NSString * UTIMovie; 
@property (readonly) NSString * UTIText; 
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(id)attributeKeys;
-(id)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(BOOL)arg2 ;
-(long long)activeNetworkType;
-(NSString *)capabilityNamePodcasts;
-(NSString *)capabilityNameEmail;
-(NSNumber *)diskSpaceAvailable;
-(long long)hardwareType;
-(NSString *)capabilityNameExplicitMedia;
-(void)_autoDownloadKindsChangedNotification:(id)arg1 ;
-(void)_accessibilitySettingsChangedNotification:(id)arg1 ;
-(long long)_deviceCapabilityForString:(id)arg1 ;
-(void)_addScriptFunction:(id)arg1 ;
-(NSString *)freeSpaceOptionEffortLevel;
-(void)_removeScriptFunction:(id)arg1 ;
-(NSString *)restrictionTypeApplications;
-(NSString *)restrictionTypeMovies;
-(NSString *)restrictionTypeTelevision;
-(long long)networkType2G;
-(long long)networkType3G;
-(long long)networkType4G;
-(long long)networkType5G;
-(long long)networkType6G;
-(long long)networkType7G;
-(long long)networkType8G;
-(long long)networkType9G;
-(long long)networkTypeWiFi;
-(long long)networkTypeNone;
-(unsigned)deviceTypeIdentifier;
-(long long)hardwareTypeAppleTVJ33;
-(long long)hardwareTypeAppleTVK66;
-(long long)hardwareTypeIPadJ1;
-(long long)hardwareTypeIPadJ2;
-(long long)hardwareTypeIPadJ2a;
-(long long)hardwareTypeIPadK93;
-(long long)hardwareTypeIPadK93a;
-(long long)hardwareTypeIPadK94;
-(long long)hardwareTypeIPadK95;
-(long long)hardwareTypeIPhoneM68;
-(long long)hardwareTypeIPhoneN82;
-(long long)hardwareTypeIPhoneN88;
-(long long)hardwareTypeIPhoneN90;
-(long long)hardwareTypeIPhoneN92;
-(long long)hardwareTypeIPhoneN94;
-(long long)hardwareTypeIPodTouchN45;
-(long long)hardwareTypeIPodTouchN72;
-(long long)hardwareTypeIPodTouchN18;
-(long long)hardwareTypeIPodTouchN81;
-(long long)hardwareTypeIPodTouchN81a;
-(long long)hardwareTypeWildcatK48;
-(long long)hardwareTypeUnknown;
-(NSString *)capabilityNameHDVideo;
-(NSString *)capabilityNameHDVideo1080p;
-(NSString *)capabilityNameHDVideo720p;
-(NSString *)capabilityNameWiFi;
-(long long)boolValueForRestriction:(id)arg1 ;
-(id)getMachineIdentifierForAccountIdentifier:(id)arg1 ;
-(void)requestFreeSpaceWithBytes:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)restrictionLevelForType:(id)arg1 ;
-(void)setAutomaticDownloadKinds:(id)arg1 withCompletionHandler:(id)arg2 ;
-(id)UTIForURL:(id)arg1 ;
-(id)valueForRestriction:(id)arg1 ;
-(id)accessibilityBoldTextEnabled;
-(id)accessibilityButtonShapesEnabled;
-(id)accessibilityDarkenSystemColors;
-(id)accessibilityEnhanceBackgroundContrast;
-(id)accessibilityReduceMotion;
-(id)accessibilitySingleColorSelected;
-(SUScriptColor *)accessibilitySingleColor;
-(id)accessibilityUseDarkerKeyboard;
-(NSArray *)automaticDownloadMediaTypes;
-(SUScriptDictionary *)diskUsageDictionary;
-(NSNumber *)mainScreenScale;
-(NSNumber *)metricsPostFrequencyOverride;
-(id)needsToneRegrantOption;
-(void)setDiskUsageDictionary:(SUScriptDictionary *)arg1 ;
-(NSString *)orientationStringLandscapeLeft;
-(NSString *)orientationStringLandscapeRight;
-(NSString *)orientationStringPortrait;
-(NSString *)orientationStringPortraitUpsideDown;
-(long long)freeSpaceEffortLevelDoNothing;
-(long long)freeSpaceEffortLevelAutomaticOnly;
-(long long)freeSpaceEffortLevelManualSpaceManagement;
-(long long)freeSpaceEffortLevelPromptUser;
-(long long)restrictionBoolNo;
-(long long)restrictionBoolNoData;
-(long long)restrictionBoolYes;
-(NSString *)restrictionAccountModificationAllowed;
-(NSString *)restrictionAllowGlobalBackgroundFetchWhenRoaming;
-(NSString *)restrictionAllowVoiceDialing;
-(NSString *)restrictionAppInstallationAllowed;
-(NSString *)restrictionAppRemovalAllowed;
-(NSString *)restrictionBookStoreAllowed;
-(NSString *)restrictionBookStoreEroticaAllowed;
-(NSString *)restrictionCameraAllowed;
-(NSString *)restrictionCellularHDUploadsAllowed;
-(NSString *)restrictionITunesAllowed;
-(NSString *)restrictionITunesSocialAllowed;
-(NSString *)restrictionMultiplayerGamingAllowed;
-(NSString *)restrictionSafariAllowed;
-(NSString *)restrictionScreenShotAllowed;
-(NSString *)restrictionVideoConferencingAllowed;
-(NSString *)restrictionYouTubeAllowed;
-(NSString *)UTIImage;
-(NSString *)UTIMovie;
-(NSString *)UTIText;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)hasCapability:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

