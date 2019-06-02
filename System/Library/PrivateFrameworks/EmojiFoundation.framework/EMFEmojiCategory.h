/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface EMFEmojiCategory : NSObject {

	NSString* _identifier;

}

@property (nonatomic,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * shortLocalizedName; 
+(id)PrepopulatedEmoji;
+(id)PeopleEmoji;
+(id)NatureEmoji;
+(id)FoodAndDrinkEmoji;
+(id)ActivityEmoji;
+(id)TravelAndPlacesEmoji;
+(id)ObjectsEmoji;
+(id)SymbolsEmoji;
+(id)computeEmojiFlagsSortedByLanguage;
+(id)extraFlagsForCountryCode:(id)arg1 ;
+(id)flagEmojiCountryCodesCommon;
+(id)stringToRegionalIndicatorString:(id)arg1 ;
+(id)insertionFlagsForCountryCodes:(id)arg1 inSortedCountryCodes:(id)arg2 ;
+(void)insertToSortedCountries:(id)arg1 withAdditionalFlags:(id)arg2 ;
+(id)FlagsEmoji;
+(id)_baseLocalizationKeyForIdentifier:(id)arg1 ;
+(id)localizedRecentsDescriptionForLocale:(id)arg1 ;
+(id)localizedSkinToneEmojiDescriptionForLocale:(id)arg1 ;
+(id)DingbatsVariantEmoji;
+(id)NoneVariantEmoji;
+(id)SkinToneEmoji;
+(id)GenderEmoji;
+(id)ProfessionEmoji;
+(id)NewlyAddedEmoji;
+(id)categoryIdentifierList;
+(id)localizedRecentsDescription;
+(BOOL)_isFlagEmoji:(id)arg1 ;
+(BOOL)_isNewlyAddedEmoji:(id)arg1 ;
+(id)CelebrationEmoji;
+(BOOL)_isNoneVariantEmoji:(id)arg1 ;
+(BOOL)_isDingbatsVariantEmoji:(id)arg1 ;
+(BOOL)_isSkinToneEmoji:(id)arg1 ;
+(BOOL)_isGenderEmoji:(id)arg1 ;
+(BOOL)_isProfessionEmoji:(id)arg1 ;
+(id)_emojiSetForIdentifier:(id)arg1 ;
+(id)categoryWithIdentifier:(id)arg1 ;
+(id)localizedSkinToneEmojiDescription;
-(id)localizedNameForLocale:(id)arg1 ;
-(id)shortLocalizedNameForLocale:(id)arg1 ;
-(id)emojiTokensForLocaleData:(id)arg1 ;
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)localizedName;
-(id)initWithIdentifier:(id)arg1 ;
-(NSString *)shortLocalizedName;
@end

