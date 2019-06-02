/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface DUDictionaryManager : NSObject {

	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(id)assetManager;
-(id)init;
-(NSArray *)availableDefinitionDictionaries;
-(id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(BOOL)arg1 ;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_currentlyAvailableDefinitionDictionaries;
-(id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1 ;
-(id)_availableDictionaryAssets;
@end

