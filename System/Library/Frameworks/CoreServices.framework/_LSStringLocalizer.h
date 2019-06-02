/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreServices/CoreServices-Structs.h>
@class NSURL, NSString, NSMutableDictionary, NSArray;

@interface _LSStringLocalizer : NSObject {

	NSURL* _url;
	BOOL _isMainBundle;
	NSString* _stringsFile;
	NSMutableDictionary* _stringsFileContent;
	NSMutableDictionary* _unlocalizedInfoPlistStrings;
	NSArray* _bundleLocalizations;

}
+(id)frameworkBundleLocalizer;
+(id)coreTypesLocalizer;
+(void)setPreferredLocalizationsForXCTests:(id)arg1 ;
+(id)preferredLocalizationsForXCTests;
+(id)queue;
-(id)_initWithBundleURL:(id)arg1 stringsFile:(id)arg2 keepBundle:(BOOL)arg3 ;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 preferredLocalizations:(id)arg3 keep:(BOOL)arg4 ;
-(id)localizedStringWithString:(id)arg1 inBundle:(CFBundleRef)arg2 localeCode:(id)arg3 keep:(BOOL)arg4 ;
-(id)localizedStringWithString:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)initWithDatabase:(LSDatabase*)arg1 bundleUnit:(unsigned)arg2 delegate:(unsigned)arg3 ;
-(id)initWithDatabase:(LSDatabase*)arg1 pluginUnit:(unsigned)arg2 ;
-(id)stringsFileContentInBundle:(CFBundleRef)arg1 withLocaleCode:(id)arg2 keep:(BOOL)arg3 ;
-(id)localizedStringDictionaryWithString:(id)arg1 defaultValue:(id)arg2 ;
-(id)initWithBundleURL:(id)arg1 stringsFile:(id)arg2 ;
-(id)localizedStringsWithStrings:(id)arg1 preferredLocalizations:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(CFBundleRef)bundle;
@end

