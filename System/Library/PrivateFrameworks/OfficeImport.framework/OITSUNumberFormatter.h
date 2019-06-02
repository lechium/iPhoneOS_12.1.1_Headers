/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSDictionary, NSString, NSMutableArray, OITSULocaleStructuredDictionary, NSMutableDictionary;

@interface OITSUNumberFormatter : NSObject {

	CFLocaleRef mLocale;
	CFArrayRef mDecimalFormatters;
	NSDictionary* mCurrencyFormatters;
	CFArrayRef mPercentageFormatters;
	CFArrayRef mScientificFormatters;
	CFNumberFormatterRef mFractionFormatter;
	NSString* mCurrencyString;
	NSString* mPercentageString;
	NSString* mScientificString;
	NSString* mDecimalString;
	NSString* mDecimalSeparator;
	NSString* mCurrencyDecimalSeparator;
	NSString* mGroupingSeparator;
	NSString* mCurrencyGroupingSeparator;
	NSString* mPercentSymbol;
	unsigned long long mGroupingSize;
	NSMutableArray* mTransformedDecimalStrings;
	NSMutableArray* mTransformedCurrencyStrings;
	NSMutableArray* mTransformedPercentageStrings;
	NSMutableArray* mTransformedScientificStrings;
	OITSULocaleStructuredDictionary* mHarmonizedNumberFormatterSymbols;
	NSMutableDictionary* mCurrencyCodeToHalfWidthSymbolMap;
	CFStringRef mAdditionalCurrencyCode;
	NSDictionary* mAdditionalCurrencyCodeFormatters;

}
+(id)currentLocaleDecimalSeparator;
+(id)currentLocaleCurrencyCode;
+(id)formatString:(id)arg1 transformedForNegativeStyle:(int)arg2 ;
+(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
+(id)currencySymbolForCurrencyCode:(id)arg1 ;
+(id)decimalSeparatorForLocale:(CFLocaleRef)arg1 ;
+(id)groupingSeparatorForLocale:(CFLocaleRef)arg1 ;
+(unsigned long long)groupingSizeForLocale:(CFLocaleRef)arg1 ;
+(id)userVisibleCurrencyCodes;
+(id)formatterForLocale:(CFLocaleRef)arg1 ;
+(id)stringBySubstitutingCharactersCFNumberFormatterDoesntUnderstand:(id)arg1 ;
+(CFNumberFormatterRef)createHarmonizedCFNumberFormatterWithLocale:(CFLocaleRef)arg1 style:(long long)arg2 ;
+(id)currencySymbolForCurrencyCode:(id)arg1 locale:(CFLocaleRef)arg2 ;
+(int)positionOfSymbol:(id)arg1 inNumberFormatSubpattern:(id)arg2 ;
+(void)formatString:(id)arg1 replaceOccurencesOfUnescapedString:(id)arg2 withString:(id)arg3 ;
+(int)positionOfMinusSignInNumberFormatSubpattern:(id)arg1 ;
+(id)displayNameForCurrencyCode:(id)arg1 ;
+(id)defaultCurrencyCodeForLocale:(CFLocaleRef)arg1 ;
+(id)defaultFormatStringForValueType:(int)arg1 ;
+(int)positionOfCurrencySymbolInNumberFormatSubpattern:(id)arg1 ;
+(id)availableCurrencyCodes;
+(unsigned short)defaultDecimalPlacesForCurrencyCode:(id)arg1 ;
+(id)currentLocaleCurrencyDecimalSeparator;
+(id)numberFormatStringSpecialSymbols;
+(id)currencyDecimalSeparatorForLocale:(CFLocaleRef)arg1 ;
+(id)currencyGroupingSeparatorForLocale:(CFLocaleRef)arg1 ;
+(id)percentSymbolForLocale:(CFLocaleRef)arg1 ;
+(void)initialize;
-(id)currencyCode;
-(id)initWithLocale:(const CFLocaleRef)arg1 ;
-(id)decimalSeparator;
-(id)groupingSeparator;
-(id)defaultFormatStringForValueType:(int)arg1 negativeStyle:(int)arg2 ;
-(id)currencySymbolForCurrencyCode:(id)arg1 ;
-(unsigned long long)groupingSize;
-(BOOL)decimalFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(BOOL)currencyFromString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 currencyCode:(const _CFString*)arg5 ;
-(BOOL)percentageFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(BOOL)scientificFromString:(CFStringRef)arg1 value:(double*)arg2 formatString:(const _CFString*)arg3 ;
-(BOOL)fractionFromString:(CFStringRef)arg1 value:(double*)arg2 ;
-(id)displayNameForCurrencyCode:(id)arg1 ;
-(id)currencyDecimalSeparator;
-(id)defaultFormatStringForValueType:(int)arg1 ;
-(id)currencyGroupingSeparator;
-(id)percentSymbol;
-(CFNumberFormatterRef)p_createHarmonizedCFNumberFormatterOfStyle:(long long)arg1 ;
-(void)numberPreferencesChanged:(id)arg1 ;
-(void)p_loadHarmonizedNumberFormatterSymbols;
-(CFArrayRef)p_decimalFormatters;
-(BOOL)p_valueFromString:(CFStringRef)arg1 formatters:(CFArrayRef)arg2 value:(double*)arg3 formatString:(const _CFString*)arg4 ;
-(id)findCurrencySymbolInString:(CFStringRef)arg1 additionalCurrencyCode:(CFStringRef)arg2 successfullString:(const _CFString*)arg3 ;
-(id)p_currencyFormatters;
-(id)p_arrayOfString:(id)arg1 ofCount:(unsigned long long)arg2 ;
-(BOOL)p_valueFromString:(CFStringRef)arg1 formatters:(CFArrayRef)arg2 formatterCurrencyKeys:(CFArrayRef)arg3 value:(double*)arg4 formatString:(const _CFString*)arg5 currencyCode:(const _CFString*)arg6 ;
-(id)p_createDictionaryOfCurrencyFormattersForCurrencies:(CFArrayRef)arg1 ;
-(CFArrayRef)p_percentageFormatters;
-(CFArrayRef)p_scientificFormatters;
-(id)halfWidthCurrencySymbolForCurrencyCode:(id)arg1 ;
-(void)dealloc;
@end

