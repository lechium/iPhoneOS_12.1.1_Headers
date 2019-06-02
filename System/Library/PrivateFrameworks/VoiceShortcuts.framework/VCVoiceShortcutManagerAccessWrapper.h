/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCVoiceShortcutManagerXPCInterface.h>

@class VCAccessSpecifier, VCVoiceShortcutManager, NSString;

@interface VCVoiceShortcutManagerAccessWrapper : NSObject <VCVoiceShortcutManagerXPCInterface> {

	VCAccessSpecifier* _accessSpecifier;
	VCVoiceShortcutManager* _underlyingManager;

}

@property (nonatomic,readonly) VCVoiceShortcutManager * underlyingManager;              //@synthesize underlyingManager=_underlyingManager - In the implementation block
@property (nonatomic,readonly) VCAccessSpecifier * accessSpecifier;                     //@synthesize accessSpecifier=_accessSpecifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getVoiceShortcutsWithCompletion:(/*^block*/id)arg1 ;
-(void)getVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShortcutSuggestions:(id)arg1 forAppWithBundleIdentifier:(id)arg2 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getVoiceShortcutWithPhrase:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)describeSyncStateIncludingDeleted:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithUnderlyingManager:(id)arg1 accessSpecifier:(id)arg2 ;
-(VCVoiceShortcutManager *)underlyingManager;
-(VCAccessSpecifier *)accessSpecifier;
-(void)getNumberOfVoiceShortcutsWithCompletion:(/*^block*/id)arg1 ;
-(void)getVoiceShortcutsForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addVoiceShortcut:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestSyncForServiceClassName:(id)arg1 forceReset:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestDataMigration:(/*^block*/id)arg1 ;
-(void)getShortcutSuggestionsForAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getShortcutSuggestionsForAllAppsWithLimit:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCloudKitAccountStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)deleteVoiceShortcutWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateVoiceShortcutWithIdentifier:(id)arg1 phrase:(id)arg2 workflow:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)validateVoiceShortcutPhrases:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
